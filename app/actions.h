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

#endif // ACTIONS_H
