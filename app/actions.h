#ifndef ACTIONS_H
#define ACTIONS_H

#include <QAction>
#include <QApplication>

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
    void translateGUI(bool init = false);
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
    void translateGUI(bool init = false);
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
    void translateGUI(bool init = false);
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
    void translateGUI(bool init = false);
};

class tools_actions
{
  public:
    QAction* pref;
    QAction* cfgplgns;
    QAction* cfgtools;
    QAction* cfgdocs;
    QAction* cfgreps;
    QAction* macro_rec;
    QAction* macro_play;
    QAction* macro_lib;
    QAction* brodir;
    QAction* brofil;
    QAction* tmpl;
    QAction* tlbr;
    QAction* expln;
    QAction* astnt;
    QAction* cntnts;
    QAction* shnts;
    QAction* qbldr;
    QAction* fdbo;
    QAction* cpinv;
    QAction* expobj;
    QAction* cmpobj;
    QAction* emon;
    QAction* sessns;
    QAction* tstmngr;
    QAction* exptbls;
    QAction* imptbls;
    QAction* cmptbld;
    QAction* imptxt;
    QAction* impODBC;
    QAction* gendat;

    tools_actions();
    ~tools_actions();
    void translateGUI(bool init = false);
};

class report_actions
{
  public:
    QAction* dba_initpar;
    QAction* dba_nlspar;
    QAction* dba_rolprv;
    QAction* dba_rol;
    QAction* dba_rlbseg;
    QAction* dba_srvcom;
    QAction* dba_sysprv;
    QAction* dba_tblspcs;
    QAction* dba_tfs;
    QAction* dba_usrs;
    QAction* objects_all;
    QAction* objects_idx;
    QAction* objects_seq;
    QAction* objects_syn;
    QAction* objects_tbs;
    QAction* objects_trg;
    QAction* objects_tps;
    QAction* objects_views;
    QAction* plsql_cperrs;
    QAction* user_grrol;
    QAction* user_grsysprv;
    QAction* user_nlssespar;
    QAction* user_objprvmde;
    QAction* user_objprvrcvd;

    report_actions();
    ~report_actions();
    void translateGUI(bool init = false);
};

class window_actions
{
  public:
    QAction* tile;
    QAction* cascade;
    QAction* arrall;
    QAction* savelo;

    window_actions();
    ~window_actions();
    void translateGUI(bool init = false);
};

class help_actions
{
  public:
    QAction* help;
    QAction* donate;
    QAction* suprt;
    QAction* about;

    help_actions();
    ~help_actions();
    void translateGUI(bool init = false);
};

class transaction_actions
{
  public:
    QAction* edt_rec;
    QAction* ins_rec;
    QAction* del_rec;
    QAction* post_chng;
    QAction* fetch_rec;
    QAction* fetch_all;
    QAction* qry_by_ex;
    QAction* clr_rec;

    transaction_actions();
    ~transaction_actions();
    void translateGUI(bool init = false);
};

#endif // ACTIONS_H
