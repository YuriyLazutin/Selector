#ifndef SELECTOR_H
#define SELECTOR_H

#include <QtWidgets>
#include "actions.h"
#include "browser.h"

class Selector : public QMainWindow
{
  Q_OBJECT

  private:
    file_actions      act_file;
    edit_actions      act_edit;
    session_actions   act_sesn;
    debug_actions     act_debg;
    tools_actions     act_tols;
    report_actions    act_rpt;
    window_actions    act_wnd;
    help_actions      act_hlp;
    transaction_actions   act_trns;

    void CreateMenu();
    //QMenuBar menubar;
      QMenu menu_file;
        QMenu menu_file_new;
          QMenu menu_file_new_prog_wnd;
        QMenu menu_file_open;
        QMenu menu_file_reopen;
      QMenu menu_edit;
        QMenu menu_edit_scpy;
        QMenu menu_edit_selection;
        QMenu menu_edit_todo;
        QMenu menu_edit_bookmark_goto;
      QMenu menu_session;
      QMenu menu_debug;
      QMenu menu_tools;
        QMenu menu_tools_macro;
      QMenu menu_macro;
      QMenu menu_docs;
      QMenu menu_reps;
        QMenu menu_reps_dba;
        QMenu menu_reps_objects;
        QMenu menu_reps_plsql;
        QMenu menu_reps_user;
      QMenu menu_window;
      QMenu menu_help;

    //QWidget centralwidget;
    QMdiArea MDIArea;
    //QSignalMapper* p_SigMapper;

    void CreateToolBars();
    QToolBar toolBarMain;
    QToolBar toolBarDML;

    // Docks
    void CreateDocks();
    QDockWidget leftDockBrowser;
      Browser     BrowserTree;
    QDockWidget DockWindowList;
    QDockWidget bottomDock;
    QLabel  bottomDockLabel;
    QTextEdit findTemplate;

    // Status bar
    void CreateStatusBar();
    // QStatusBar statusbar;

    unsigned int dirty_files_cnt;

  public:
    Selector(QWidget *parent = nullptr);
    ~Selector();
    void translateGUI(bool init = false);

  private slots:
      void slotNoImpl()
      {
          QMessageBox::information(0, "Message", "Feature Not implemented!");
      }

      void slotFileWasChanged();
      void slotFileWasUnChanged();
      void slotNewBOX_SQL();
      void slotOpenBOX_SQL();
      void slotFileSave();
      void slotFileSaveAs();
      void slotFileSaveAll();
      void slotNewBOX_PKG();
      void slotNewBOX_PKGBDY();
      void slotNewBOX_PKGSPC();
      void slotOpenBOX_PKG();
//      void slotChangeWindowTitle(const QString&);
      void slotSetActiveSubWindow(QMdiSubWindow*);
      void slotExecute();
};
#endif // SELECTOR_H
