#include "box_pkg.h"

BOX_PKG::BOX_PKG(QSplitter *parent) : QSplitter(parent)
{
  setObjectName(QString::fromUtf8("box_pkg"));
    FileState = FILE_STATE_UNCHANGED;

    // Head button
    act_head.setObjectName(QString::fromUtf8("box_pkg_action_head"));
    act_head.setIcon(QPixmap(":/icons/pkg_head.png"));
    act_head.setCheckable(true);
    act_head.setChecked(true);
    //act_head.setEnabled(false);

    // Body button
    act_body.setObjectName(QString::fromUtf8("box_pkg_action_body"));
    act_body.setIcon(QPixmap(":/icons/pkg_body.png"));
    act_body.setCheckable(true);
    act_body.setChecked(false);
    //act_body.setEnabled(false);

    ToolBar.setObjectName(QString::fromUtf8("box_pkg_toolbar"));
    //pToolBar->setStyleSheet(QString::fromUtf8("background-color: rgb(183, 199, 206);"));
    ToolBar.setIconSize(QSize(24, 24));
    //pToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    ToolBar.addAction(&act_head);
    ToolBar.addAction(&act_body);

    // Create tree
    PkgTree.setObjectName(QString::fromUtf8("box_pkg_tree_widget"));
    //PkgTree.setStyleSheet(QString::fromUtf8("background-color: rgb(223, 239, 246);"));
    PkgTree.headerItem()->setHidden(true);

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
    pVLayout->setObjectName(QString::fromUtf8("box_pkg_left_layout"));
    pVLayout->setContentsMargins(5, 5, 0, 5);
    //pVLayout->setMargin(5);
    pVLayout->setSpacing(5);
    pVLayout->addWidget(&ToolBar);
    pVLayout->setAlignment(&ToolBar, Qt::AlignHCenter);
    pVLayout->addWidget(&PkgTree);
    pRightWidget->setLayout(pVLayout);

    setOrientation(Qt::Horizontal);

    addWidget(pRightWidget);

    //PkgText.setStyleSheet(QString::fromUtf8("background-color: rgb(223, 239, 246);"));
    PkgText.setObjectName(QString::fromUtf8("box_pkg_text_edit"));
    addWidget(&PkgText);

    translateGUI(true);
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
  SetFileState(FILE_STATE_UNCHANGED);
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
  QMessageBox::information(0, "Message", QCoreApplication::translate("Selector", "Package should be compiled, but \"Feature Not implemented!\" :(", nullptr));
}

#ifndef QT_NO_DEBUG
void BOX_PKG::status()
{
  // This procedure will print current object status
  QSize szHint = sizeHint();
  fprintf(stdout, "BOX_PKG.sizeHint(): %d %d", szHint.width(), szHint.height() );
}
#endif

void BOX_PKG::translateGUI(bool init)
{
  act_head.setText(QCoreApplication::translate("Selector", "Head", "Action title"));
  #ifndef QT_NO_TOOLTIP
  act_head.setToolTip(QCoreApplication::translate("Selector", "Switch to package head", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  act_head.setStatusTip(QCoreApplication::translate("Selector", "Switch to package head", "Status Tip item"));
  act_head.setWhatsThis(QCoreApplication::translate("Selector", "Switch to package head", "Whats This item"));
  act_body.setText(QCoreApplication::translate("Selector", "Body", "Action title"));
  #ifndef QT_NO_TOOLTIP
  act_body.setToolTip(QCoreApplication::translate("Selector", "Switch to package body", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  act_body.setStatusTip(QCoreApplication::translate("Selector", "Switch to package body", "Status Tip item"));
  act_body.setWhatsThis(QCoreApplication::translate("Selector", "Switch to package body", "Whats This item"));

  ToolBar.setWindowTitle(QCoreApplication::translate("Selector", "Switch package parts", "ToolBar title"));
  PkgTree.setHeaderLabel(QCoreApplication::translate("Selector", "Package contents", "Tree header label"));
}
