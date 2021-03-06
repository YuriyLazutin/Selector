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

#define UNCHANGED   0
#define CHANGED     1

class BOX_PKG : public QSplitter
{
  Q_OBJECT

  private:
    QToolBar      ToolBar;
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
    void translateGUI(bool init = false);

    #ifndef QT_NO_DEBUG
    void status();
    #endif // QT_NO_DEBUG

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
    void slotPkgCompile();
};

#endif // BOX_PKG_H
