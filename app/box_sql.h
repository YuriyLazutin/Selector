#ifndef BOX_SQL_H
#define BOX_SQL_H

#include <QTextEdit>

#define FILE_STATE_UNCHANGED   0
#define FILE_STATE_CHANGED     1

class BOX_SQL : public QTextEdit
{
  Q_OBJECT

  private:
    QString        FileName;
    unsigned int   FileState;

    void SetFileState(const unsigned int NewState);

  public:
    BOX_SQL(QWidget* p_Parent = 0);
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

#endif // BOX_SQL_H
