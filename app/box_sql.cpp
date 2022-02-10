#include "box_sql.h"
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>

BOX_SQL::BOX_SQL(QWidget* p_Parent /*= 0*/) : QTextEdit(p_Parent)
{
  FileState = FILE_STATE_UNCHANGED;
  connect(this, SIGNAL(textChanged()), SLOT(slotFileChanged()));
}

void BOX_SQL::SetFileState(const unsigned int NewState)
{
  unsigned int OldState = FileState;
  FileState = NewState;

  if (OldState != NewState)
    isFileChanged() ? emit fileWasChanged() : emit fileWasUnChanged();
}

bool BOX_SQL::isFileChanged()
{
  return FileState == FILE_STATE_UNCHANGED ? false : true;
}

void BOX_SQL::slotFileChanged()
{
  if (!isFileChanged())
    SetFileState(FILE_STATE_CHANGED);
}

void BOX_SQL::slotFileLoad()
{
  QString s = QFileDialog::getOpenFileName();
  if (s.isEmpty())
    return;

  QFile f(s);
  if (f.open(QIODevice::ReadOnly))
  {
    QTextStream stream(&f);
    setPlainText(stream.readAll());
    f.close();

    FileName = s;
    SetFileState(FILE_STATE_UNCHANGED);
    setWindowTitle(FileName);
    //emit changeWindowTitle(FileName);
  }
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
    //emit changeWindowTitle(FileName);
  }
}

void BOX_SQL::slotFileSaveAs()
{
  QString s = QFileDialog::getSaveFileName(0, FileName);
  if (!s.isEmpty())
  {
    FileName = s;
    setWindowTitle(FileName);
    slotFileSave();
  }
}

void BOX_SQL::slotSQLExecute()
{
  QMessageBox::information(0, "Message", "SQL should be executed, but \"Feature Not implemented!\" :(");
}
