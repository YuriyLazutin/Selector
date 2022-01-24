#ifndef ACTIONS_H
#define ACTIONS_H

#include <QAction>

class file_actions
{
  public:
    QAction* new_blank;
    QAction* new_func;
    QAction* new_jsrc;
    QAction* new_pkg;
    QAction* new_pkgbdy;
    QAction* new_pkgspc;
    QAction* new_proc;
    QAction* new_trg;
    QAction* new_type;
    QAction* new_typebdy;
    QAction* new_typespc;
    QAction* new_test;
    QAction* new_sql;
    QAction* new_rpt;
    QAction* new_cmd;
    QAction* new_explan;
    QAction* new_diag;
    QAction* new_view;
    QAction* new_mview;
    QAction* new_tbl;
    QAction* new_seq;
    QAction* new_syn;
    QAction* new_lib;
    QAction* new_dir;
    QAction* new_job;
    QAction* new_que;
    QAction* new_quetbl;
    QAction* new_user;
    QAction* new_role;
    QAction* new_profile;
    QAction* new_dblink;

    QAction* open_prog;
    QAction* open_test;
    QAction* open_sql;
    QAction* open_rpt;
    QAction* open_cmd;
    QAction* open_diag;

    QAction* save;
    QAction* save_as;
    QAction* save_all;
    QAction* email;
    QAction* close;
    QAction* close_all;
    QAction* print;
    QAction* print_setup;
    QAction* page_setup;
    QAction* new_instance;
    QAction* authorization;
    QAction* exit;

    file_actions();
    ~file_actions();
};

class edit_actions
{
  public:
    QAction* undo;
    QAction* redo;
    QAction* beautifier;
    QAction* beautifier_optns;
    QAction* cut;
    QAction* copy;
    QAction* paste;
    QAction* append;
    QAction* clear;
    QAction* select_all;
    QAction* recall;

    QAction* scpy_cpp;
    QAction* scpy_delphi;
    QAction* scpy_java;
    QAction* scpy_plsql;
    QAction* scpy_basic;

    QAction* slctn_indent;
    QAction* slctn_unindent;
    QAction* slctn_uppercase;
    QAction* slctn_lowercase;
    QAction* slctn_comment;
    QAction* slctn_uncomment;
    QAction* slctn_aplsyncase;
    QAction* slctn_sort;
    QAction* slctn_mark;

    QAction* todo_list;
    QAction* todo_add;
    QAction* todo_edit;
    QAction* todo_close;
    QAction* todo_del;

    QAction* find;
    QAction* repeat_find;
    QAction* replace;
    QAction* find_matches;
    QAction* show_spec;
    QAction* code_folding;

    QAction* bookmark_set;
    QAction* bookmark_goto_next;
    QAction* bookmark_goto_prev;
    QAction* bookmark_list;

    QAction* go_to;
    QAction* next_tab;
    QAction* prev_tab;

    edit_actions();
    ~edit_actions();
};

class session_actions
{
  public:
    QAction* lon;
    QAction* loff;
    QAction* exe;
    QAction* brk;
    QAction* kll;
    QAction* cmmt;
    QAction* rllbck;
    QAction* trce;

    session_actions();
    ~session_actions();
};

class debug_actions
{
  public:
    QAction* breakpoint;
    QAction* mod_brkpnts;
    QAction* start;
    QAction* run;
    QAction* step_into;
    QAction* step_over;
    QAction* step_out;
    QAction* cont;
    QAction* set_var;

    debug_actions();
    ~debug_actions();
};

#endif // ACTIONS_H
