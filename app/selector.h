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
        QAction action_debug_breakpoint;
        QAction action_debug_mod_brkpnts;
        QAction action_debug_start;
        QAction action_debug_run;
        QAction action_debug_step_into;
        QAction action_debug_step_over;
        QAction action_debug_step_out;
        QAction action_debug_continue;
        QAction action_debug_var;
      QMenu menu_tools;
        QAction action_tools_pref;
        QAction action_tools_cfgplgns;
        QAction action_tools_cfgtools;
        QAction action_tools_cfgdocs;
        QAction action_tools_cfgreps;
        QMenu menu_tools_macro;
          QAction action_tools_macro_rec;
          QAction action_tools_macro_play;
          QAction action_tools_macro_lib;
        QAction action_tools_bro;   // ToDo: Remove this if docks will implemented
        QAction action_tools_brodir;
        QAction action_tools_brofil;
        QAction action_tools_tmpl;
        QAction action_tools_tlbr;
        QAction action_tools_expln;
        QAction action_tools_astnt;
        QAction action_tools_cntnts;
        QAction action_tools_chnts;
        QAction action_tools_qbldr;
        QAction action_tools_fdbo;
        QAction action_tools_cpinv;
        QAction action_tools_expobj;
        QAction action_tools_cmpobj;
        QAction action_tools_emon;
        QAction action_tools_sessns;
        QAction action_tools_tstmngr;
        QAction action_tools_exptbls;
        QAction action_tools_imptbls;
        QAction action_tools_cmptbld;
        QAction action_tools_imptxt;
        QAction action_tools_impODBC;
        QAction action_tools_gendat;
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
