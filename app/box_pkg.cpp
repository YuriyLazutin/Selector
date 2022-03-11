#include "box_pkg.h"

BOX_PKG::BOX_PKG(QSplitter* parent) : QSplitter(parent)
{
  setObjectName(QString::fromUtf8("box_pkg"));
  setOrientation(Qt::Horizontal);
  FileState = UNCHANGED;

  // Head button
  act_head.setObjectName(QString::fromUtf8("box_pkg_action_head"));
  act_head.setIcon(QPixmap(":/icons/pkg_head.png"));
  act_head.setCheckable(true);
  act_head.setChecked(true);

  // Body button
  act_body.setObjectName(QString::fromUtf8("box_pkg_action_body"));
  act_body.setIcon(QPixmap(":/icons/pkg_body.png"));
  act_body.setCheckable(true);
  act_body.setChecked(false);

  ToolBar.setObjectName(QString::fromUtf8("box_pkg_toolbar"));
  ToolBar.setIconSize(QSize(24, 24));
  ToolBar.addAction(&act_head);
  ToolBar.addAction(&act_body);

  // Create tree
  PkgTree.setObjectName(QString::fromUtf8("box_pkg_tree_widget"));
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

  // Create text box
  PkgText.setObjectName(QString::fromUtf8("box_pkg_text_edit"));

  //Layout setup
  QWidget* pRightWidget = new QWidget(this);
  QVBoxLayout* pVLayout = new QVBoxLayout(pRightWidget);
  pVLayout->setObjectName(QString::fromUtf8("box_pkg_left_layout"));
  pVLayout->setContentsMargins(5, 5, 0, 5);
  pVLayout->setSpacing(5);
  pVLayout->addWidget(&ToolBar);
  pVLayout->setAlignment(&ToolBar, Qt::AlignHCenter);
  pVLayout->addWidget(&PkgTree);
  pRightWidget->setLayout(pVLayout);
  addWidget(pRightWidget);

  addWidget(&PkgText);
  setStretchFactor(1, 1.618);

  translateGUI(true);
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
    FileState == CHANGED ? emit fileWasChanged() : emit fileWasUnChanged();
}

bool BOX_PKG::isFileChanged()
{
  return FileState == UNCHANGED ? false : true;
}

bool BOX_PKG::isFileEmpty()
{
  return PkgText.toPlainText().isEmpty();
}

void BOX_PKG::slotFileChanged()
{
  if (FileState == UNCHANGED)
    SetFileState(CHANGED);

  isFileEmpty() ? emit fileEmpty() : emit fileNotEmpty();
}

void BOX_PKG::slotFileLoad()
{
  QString s = QFileDialog::getOpenFileName(
     this
    ,QCoreApplication::translate("Selector->Box PL/SQL", "Open package", "Open file dialog title")
    ,nullptr
    ,QCoreApplication::translate("Selector->Box PL/SQL", "Package (*.pck);;Package specification (*.spc);;Package body (*.bdy);;All supported (*.pck *.spc *.bdy);;All files (*)", "Open file dialog (file types)")
    ,nullptr
    ,QFileDialog::DontUseNativeDialog
  );

  if (s.isEmpty())
    return;

  QFile f(s);
  if (f.open(QIODevice::ReadOnly))
  {
    QTextStream stream(&f);
    PkgText.setPlainText(stream.readAll());
    f.close();
    SetFileState(UNCHANGED);
    FileName = s;
    setWindowTitle(FileName);
  }

  isFileEmpty() ? emit fileEmpty() : emit fileNotEmpty();
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
    SetFileState(UNCHANGED);
  }
}

void BOX_PKG::slotFileSaveAs()
{
  QString strExt;
  QString s = QFileDialog::getSaveFileName(
     this
    ,QCoreApplication::translate("Selector->Box PL/SQL", "Save package", "Save file dialog title")
    ,FileName
    ,QCoreApplication::translate("Selector->Box PL/SQL", "Package (*.pck);;Package specification (*.spc);;Package body (*.bdy);;Any type (*)", "Save file dialog (file types)")
    ,&strExt
    ,QFileDialog::DontUseNativeDialog
  );

  if (!s.isEmpty())
  {
    FileName = s;
    // Replace the extension if it was changed
    // if (strExt.contains("sql")) { save as sql }

    setWindowTitle(FileName);
    slotFileSave();
  }
}

void BOX_PKG::slotPkgCompile()
{
  QMessageBox::information(0, "Message", QCoreApplication::translate("Selector->Box PL/SQL", "Package should be compiled, but \"Feature not implemented!\" :(", nullptr));
}

#ifndef QT_NO_DEBUG
void BOX_PKG::status()
{
  // This procedure print current object status
  QSize szHint = sizeHint();
  fprintf(stdout, "BOX_PKG.sizeHint(): %d %d", szHint.width(), szHint.height() );
}
#endif

void BOX_PKG::translateGUI(bool init)
{
  act_head.setText(QCoreApplication::translate("Selector->Box PL/SQL", "Head", "Action title"));
  #ifndef QT_NO_TOOLTIP
  act_head.setToolTip(QCoreApplication::translate("Selector->Box PL/SQL", "Switch to package head", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  act_head.setStatusTip(QCoreApplication::translate("Selector->Box PL/SQL", "Switch to package head", "Status Tip item"));
  act_head.setWhatsThis(QCoreApplication::translate("Selector->Box PL/SQL", "Switch to package head", "Whats This item"));
  act_body.setText(QCoreApplication::translate("Selector->Box PL/SQL", "Body", "Action title"));
  #ifndef QT_NO_TOOLTIP
  act_body.setToolTip(QCoreApplication::translate("Selector->Box PL/SQL", "Switch to package body", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  act_body.setStatusTip(QCoreApplication::translate("Selector->Box PL/SQL", "Switch to package body", "Status Tip item"));
  act_body.setWhatsThis(QCoreApplication::translate("Selector->Box PL/SQL", "Switch to package body", "Whats This item"));

  ToolBar.setWindowTitle(QCoreApplication::translate("Selector->Box PL/SQL", "Switch package parts", "ToolBar title"));
  PkgTree.setHeaderLabel(QCoreApplication::translate("Selector->Box PL/SQL", "Package contents", "Tree header label"));
}
