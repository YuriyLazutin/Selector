#ifndef SELECTOR_H
#define SELECTOR_H

#include <QMainWindow>
#include <QMenuBar>
#include <QMenu>
#include <QToolBar>
#include <QStatusBar>
//#include <QtCore/QVariant>
//#include <QtWidgets/QAction>

//#include <QtWidgets/QMainWindow>
//#include <QtWidgets/QToolButton>
//#include <QtWidgets/QWidget>


class Selector : public QMainWindow
{
  Q_OBJECT

  private:

    QMenuBar menubar;
      QMenu menu_file;
        QMenu menu_file_new;
          QMenu menu_file_new_prog_wnd;
            QAction action_file_new_prog_wnd_blank;
            QAction action_file_new_prog_wnd_func;
            QAction action_file_new_prog_wnd_jsrc;
            QAction action_file_new_prog_wnd_pkg;
            QAction action_file_new_prog_wnd_pkgbdy;
            QAction action_file_new_prog_wnd_pkgspc;
            QAction action_file_new_prog_wnd_proc;
            QAction action_file_new_prog_wnd_trg;
            QAction action_file_new_prog_wnd_type;
            QAction action_file_new_prog_wnd_typebdy;
            QAction action_file_new_prog_wnd_typespc;
          QAction action_file_new_test;
          QAction action_file_new_sql;
          QAction action_file_new_rpt;
          QAction action_file_new_cmd;
          QAction action_file_new_explan;
          QAction action_file_new_diag;

          QAction action_file_new_view;
          QAction action_file_new_mview;
          QAction action_file_new_tbl;
          QAction action_file_new_seq;
          QAction action_file_new_syn;
          QAction action_file_new_lib;
          QAction action_file_new_dir;
          QAction action_file_new_job;
          QAction action_file_new_que;
          QAction action_file_new_quetbl;
          QAction action_file_new_user;
          QAction action_file_new_role;
          QAction action_file_new_profile;
          QAction action_file_new_dblink;
        QMenu menu_file_open;
          QAction action_file_open_prog_file;
          QAction action_file_open_test_script;
          QAction action_file_open_sql_sqript;
          QAction action_file_open_rpt_file;
          QAction action_file_open_cmd_file;
          QAction action_file_open_diag_file;
        QMenu menu_file_reopen;
        QAction action_file_save;
        QAction action_file_save_as;
        QAction action_file_save_all;
        QAction action_file_email;
        QAction action_file_close;
        QAction action_file_close_all;
        QAction action_file_print;
        QAction action_file_print_setup;
        QAction action_file_page_setup;
        QAction action_file_new_instance;
        QAction action_file_authorization;
        QAction action_file_exit;
      QMenu menu_edit;
        QAction action_edit_undo;
        QAction action_edit_redo;
        QAction action_edit_beautifier;
        QAction action_edit_beautifier_optns;
        QAction action_edit_cut;
        QAction action_edit_copy;
        QAction action_edit_paste;
        QAction action_edit_append;
        QAction action_edit_clear;
        QAction action_edit_select_all;
        QAction action_edit_recall;
        QMenu menu_edit_scpy;
          QAction action_edit_scpy_cpp;
          QAction action_edit_scpy_delphi;
          QAction action_edit_scpy_java;
          QAction action_edit_scpy_plsql;
          QAction action_edit_scpy_basic;
        QMenu menu_edit_selection;
          QAction action_edit_selection_indent;
          QAction action_edit_selection_unindent;
          QAction action_edit_selection_uppercase;
          QAction action_edit_selection_lowercase;
          QAction action_edit_selection_comment;
          QAction action_edit_selection_uncomment;
          QAction action_edit_selection_aplsyncase;
          QAction action_edit_selection_sort;
          QAction action_edit_selection_mark;
        QMenu menu_edit_todo;
          QAction action_edit_todo_list;
          QAction action_edit_todo_add;
          QAction action_edit_todo_edit;
          QAction action_edit_todo_close;
          QAction action_edit_todo_del;
        QAction action_edit_find;
        QAction action_edit_repeat_find;
        QAction action_edit_replace;
        QAction action_edit_search_bar;
        QAction action_edit_find_matches;
        QAction action_edit_show_spec;
        QAction action_edit_code_folding;
        QAction action_edit_bookmark_set;
        QMenu menu_edit_bookmark_goto;
          QAction action_edit_bookmark_goto_next;
          QAction action_edit_bookmark_goto_prev;
        QAction action_edit_bookmark_list;
        QAction action_edit_goto;
        QAction action_edit_next_tab;
        QAction action_edit_prev_tab;
      QMenu menu_session;
        QAction action_session_logon;
        QAction action_session_logoff;
        QAction action_session_execute;
        QAction action_session_break;
        QAction action_session_kill;
        QAction action_session_commit;
        QAction action_session_rollback;
        QAction action_session_trace;
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

    QWidget centralwidget;

    QToolBar toolBar;

    QStatusBar statusbar;

  public:
    Selector(QWidget *parent = nullptr);
    ~Selector();
};
#endif // SELECTOR_H
