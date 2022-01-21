#ifndef SQLFORM_H
#define SQLFORM_H

#include <QTextEdit>

class SQLForm : public QTextEdit
{
  Q_OBJECT

  private:
    QString FileName;

  public:
    SQLForm(QWidget* p_Parent = 0);

  signals:
    void changeWindowTitle(const QString&);

  public slots:
    void slotFileLoad();
    void slotFileSave();
    void slotFileSaveAs();
    void slotSQLExecute();
};

#endif // SQLFORM_H
