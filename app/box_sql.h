#ifndef BOX_SQL_H
#define BOX_SQL_H

#include <QApplication>
#include <QTextEdit>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>

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
    explicit BOX_SQL(QWidget* p_Parent = 0);
    ~BOX_SQL();
    bool isFileChanged();
    void translateGUI(bool init = false);

#ifndef QT_NO_DEBUG
    void status();
#endif

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
