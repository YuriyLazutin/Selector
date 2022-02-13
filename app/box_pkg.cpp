#include "box_pkg.h"
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QApplication>
#include <QToolBar>
#include <QVBoxLayout>

BOX_PKG::BOX_PKG(QSplitter *parent) : QSplitter(parent)
{
  setObjectName(QString::fromUtf8("box_pkg"));
    FileState = FILE_STATE_UNCHANGED;

    // Head button
    act_head.setObjectName(QString::fromUtf8("box_pkg_action_head"));
    act_head.setText(QApplication::translate("Selector", "Head", nullptr));
    act_head.setToolTip("Switch to package head");
    act_head.setStatusTip("Switch to package head");
    act_head.setWhatsThis("Switch to package head");
    act_head.setIcon(QPixmap(":/icons/pkg_head.png"));
    act_head.setCheckable(true);
    act_head.setChecked(true);
    //act_head.setEnabled(false);

    // Body button
    act_body.setObjectName(QString::fromUtf8("box_pkg_action_body"));
    act_body.setText(QApplication::translate("Selector", "Body", nullptr));
    act_body.setToolTip("Switch to package body");
    act_body.setStatusTip("Switch to package body");
    act_body.setWhatsThis("Switch to package body");
    act_body.setIcon(QPixmap(":/icons/pkg_body.png"));
    act_body.setCheckable(true);
    act_body.setChecked(false);
    //act_body.setEnabled(false);

    QToolBar* pToolBar = new QToolBar;
    pToolBar->setObjectName(QString::fromUtf8("box_pkg_toolbar"));
    pToolBar->setStyleSheet(QString::fromUtf8("background-color: rgb(183, 199, 206);"));
    pToolBar->setWindowTitle("Switch package parts");
    pToolBar->setIconSize(QSize(24, 24));
    //pToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    pToolBar->addAction(&act_head);
    pToolBar->addAction(&act_body);

    // Create tree
    PkgTree.setObjectName(QString::fromUtf8("box_pkg_tree_widget"));
    PkgTree.setHeaderLabel("Package contents");
    PkgTree.setStyleSheet(QString::fromUtf8("background-color: rgb(223, 239, 246);"));
    PkgTree.headerItem()->setHidden(true);
    PkgTree.resize(280,739); //739 = 768-24(toolbar)-5(margin)

    // Add fake items into pkg tree
    QTreeWidgetItem* pItem;
    pItem = new QTreeWidgetItem();
    pItem->setText(0, "Declare");
    pItem->setIcon(0, QPixmap(":/icons/open_file.png"));
    pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
    PkgTree.addTopLevelItem(pItem);
    pItem = new QTreeWidgetItem();
    pItem->setText(0, "Begin");
    pItem->setIcon(0, QPixmap(":/icons/open_file.png"));
    pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
    PkgTree.addTopLevelItem(pItem);
    pItem = new QTreeWidgetItem();
    pItem->setText(0, "End");
    pItem->setIcon(0, QPixmap(":/icons/open_file.png"));
    pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
    PkgTree.addTopLevelItem(pItem);

    //Layout setup
    QWidget* pRightWidget = new QWidget(this);
    QVBoxLayout* pVLayout = new QVBoxLayout(pRightWidget);
    pVLayout->setMargin(1);
    pVLayout->setSpacing(5);
    pVLayout->addWidget(pToolBar);
    pVLayout->addWidget(&PkgTree);
    pRightWidget->setLayout(pVLayout);

    setFixedSize(1280, 768);
    setOrientation(Qt::Horizontal);

    addWidget(pRightWidget);

    PkgText.setStyleSheet(QString::fromUtf8("background-color: rgb(223, 239, 246);"));
    PkgText.resize(1000,768);
    addWidget(&PkgText);

    connect(&PkgText, SIGNAL(textChanged()), SLOT(slotFileChanged()));

    //setSizes(QList<int>({200, 1200}));
    //setSizes({static_cast<int>(10000 / 1.618), static_cast<int>(10000 - 10000 / 1.618)});
    // Stretch in Golden ratio
    //setStretchFactor(0,1);
    setStretchFactor(1,1.618);
}

BOX_PKG::~BOX_PKG()
{

}

void BOX_PKG::SetFileState(const unsigned int NewState)
{
  unsigned int OldState = FileState;
  FileState = NewState;

  if (OldState != NewState)
    isFileChanged() ? emit fileWasChanged() : emit fileWasUnChanged();
}

bool BOX_PKG::isFileChanged()
{
  return FileState == FILE_STATE_UNCHANGED ? false : true;
}

bool BOX_PKG::isFileEmpty()
{
  return PkgText.toPlainText().isEmpty();
}

void BOX_PKG::slotFileChanged()
{
  if (!isFileChanged())
    SetFileState(FILE_STATE_CHANGED);
}

void BOX_PKG::slotFileLoad()
{
  QString s = QFileDialog::getOpenFileName();
  if (s.isEmpty())
    return;

  QFile f(s);
  if (f.open(QIODevice::ReadOnly))
  {
    QTextStream stream(&f);
    PkgText.setPlainText(stream.readAll());
    f.close();

    FileName = s;
    SetFileState(FILE_STATE_UNCHANGED);
    setWindowTitle(FileName);
    //emit changeWindowTitle(FileName);
  }
}

void BOX_PKG::slotFileSave()
{
  if (FileName.isEmpty())
  {
    slotFileSaveAs();
    return;
  }

  QFile f(FileName);
  if (f.open(QIODevice::WriteOnly))
  {
    QTextStream(&f) << PkgText.toPlainText();
    f.close();
    //emit changeWindowTitle(FileName);
  }
}

void BOX_PKG::slotFileSaveAs()
{
  QString s = QFileDialog::getSaveFileName(0, FileName);
  if (!s.isEmpty())
  {
    FileName = s;
    setWindowTitle(FileName);
    slotFileSave();
  }
}

void BOX_PKG::slotPkgCompile()
{
  QMessageBox::information(0, "Message", "Package should be compiled, but \"Feature Not implemented!\" :(");
}
