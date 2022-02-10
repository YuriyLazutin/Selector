#ifndef BOX_PKG_H
#define BOX_PKG_H

#include <QWidget>
#include <QTreeWidget>
#include <QTextEdit>

#define FILE_STATE_UNCHANGED   0
#define FILE_STATE_CHANGED     1

class BOX_PKG : public QWidget
{
    Q_OBJECT
  private:
    QTreeWidget   PkgTree;
    QTextEdit     PkgText;
    QString       FileName;
    unsigned int  FileState;
    void SetFileState(const unsigned int NewState);

  public:
    explicit BOX_PKG(QWidget *parent = nullptr);
             ~BOX_PKG();
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
    void slotPkgCompile();
};

#endif // BOX_PKG_H
