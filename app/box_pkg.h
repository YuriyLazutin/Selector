#ifndef BOX_PKG_H
#define BOX_PKG_H

#include <QSplitter>
#include <QTreeWidget>
#include <QTextEdit>
#include <QAction>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QApplication>
#include <QToolBar>
#include <QVBoxLayout>

#define FILE_STATE_UNCHANGED   0
#define FILE_STATE_CHANGED     1

class BOX_PKG :  public QSplitter
{
    Q_OBJECT
  private:
    QAction       act_head;
    QAction       act_body;
    QTreeWidget   PkgTree;
    QTextEdit     PkgText;
    QString       FileName;
    unsigned int  FileState;
    void SetFileState(const unsigned int NewState);

  public:
    explicit BOX_PKG(QSplitter *parent = nullptr);
             ~BOX_PKG();
    bool isFileChanged();
    bool isFileEmpty();

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
    void slotPkgCompile();
};

#endif // BOX_PKG_H
