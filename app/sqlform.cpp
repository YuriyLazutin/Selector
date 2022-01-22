#include "sqlform.h"
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>

SQLForm::SQLForm(QWidget* p_Parent /*= 0*/) : QTextEdit(p_Parent)
{
  FileState = FILE_STATE_UNCHANGED;
  connect(this, SIGNAL(textChanged()), SLOT(slotFileChanged()));
}

void SQLForm::SetFileState(const unsigned int NewState)
{
  unsigned int OldState = FileState;
  FileState = NewState;

  if (OldState != NewState)
    isFileChanged() ? emit fileWasChanged() : emit fileWasUnChanged();
}

bool SQLForm::isFileChanged()
{
  return FileState == FILE_STATE_UNCHANGED ? false : true;
}

void SQLForm::slotFileChanged()
{
  if (!isFileChanged())
    SetFileState(FILE_STATE_CHANGED);
}

void SQLForm::slotFileLoad()
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

void SQLForm::slotFileSave()
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

void SQLForm::slotFileSaveAs()
{
  QString s = QFileDialog::getSaveFileName(0, FileName);
  if (!s.isEmpty())
  {
    FileName = s;
    setWindowTitle(FileName);
    slotFileSave();
  }
}

void SQLForm::slotSQLExecute()
{
  QMessageBox::information(0, "Message", "SQL should be executed, but \"Feature Not implemented!\" :(");
}
