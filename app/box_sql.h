#ifndef BOX_SQL_H
#define BOX_SQL_H

#include <QApplication>
#include <QTextEdit>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>

#define UNCHANGED   0
#define CHANGED     1

class BOX_SQL : public QTextEdit
{
  Q_OBJECT

  private:
    QString        FileName;
    unsigned int   FileState;

    void SetFileState(const unsigned int NewState);

  public:
    explicit BOX_SQL(QWidget* parent = nullptr);
             ~BOX_SQL();
    bool isFileChanged();
    bool isFileEmpty();
    void translateGUI(bool init = false);

    #ifndef QT_NO_DEBUG
    void status();
    #endif

  signals:
    void fileWasChanged();
    void fileWasUnChanged();
    void fileEmpty();
    void fileNotEmpty();

  public slots:
    void slotFileChanged();
    bool slotFileLoad();
    void slotFileSave();
    void slotFileSaveAs();
    void slotSQLExecute();
};

#endif // BOX_SQL_H
