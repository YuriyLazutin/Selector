#ifndef SQLFORM_H
#define SQLFORM_H

#include <QTextEdit>

#define FILE_STATE_UNCHANGED   0
#define FILE_STATE_CHANGED     1

class SQLForm : public QTextEdit
{
  Q_OBJECT

  private:
    QString        FileName;
    unsigned int   FileState;

    void SetFileState(const unsigned int NewState);

  public:
    SQLForm(QWidget* p_Parent = 0);
    bool isFileChanged();

  signals:
    void changeWindowTitle(const QString&);
    void fileWasChanged();
    void fileWasUnChanged();

  public slots:
    void slotFileChanged();
    void slotFileLoad();
    void slotFileSave();
    void slotFileSaveAs();
    void slotSQLExecute();
};

#endif // SQLFORM_H
