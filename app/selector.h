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

  public:
    Selector(QWidget *parent = nullptr);
    ~Selector();

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
        QMenu menu_file_reopen;
        QAction action_save;
        QAction action_save_as;
        QAction action_save_all;
        QAction action_email;
        QAction action_close;
        QAction action_close_all;
        QAction action_print;
        QAction action_print_setup;
        QAction action_page_setup;
        QAction action_new_instance;
        QAction action_authorization;
        QAction action_exit;
      QMenu menu_edit;
        QAction action_undo;


    QWidget centralwidget;

    QToolBar toolBar;

    QStatusBar statusbar;


};
#endif // SELECTOR_H
