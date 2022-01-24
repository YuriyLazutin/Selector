#ifndef SELECTOR_H
#define SELECTOR_H

#include <QMainWindow>
//#include <QMenuBar>
#include <QMenu>
#include <QToolBar>
#include <QStatusBar>
//#include <QtCore/QVariant>
//#include <QtWidgets/QAction>

//#include <QtWidgets/QMainWindow>
//#include <QtWidgets/QToolButton>
//#include <QtWidgets/QWidget>
#include <QMessageBox>
#include <QTextEdit>
#include <QDockWidget>
#include <QLabel>
#include <QMdiArea>
#include <QSignalMapper>
#include "actions.h"

class Selector : public QMainWindow
{
  Q_OBJECT

  private:
    file_actions      act_file;
    edit_actions      act_edit;
    session_actions   act_sesn;
    debug_actions     act_debg;
    tools_actions     act_tols;

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
          QAction action_reps_dba_initpar;
          QAction action_reps_dba_nlspar;
          QAction action_reps_dba_rolprv;
          QAction action_reps_dba_rol;
          QAction action_reps_dba_rlbseg;
          QAction action_reps_dba_srvcom;
          QAction action_reps_dba_sysprv;
          QAction action_reps_dba_tblspcs;
          QAction action_reps_dba_tfs;
          QAction action_reps_dba_usrs;
        QMenu menu_reps_objects;
          QAction action_reps_objects_all;
          QAction action_reps_objects_idx;
          QAction action_reps_objects_seq;
          QAction action_reps_objects_syn;
          QAction action_reps_objects_tbs;
          QAction action_reps_objects_trg;
          QAction action_reps_objects_tps;
          QAction action_reps_objects_views;
        QMenu menu_reps_plsql;
          QAction action_reps_plsql_cperrs;
        QMenu menu_reps_user;
          QAction action_reps_user_grrol;
          QAction action_reps_user_grsysprv;
          QAction action_reps_user_nlssespar;
          QAction action_reps_user_objprvmde;
          QAction action_reps_user_objprvrcvd;
      QMenu menu_window;
        QAction action_window_tile;
        QAction action_window_cscd;
        QAction action_window_arrall;
        QAction action_window_savelo;
      QMenu menu_help;
        QAction action_help_help;
        QAction action_help_dnt;
        QAction action_help_supp;
        QAction action_help_about;

    //QWidget centralwidget;
    QMdiArea MDIArea;
    //QSignalMapper* p_SigMapper;

    void CreateToolBars();
    QToolBar toolBarMain;
    QToolBar toolBarDML;

    // Docks
    void CreateDocks();
    QDockWidget leftDockBrowser;
    QDockWidget DockWindowList;
    QDockWidget bottomDock;
    QLabel  bottomDockLabel;
    QTextEdit findTemplate;

    // Status bar
    void CreateStatusBar();
    // QStatusBar statusbar;

  public:
    Selector(QWidget *parent = nullptr);
    ~Selector();

  private slots:
      void slotNoImpl()
      {
          QMessageBox::information(0, "Message", "Feature Not implemented!");
      }

      void slotFileWasChanged();
      void slotFileWasUnChanged();
      void slotNewSQLForm();
      void slotOpenSQLForm();
      void slotFileSave();
      void slotFileSaveAs();
      void slotFileSaveAll();
//      void slotChangeWindowTitle(const QString&);
//      void slotSetActiveSubWindow(QWidget*);
};
#endif // SELECTOR_H
