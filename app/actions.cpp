#include "actions.h"
#include <QApplication>

file_actions::file_actions()
{
  // File->New->Program Window->Blank
  new_blank = new QAction;
  new_blank->setObjectName(QString::fromUtf8("action_file_new_prog_wnd_blank"));
  new_blank->setText(QApplication::translate("Selector", "Blank", nullptr));
  new_blank->setToolTip("Create new blank program window");
  new_blank->setStatusTip("Create new blank program window");
  new_blank->setWhatsThis("Create new blank program window");
  // File->New->Program Window->Function
  new_func = new QAction;
  new_func->setObjectName(QString::fromUtf8("action_file_new_prog_wnd_func"));
  new_func->setText(QApplication::translate("Selector", "Function", nullptr));
  new_func->setToolTip("Create new function");
  new_func->setStatusTip("Create new function window");
  new_func->setWhatsThis("Create new function window");
  // File->New->Program Window->Java source
  new_jsrc = new QAction;
  new_jsrc->setObjectName(QString::fromUtf8("action_file_new_prog_wnd_jsrc"));
  new_jsrc->setText(QApplication::translate("Selector", "Java Source", nullptr));
  new_jsrc->setToolTip("Create new java program window");
  new_jsrc->setStatusTip("Create new java program window");
  new_jsrc->setWhatsThis("Create new java program window");
  // File->New->Program Window->Package
  new_pkg = new QAction;
  new_pkg->setObjectName(QString::fromUtf8("action_file_new_prog_wnd_pkg"));
  new_pkg->setText(QApplication::translate("Selector", "Package", nullptr));
  new_pkg->setToolTip("Create new package");
  new_pkg->setStatusTip("Create new package");
  new_pkg->setWhatsThis("Create new package");
  // File->New->Program Window->Package body
  new_pkgbdy = new QAction;
  new_pkgbdy->setObjectName(QString::fromUtf8("action_file_new_prog_wnd_pkgbdy"));
  new_pkgbdy->setText(QApplication::translate("Selector", "Package Body", nullptr));
  new_pkgbdy->setToolTip("Create new package body");
  new_pkgbdy->setStatusTip("Create new package body");
  new_pkgbdy->setWhatsThis("Create new package body");
  // File->New->Program Window->Package Specification
  new_pkgspc = new QAction;
  new_pkgspc->setObjectName(QString::fromUtf8("action_file_new_prog_wnd_pkgspc"));
  new_pkgspc->setText(QApplication::translate("Selector", "Package Specification", nullptr));
  new_pkgspc->setToolTip("Create new package specification");
  new_pkgspc->setStatusTip("Create new package specification");
  new_pkgspc->setWhatsThis("Create new package specification");
  // File->New->Program Window->Procedure
  new_proc = new QAction;
  new_proc->setObjectName(QString::fromUtf8("action_file_new_prog_wnd_proc"));
  new_proc->setText(QApplication::translate("Selector", "Procedure", nullptr));
  new_proc->setToolTip("Create new procedure");
  new_proc->setStatusTip("Create new procedure");
  new_proc->setWhatsThis("Create new procedure");
  // File->New->Program Window->Trigger
  new_trg = new QAction;
  new_trg->setObjectName(QString::fromUtf8("action_file_new_prog_wnd_trg"));
  new_trg->setText(QApplication::translate("Selector", "Trigger", nullptr));
  new_trg->setToolTip("Create new trigger");
  new_trg->setStatusTip("Create new trigger");
  new_trg->setWhatsThis("Create new trigger");
  // File->New->Program Window->Type
  new_type = new QAction;
  new_type->setObjectName(QString::fromUtf8("action_file_new_prog_wnd_type"));
  new_type->setText(QApplication::translate("Selector", "Type", nullptr));
  new_type->setToolTip("Create new type");
  new_type->setStatusTip("Create new type");
  new_type->setWhatsThis("Create new type");
  // File->New->Program Window->Type body
  new_typebdy = new QAction;
  new_typebdy->setObjectName(QString::fromUtf8("action_file_new_prog_wnd_typebdy"));
  new_typebdy->setText(QApplication::translate("Selector", "Type Body", nullptr));
  new_typebdy->setToolTip("Create new type body");
  new_typebdy->setStatusTip("Create new type body");
  new_typebdy->setWhatsThis("Create new type body");
  // File->New->Program Window->Type Specification
  new_typespc = new QAction;
  new_typespc->setObjectName(QString::fromUtf8("action_file_new_prog_wnd_typespc"));
  new_typespc->setText(QApplication::translate("Selector", "Type Specification", nullptr));
  new_typespc->setToolTip("Create new type specification");
  new_typespc->setStatusTip("Create new type specification");
  new_typespc->setWhatsThis("Create new type specification");
  // File->New->Test Window
  new_test = new QAction;
  new_test->setObjectName(QString::fromUtf8("action_file_new_test"));
  new_test->setText(QApplication::translate("Selector", "&Test Window", nullptr));
  new_test->setToolTip("Create new test window");
  new_test->setStatusTip("Create new test window");
  new_test->setWhatsThis("Create new test window");
  // File->New->SQL Window
  new_sql = new QAction;
  new_sql->setObjectName(QString::fromUtf8("action_file_new_sql"));
  new_sql->setText(QApplication::translate("Selector", "&SQL Window", nullptr));
  new_sql->setToolTip("Create new SQL script");
  new_sql->setStatusTip("Create new SQL script, program unit or database object");
  new_sql->setWhatsThis("Create new SQL script, program unit or database object");
  new_sql->setIcon(QPixmap(":/icons/new-sql.png"));
  // File->New->Report Window
  new_rpt = new QAction;
  new_rpt->setObjectName(QString::fromUtf8("action_file_new_rpt"));
  new_rpt->setText(QApplication::translate("Selector", "&Report Window", nullptr));
  new_rpt->setToolTip("Create new report");
  new_rpt->setStatusTip("Create new report");
  new_rpt->setWhatsThis("Create new report");
  new_rpt->setIcon(QPixmap(":/icons/report.png"));
  // File->New->Command Window
  new_cmd = new QAction;
  new_cmd->setObjectName(QString::fromUtf8("action_file_new_cmd"));
  new_cmd->setText(QApplication::translate("Selector", "&Command Window", nullptr));
  new_cmd->setToolTip("Create new command window");
  new_cmd->setStatusTip("Create new command window");
  new_cmd->setWhatsThis("Create new command window");
  // File->New->Explain Plan Window
  new_explan = new QAction;
  new_explan->setObjectName(QString::fromUtf8("action_file_new_explan"));
  new_explan->setText(QApplication::translate("Selector", "&Explain Plan Window", nullptr));
  new_explan->setToolTip("Create new explain plan window");
  new_explan->setStatusTip("Create new explain plan window");
  new_explan->setWhatsThis("Create new explain plan window");
  // File->New->Diagram Window
  new_diag = new QAction;
  new_diag->setObjectName(QString::fromUtf8("action_file_new_diag"));
  new_diag->setText(QApplication::translate("Selector", "&Diagram Window", nullptr));
  new_diag->setToolTip("Create new diagram window");
  new_diag->setStatusTip("Create new diagram window");
  new_diag->setWhatsThis("Create new diagram window");
  // File->New->View
  new_view = new QAction;
  new_view->setObjectName(QString::fromUtf8("action_file_new_view"));
  new_view->setText(QApplication::translate("Selector", "&View", nullptr));
  new_view->setToolTip("Create new view");
  new_view->setStatusTip("Create new view");
  new_view->setWhatsThis("Create new view");
  // File->New->Materialized View
  new_mview = new QAction;
  new_mview->setObjectName(QString::fromUtf8("action_file_new_mview"));
  new_mview->setText(QApplication::translate("Selector", "&Materialized View", nullptr));
  new_mview->setToolTip("Create new materialized view");
  new_mview->setStatusTip("Create new materialized view");
  new_mview->setWhatsThis("Create new materialized view");
  // File->New->Table
  new_tbl = new QAction;
  new_tbl->setObjectName(QString::fromUtf8("action_file_new_tbl"));
  new_tbl->setText(QApplication::translate("Selector", "T&able", nullptr));
  new_tbl->setToolTip("Create new table");
  new_tbl->setStatusTip("Create new table");
  new_tbl->setWhatsThis("Create new table");
  // File->New->Sequence
  new_seq = new QAction;
  new_seq->setObjectName(QString::fromUtf8("action_file_new_seq"));
  new_seq->setText(QApplication::translate("Selector", "Se&quence", nullptr));
  new_seq->setToolTip("Create new sequence");
  new_seq->setStatusTip("Create new sequence");
  new_seq->setWhatsThis("Create new sequence");
  // File->New->Synonym
  new_syn = new QAction;
  new_syn->setObjectName(QString::fromUtf8("action_file_new_syn"));
  new_syn->setText(QApplication::translate("Selector", "Sy&nonym", nullptr));
  new_syn->setToolTip("Create new synonym");
  new_syn->setStatusTip("Create new synonym");
  new_syn->setWhatsThis("Create new synonym");
  // File->New->Library
  new_lib = new QAction;
  new_lib->setObjectName(QString::fromUtf8("action_file_new_lib"));
  new_lib->setText(QApplication::translate("Selector", "&Library", nullptr));
  new_lib->setToolTip("Create new library");
  new_lib->setStatusTip("Create new library");
  new_lib->setWhatsThis("Create new library");
  // File->New->Directory
  new_dir = new QAction;
  new_dir->setObjectName(QString::fromUtf8("action_file_new_dir"));
  new_dir->setText(QApplication::translate("Selector", "D&irectory", nullptr));
  new_dir->setToolTip("Create new directory");
  new_dir->setStatusTip("Create new directory");
  new_dir->setWhatsThis("Create new directory");
  // File->New->Job
  new_job = new QAction;
  new_job->setObjectName(QString::fromUtf8("action_file_new_job"));
  new_job->setText(QApplication::translate("Selector", "&Job", nullptr));
  new_job->setToolTip("Create new job");
  new_job->setStatusTip("Create new job");
  new_job->setWhatsThis("Create new job");
  // File->New->Queue
  new_que = new QAction;
  new_que->setObjectName(QString::fromUtf8("action_file_new_que"));
  new_que->setText(QApplication::translate("Selector", "Queue", nullptr));
  new_que->setToolTip("Create new queue");
  new_que->setStatusTip("Create new queue");
  new_que->setWhatsThis("Create new queue");
  // File->New->Queue table
  new_quetbl = new QAction;
  new_quetbl->setObjectName(QString::fromUtf8("action_file_new_quetbl"));
  new_quetbl->setText(QApplication::translate("Selector", "Queue ta&ble", nullptr));
  new_quetbl->setToolTip("Create new queue table");
  new_quetbl->setStatusTip("Create new queue table");
  new_quetbl->setWhatsThis("Create new queue table");
  // File->New->User
  new_user = new QAction;
  new_user->setObjectName(QString::fromUtf8("action_file_new_user"));
  new_user->setText(QApplication::translate("Selector", "&User", nullptr));
  new_user->setToolTip("Create new user");
  new_user->setStatusTip("Create new user");
  new_user->setWhatsThis("Create new user");
  // File->New->Role
  new_role = new QAction;
  new_role->setObjectName(QString::fromUtf8("action_file_new_role"));
  new_role->setText(QApplication::translate("Selector", "R&ole", nullptr));
  new_role->setToolTip("Create new role");
  new_role->setStatusTip("Create new role");
  new_role->setWhatsThis("Create new role");
  // File->New->Profile
  new_profile = new QAction;
  new_profile->setObjectName(QString::fromUtf8("action_file_new_profile"));
  new_profile->setText(QApplication::translate("Selector", "Pro&file", nullptr));
  new_profile->setToolTip("Create new profile");
  new_profile->setStatusTip("Create new profile");
  new_profile->setWhatsThis("Create new profile");
  // File->New->Database Link
  new_dblink = new QAction;
  new_dblink->setObjectName(QString::fromUtf8("action_file_new_dblink"));
  new_dblink->setText(QApplication::translate("Selector", "Database Lin&k", nullptr));
  new_dblink->setToolTip("Create new database link");
  new_dblink->setStatusTip("Create new database link");
  new_dblink->setWhatsThis("Create new database link");
  // File->Open->Program File
  open_prog = new QAction;
  open_prog->setObjectName(QString::fromUtf8("action_file_open_prog_file"));
  open_prog->setText(QApplication::translate("Selector", "&Program File", nullptr));
  open_prog->setToolTip("Open program file");
  open_prog->setStatusTip("Open existing program file");
  open_prog->setWhatsThis("Open existing program file");
  // File->Open->Test Script
  open_test = new QAction;
  open_test->setObjectName(QString::fromUtf8("action_file_open_test_script"));
  open_test->setText(QApplication::translate("Selector", "&Test Script", nullptr));
  open_test->setToolTip("Open test script");
  open_test->setStatusTip("Open existing test script");
  open_test->setWhatsThis("Open existing test script");
  // File->Open->SQL Script
  open_sql = new QAction;
  open_sql->setObjectName(QString::fromUtf8("action_file_open_sql_sqript"));
  open_sql->setText(QApplication::translate("Selector", "&SQL Script", nullptr));
  open_sql->setToolTip("Open SQL script");
  open_sql->setStatusTip("Open existing SQL script");
  open_sql->setWhatsThis("Open existing SQL script");
  // File->Open->Report File
  open_rpt = new QAction;
  open_rpt->setObjectName(QString::fromUtf8("action_file_open_rpt_file"));
  open_rpt->setText(QApplication::translate("Selector", "&Report File", nullptr));
  open_rpt->setToolTip("Open report file");
  open_rpt->setStatusTip("Open existing report file");
  open_rpt->setWhatsThis("Open existing report file");
  open_rpt->setIcon(QPixmap(":/icons/report.png"));
  // File->Open->Command File
  open_cmd = new QAction;
  open_cmd->setObjectName(QString::fromUtf8("action_file_open_cmd_file"));
  open_cmd->setText(QApplication::translate("Selector", "&Command File", nullptr));
  open_cmd->setToolTip("Open command file");
  open_cmd->setStatusTip("Open existing command file");
  open_cmd->setWhatsThis("Open existing command file");
  // File->Open->Diagram File
  open_diag = new QAction;
  open_diag->setObjectName(QString::fromUtf8("action_file_open_diag_file"));
  open_diag->setText(QApplication::translate("Selector", "&Diagram File", nullptr));
  open_diag->setToolTip("Open diagram file");
  open_diag->setStatusTip("Open existing diagram file");
  open_diag->setWhatsThis("Open existing diagram file");
  // File->Save
  save = new QAction;
  save->setObjectName(QString::fromUtf8("action_file_save"));
  save->setText(QApplication::translate("Selector", "&Save", nullptr));
  #ifndef QT_NO_SHORTCUT
  save->setShortcut(QApplication::translate("Selector", "Ctrl+S", nullptr));
  #endif // QT_NO_SHORTCUT
  save->setToolTip("Save file");
  save->setStatusTip("Save program unit as external text file");
  save->setWhatsThis("Save program unit as external text file");
  save->setIcon(QPixmap(":/icons/save-sql.png"));
  save->setEnabled(false);
  // File->Save As...
  save_as = new QAction;
  save_as->setObjectName(QString::fromUtf8("action_file_save_as"));
  save_as->setText(QApplication::translate("Selector", "Save &As...", nullptr));
  save_as->setToolTip("Save file with new name");
  save_as->setStatusTip("Save program unit as external text file with new name");
  save_as->setWhatsThis("Save program unit as external text file with new name");
  save_as->setEnabled(false);
  // File->Save All
  save_all = new QAction;
  save_all->setObjectName(QString::fromUtf8("action_file_save_all"));
  save_all->setText(QApplication::translate("Selector", "Save All", nullptr));
  save_all->setToolTip("Save all modified files");
  save_all->setStatusTip("Save all modified files");
  save_all->setWhatsThis("Save all modified files");
  save_all->setEnabled(false);
  // File->E-mail...
  email = new QAction;
  email->setObjectName(QString::fromUtf8("action_file_email"));
  email->setText(QApplication::translate("Selector", "&E-mail...", nullptr));
  email->setToolTip("Send current file via e-mail");
  email->setStatusTip("Send current file via e-mail");
  email->setWhatsThis("Send current file via e-mail");
  email->setEnabled(false);
  // File->Close
  close = new QAction;
  close->setObjectName(QString::fromUtf8("action_file_close"));
  close->setText(QApplication::translate("Selector", "&Close", nullptr));
  close->setToolTip("Close current file");
  close->setStatusTip("Close current file");
  close->setWhatsThis("Close current file");
  close->setEnabled(false);
  // File->Close All
  close_all = new QAction;
  close_all->setObjectName(QString::fromUtf8("action_file_close_all"));
  close_all->setText(QApplication::translate("Selector", "Clos&e All", nullptr));
  close_all->setToolTip("Close all files");
  close_all->setStatusTip("Close all files");
  close_all->setWhatsThis("Close all files");
  close_all->setEnabled(false);
  // File->Print
  print = new QAction;
  print->setObjectName(QString::fromUtf8("action_file_print"));
  print->setText(QApplication::translate("Selector", "&Print", nullptr));
  print->setToolTip("Send file to printer");
  print->setStatusTip("Send current file to printer");
  print->setWhatsThis("Send current file to printer");
  print->setEnabled(false);
  // File->Print Setup...
  print_setup = new QAction;
  print_setup->setObjectName(QString::fromUtf8("action_file_print_setup"));
  print_setup->setText(QApplication::translate("Selector", "Print Setup...", nullptr));
  print_setup->setToolTip("Change printer setups");
  print_setup->setStatusTip("Change printer setups");
  print_setup->setWhatsThis("Change printer setups");
  // File->Page Setup...
  page_setup = new QAction;
  page_setup->setObjectName(QString::fromUtf8("action_file_page_setup"));
  page_setup->setText(QApplication::translate("Selector", "Page Setup...", nullptr));
  page_setup->setToolTip("Change print-page options");
  page_setup->setStatusTip("Change print-page options");
  page_setup->setWhatsThis("Change print-page options");
  // File->New Instance
  new_instance = new QAction;
  new_instance->setObjectName(QString::fromUtf8("action_file_new_instance"));
  new_instance->setText(QApplication::translate("Selector", "Ne&w Instance", nullptr));
  new_instance->setToolTip("Create a new Selector instance");
  new_instance->setStatusTip("Create a new Selector instance");
  new_instance->setWhatsThis("Create a new Selector instance");
  // File->Authorization...
  authorization = new QAction;
  authorization->setObjectName(QString::fromUtf8("action_file_authorization"));
  authorization->setText(QApplication::translate("Selector", "Authori&zation...", nullptr));
  authorization->setToolTip("Change db-connection parameters");
  authorization->setStatusTip("Change db-connection parameters");
  authorization->setWhatsThis("Change db-connection parameters");
  // File->Exit
  exit = new QAction;
  exit->setObjectName(QString::fromUtf8("action_file_exit"));
  exit->setText(QApplication::translate("Selector", "E&xit", nullptr));
  #ifndef QT_NO_SHORTCUT
  exit->setShortcut(QApplication::translate("Selector", "Alt+F4", nullptr));
  #endif // QT_NO_SHORTCUT
  exit->setToolTip("Complete work and exit");
  exit->setStatusTip("Complete work and exit");
  exit->setWhatsThis("Complete work and exit");
}

file_actions::~file_actions()
{
  delete exit;
  delete authorization;
  delete new_instance;
  delete page_setup;
  delete print_setup;
  delete print;
  delete close_all;
  delete close;
  delete email;
  delete save_all;
  delete save_as;
  delete save;
  delete open_diag;
  delete open_cmd;
  delete open_rpt;
  delete open_sql;
  delete open_test;
  delete open_prog;
  delete new_dblink;
  delete new_profile;
  delete new_role;
  delete new_user;
  delete new_quetbl;
  delete new_que;
  delete new_job;
  delete new_dir;
  delete new_lib;
  delete new_syn;
  delete new_seq;
  delete new_tbl;
  delete new_mview;
  delete new_view;
  delete new_diag;
  delete new_explan;
  delete new_cmd;
  delete new_rpt;
  delete new_sql;
  delete new_test;
  delete new_typespc;
  delete new_typebdy;
  delete new_type;
  delete new_trg;
  delete new_proc;
  delete new_pkgspc;
  delete new_pkgbdy;
  delete new_pkg;
  delete new_jsrc;
  delete new_func;
  delete new_blank;
}
