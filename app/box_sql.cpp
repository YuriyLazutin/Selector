#include "box_sql.h"

BOX_SQL::BOX_SQL(QWidget* parent) : QTextEdit(parent)
{
  setObjectName(QString::fromUtf8("box_sql"));
  FileState = UNCHANGED;
  setViewportMargins(10, 10, 10, 10);

  translateGUI(true);
  connect(this, SIGNAL(textChanged()), SLOT(slotFileChanged()));
}

BOX_SQL::~BOX_SQL()
{

}

void BOX_SQL::SetFileState(const unsigned int NewState)
{
  unsigned int OldState = FileState;
  FileState = NewState;

  if (OldState != NewState)
    FileState == CHANGED ? emit fileWasChanged() : emit fileWasUnChanged();
}

bool BOX_SQL::isFileChanged()
{
  return FileState == UNCHANGED ? false : true;
}

bool BOX_SQL::isFileEmpty()
{
  return toPlainText().isEmpty();
}

void BOX_SQL::slotFileChanged()
{
  if (FileState == UNCHANGED)
    SetFileState(CHANGED);

  isFileEmpty() ? emit fileEmpty() : emit fileNotEmpty();
}

bool BOX_SQL::slotFileLoad()
{
  QString s = QFileDialog::getOpenFileName(
     this
    ,QCoreApplication::translate("Selector->Box SQL", "Open SQL script", "Open file dialog title")
    ,nullptr
    ,QCoreApplication::translate("Selector->Box SQL", "SQL scripts (*.sql);;Data definitions (*.ddl);;Data modifications (*.dml);;All supported types (*.sql *.ddl *.dml);;All files (*)", "Open file dialog (file types)")
    ,nullptr
    ,QFileDialog::DontUseNativeDialog
  );

  if (s.isEmpty())
    return false;

  QFile f(s);
  if (f.open(QIODevice::ReadOnly))
  {
    QTextStream stream(&f);
    setPlainText(stream.readAll());
    f.close();
    SetFileState(UNCHANGED);
    FileName = s;
    setWindowTitle(FileName);
  }

  isFileEmpty() ? emit fileEmpty() : emit fileNotEmpty();
  return true;
}

void BOX_SQL::slotFileSave()
{
  if (FileName.isEmpty())
  {
    slotFileSaveAs();
    return;
  }

  QFile f(FileName);
  if (f.open(QIODevice::WriteOnly))
  {
    QTextStream(&f) << toPlainText();
    f.close();
    SetFileState(UNCHANGED);
  }
}

void BOX_SQL::slotFileSaveAs()
{
  QString strExt;
  QString s = QFileDialog::getSaveFileName(
     this
    ,QCoreApplication::translate("Selector->Box SQL", "Save SQL script", "Save file dialog title")
    ,FileName
    ,QCoreApplication::translate("Selector->Box SQL", "SQL script (*.sql);;Data definition (*.ddl);;Data modification (*.dml);;Any type (*)", "Save file dialog (file types)")
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

void BOX_SQL::slotSQLExecute()
{
  QMessageBox::information(0, "Message", QCoreApplication::translate("Selector->Box SQL", "SQL should be executed, but \"Feature not implemented!\" :(", nullptr));
}

#ifndef QT_NO_DEBUG
void BOX_SQL::status()
{
  // This procedure print current object status
  QSize szHint = sizeHint();
  fprintf(stdout, "BOX_SQL.sizeHint(): %d %d", szHint.width(), szHint.height() );
}
#endif

void BOX_SQL::translateGUI(bool init)
{

}
