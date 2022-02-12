#include "box_pkg.h"
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>

BOX_PKG::BOX_PKG(QSplitter *parent) : QSplitter(parent)
{
    FileState = FILE_STATE_UNCHANGED;

    PkgTree.setObjectName(QString::fromUtf8("box_pkg_tree_widget"));
    PkgTree.setHeaderLabel("Package contents");
    PkgTree.setStyleSheet(QString::fromUtf8("background-color: rgb(223, 239, 246);"));
    PkgTree.headerItem()->setHidden(true);
    PkgTree.resize(200,1024);

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

    //QSplitter* pBoxSplitter = new QSplitter(this);
    //resize(1500, 1024);
    setFixedSize(1280, 768);

    setOrientation(Qt::Horizontal);
    //setSizes(QList<int>({200, 1200}));
    //setSizes({static_cast<int>(10000 / 1.618), static_cast<int>(10000 - 10000 / 1.618)});
    // Stretch in Golden ratio
    //setStretchFactor(0,1);
    setStretchFactor(1,1.618);
    QPalette p;
    p.setColor(QPalette::Background, Qt::red);
    setPalette(p);
    setHandleWidth(5);

    addWidget(&PkgTree);

    PkgText.setStyleSheet(QString::fromUtf8("background-color: rgb(223, 239, 246);"));
    PkgText.resize(1000,1024);
    addWidget(&PkgText);
    connect(&PkgText, SIGNAL(textChanged()), SLOT(slotFileChanged()));
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
