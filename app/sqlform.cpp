#include "sqlform.h"
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>

SQLForm::SQLForm(QWidget* p_Parent /*= 0*/) : QTextEdit(p_Parent)
{
  //setIcon(QIcon(":/icons/new-sql.png"));
  //setWindowIcon(QIcon(":/icons/new-sql.png"));
  //setWindowIcon(QPixmap(":/icons/new-sql.png"));
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
    emit changeWindowTitle(FileName);
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
    emit changeWindowTitle(FileName);
  }
}

void SQLForm::slotFileSaveAs()
{
  QString s = QFileDialog::getSaveFileName(0, FileName);
  if (!s.isEmpty())
  {
    FileName = s;
    slotFileSave();
  }
}

void SQLForm::slotSQLExecute()
{
  QMessageBox::information(0, "Message", "SQL should be executed, but \"Feature Not implemented!\" :(");
}
