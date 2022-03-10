#include "actions.h"

file_actions::file_actions()
{
  // File->New->Program Window->Blank
  new_blank = new QAction;
  new_blank->setObjectName(QString::fromUtf8("action_file_new_prog_wnd_blank"));

  // File->New->Program Window->Function
  new_func = new QAction;
  new_func->setObjectName(QString::fromUtf8("action_file_new_prog_wnd_func"));

  // File->New->Program Window->Java source
  new_jsrc = new QAction;
  new_jsrc->setObjectName(QString::fromUtf8("action_file_new_prog_wnd_jsrc"));

  // File->New->Program Window->Package
  new_pkg = new QAction;
  new_pkg->setObjectName(QString::fromUtf8("action_file_new_prog_wnd_pkg"));

  // File->New->Program Window->Package body
  new_pkgbdy = new QAction;
  new_pkgbdy->setObjectName(QString::fromUtf8("action_file_new_prog_wnd_pkgbdy"));

  // File->New->Program Window->Package Specification
  new_pkgspc = new QAction;
  new_pkgspc->setObjectName(QString::fromUtf8("action_file_new_prog_wnd_pkgspc"));

  // File->New->Program Window->Procedure
  new_proc = new QAction;
  new_proc->setObjectName(QString::fromUtf8("action_file_new_prog_wnd_proc"));

  // File->New->Program Window->Trigger
  new_trg = new QAction;
  new_trg->setObjectName(QString::fromUtf8("action_file_new_prog_wnd_trg"));

  // File->New->Program Window->Type
  new_type = new QAction;
  new_type->setObjectName(QString::fromUtf8("action_file_new_prog_wnd_type"));

  // File->New->Program Window->Type body
  new_typebdy = new QAction;
  new_typebdy->setObjectName(QString::fromUtf8("action_file_new_prog_wnd_typebdy"));

  // File->New->Program Window->Type Specification
  new_typespc = new QAction;
  new_typespc->setObjectName(QString::fromUtf8("action_file_new_prog_wnd_typespc"));

  // File->New->Test Window
  new_test = new QAction;
  new_test->setObjectName(QString::fromUtf8("action_file_new_test"));

  // File->New->SQL Window
  new_sql = new QAction;
  new_sql->setObjectName(QString::fromUtf8("action_file_new_sql"));
  new_sql->setIcon(QPixmap(":/icons/new-sql.png"));

  // File->New->Report Window
  new_rpt = new QAction;
  new_rpt->setObjectName(QString::fromUtf8("action_file_new_rpt"));
  new_rpt->setIcon(QPixmap(":/icons/report.png"));

  // File->New->Command Window
  new_cmd = new QAction;
  new_cmd->setObjectName(QString::fromUtf8("action_file_new_cmd"));

  // File->New->Explain Plan Window
  new_explan = new QAction;
  new_explan->setObjectName(QString::fromUtf8("action_file_new_explan"));

  // File->New->Diagram Window
  new_diag = new QAction;
  new_diag->setObjectName(QString::fromUtf8("action_file_new_diag"));

  // File->New->View
  new_view = new QAction;
  new_view->setObjectName(QString::fromUtf8("action_file_new_view"));

  // File->New->Materialized View
  new_mview = new QAction;
  new_mview->setObjectName(QString::fromUtf8("action_file_new_mview"));

  // File->New->Table
  new_tbl = new QAction;
  new_tbl->setObjectName(QString::fromUtf8("action_file_new_tbl"));

  // File->New->Sequence
  new_seq = new QAction;
  new_seq->setObjectName(QString::fromUtf8("action_file_new_seq"));

  // File->New->Synonym
  new_syn = new QAction;
  new_syn->setObjectName(QString::fromUtf8("action_file_new_syn"));

  // File->New->Library
  new_lib = new QAction;
  new_lib->setObjectName(QString::fromUtf8("action_file_new_lib"));

  // File->New->Directory
  new_dir = new QAction;
  new_dir->setObjectName(QString::fromUtf8("action_file_new_dir"));

  // File->New->Job
  new_job = new QAction;
  new_job->setObjectName(QString::fromUtf8("action_file_new_job"));

  // File->New->Queue
  new_que = new QAction;
  new_que->setObjectName(QString::fromUtf8("action_file_new_que"));

  // File->New->Queue table
  new_quetbl = new QAction;
  new_quetbl->setObjectName(QString::fromUtf8("action_file_new_quetbl"));

  // File->New->User
  new_user = new QAction;
  new_user->setObjectName(QString::fromUtf8("action_file_new_user"));

  // File->New->Role
  new_role = new QAction;
  new_role->setObjectName(QString::fromUtf8("action_file_new_role"));

  // File->New->Profile
  new_profile = new QAction;
  new_profile->setObjectName(QString::fromUtf8("action_file_new_profile"));

  // File->New->Database Link
  new_dblink = new QAction;
  new_dblink->setObjectName(QString::fromUtf8("action_file_new_dblink"));

  // File->Open->Program File
  open_prog = new QAction;
  open_prog->setObjectName(QString::fromUtf8("action_file_open_prog_file"));

  // File->Open->Test Script
  open_test = new QAction;
  open_test->setObjectName(QString::fromUtf8("action_file_open_test_script"));

  // File->Open->SQL Script
  open_sql = new QAction;
  open_sql->setObjectName(QString::fromUtf8("action_file_open_sql_script"));

  // File->Open->Report File
  open_rpt = new QAction;
  open_rpt->setObjectName(QString::fromUtf8("action_file_open_rpt_file"));
  open_rpt->setIcon(QPixmap(":/icons/report.png"));

  // File->Open->Command File
  open_cmd = new QAction;
  open_cmd->setObjectName(QString::fromUtf8("action_file_open_cmd_file"));

  // File->Open->Diagram File
  open_diag = new QAction;
  open_diag->setObjectName(QString::fromUtf8("action_file_open_diag_file"));

  // File->Save
  save = new QAction;
  save->setObjectName(QString::fromUtf8("action_file_save"));
  #ifndef QT_NO_SHORTCUT
  save->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_S));
  #endif // QT_NO_SHORTCUT
  save->setIcon(QPixmap(":/icons/save-sql.png"));
  save->setEnabled(false);

  // File->Save As...
  save_as = new QAction;
  save_as->setObjectName(QString::fromUtf8("action_file_save_as"));
  save_as->setEnabled(false);

  // File->Save All
  save_all = new QAction;
  save_all->setObjectName(QString::fromUtf8("action_file_save_all"));
  save_all->setEnabled(false);

  // File->E-mail...
  email = new QAction;
  email->setObjectName(QString::fromUtf8("action_file_email"));
  email->setEnabled(false);

  // File->Close
  close = new QAction;
  close->setObjectName(QString::fromUtf8("action_file_close"));
  close->setEnabled(false);

  // File->Close All
  close_all = new QAction;
  close_all->setObjectName(QString::fromUtf8("action_file_close_all"));
  close_all->setEnabled(false);

  // File->Print
  print = new QAction;
  print->setObjectName(QString::fromUtf8("action_file_print"));
  print->setEnabled(false);

  // File->Print Setup...
  print_setup = new QAction;
  print_setup->setObjectName(QString::fromUtf8("action_file_print_setup"));

  // File->Page Setup...
  page_setup = new QAction;
  page_setup->setObjectName(QString::fromUtf8("action_file_page_setup"));

  // File->New Instance
  new_instance = new QAction;
  new_instance->setObjectName(QString::fromUtf8("action_file_new_instance"));

  // File->Authorization...
  authorization = new QAction;
  authorization->setObjectName(QString::fromUtf8("action_file_authorization"));

  // File->Exit
  exit = new QAction;
  exit->setObjectName(QString::fromUtf8("action_file_exit"));
  #ifndef QT_NO_SHORTCUT
  exit->setShortcut(QKeySequence(Qt::ALT + Qt::Key_F4));
  #endif // QT_NO_SHORTCUT

  translateGUI(true);
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

void file_actions::translateGUI(bool init)
{
  new_blank->setText(QCoreApplication::translate("Selector->Actions", "Blank", "Action title"));
  #ifndef QT_NO_TOOLTIP
  new_blank->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new blank program window", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  new_blank->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new blank program window", "Status Tip item"));
  new_blank->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new blank program window", "Whats This item"));

  new_func->setText(QCoreApplication::translate("Selector->Actions", "Function", "Action title"));
  #ifndef QT_NO_TOOLTIP
  new_func->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new function", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  new_func->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new function window", "Status Tip item"));
  new_func->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new function window", "Whats This item"));

  new_jsrc->setText(QCoreApplication::translate("Selector->Actions", "Java Source", "Action title"));
  #ifndef QT_NO_TOOLTIP
  new_jsrc->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new java program window", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  new_jsrc->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new java program window", "Status Tip item"));
  new_jsrc->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new java program window", "Whats This item"));

  new_pkg->setText(QCoreApplication::translate("Selector->Actions", "Package", "Action title"));
  #ifndef QT_NO_TOOLTIP
  new_pkg->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new package", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  new_pkg->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new package", "Status Tip item"));
  new_pkg->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new package", "Whats This item"));

  new_pkgbdy->setText(QCoreApplication::translate("Selector->Actions", "Package Body", "Action title"));
  #ifndef QT_NO_TOOLTIP
  new_pkgbdy->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new package body", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  new_pkgbdy->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new package body", "Status Tip item"));
  new_pkgbdy->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new package body", "Whats This item"));

  new_pkgspc->setText(QCoreApplication::translate("Selector->Actions", "Package Specification", "Action title"));
  #ifndef QT_NO_TOOLTIP
  new_pkgspc->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new package specification", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  new_pkgspc->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new package specification", "Status Tip item"));
  new_pkgspc->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new package specification", "Whats This item"));

  new_proc->setText(QCoreApplication::translate("Selector->Actions", "Procedure", "Action title"));
  #ifndef QT_NO_TOOLTIP
  new_proc->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new procedure", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  new_proc->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new procedure", "Status Tip item"));
  new_proc->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new procedure", "Whats This item"));

  new_trg->setText(QCoreApplication::translate("Selector->Actions", "Trigger", "Action title"));
  #ifndef QT_NO_TOOLTIP
  new_trg->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new trigger", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  new_trg->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new trigger", "Status Tip item"));
  new_trg->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new trigger", "Whats This item"));

  new_type->setText(QCoreApplication::translate("Selector->Actions", "Type", "Action title"));
  #ifndef QT_NO_TOOLTIP
  new_type->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new type", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  new_type->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new type", "Status Tip item"));
  new_type->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new type", "Whats This item"));

  new_typebdy->setText(QCoreApplication::translate("Selector->Actions", "Type Body", "Action title"));
  #ifndef QT_NO_TOOLTIP
  new_typebdy->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new type body", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  new_typebdy->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new type body", "Status Tip item"));
  new_typebdy->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new type body", "Whats This item"));

  new_typespc->setText(QCoreApplication::translate("Selector->Actions", "Type Specification", "Action title"));
  #ifndef QT_NO_TOOLTIP
  new_typespc->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new type specification", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  new_typespc->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new type specification", "Status Tip item"));
  new_typespc->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new type specification", "Whats This item"));

  new_test->setText(QCoreApplication::translate("Selector->Actions", "&Test Window", "Action title"));
  #ifndef QT_NO_TOOLTIP
  new_test->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new test window", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  new_test->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new test window", "Status Tip item"));
  new_test->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new test window", "Whats This item"));

  new_sql->setText(QCoreApplication::translate("Selector->Actions", "&SQL Window", "Action title"));
  #ifndef QT_NO_TOOLTIP
  new_sql->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new SQL script", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  new_sql->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new SQL script, program unit or database object", "Status Tip item"));
  new_sql->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new SQL script, program unit or database object", "Whats This item"));

  new_rpt->setText(QCoreApplication::translate("Selector->Actions", "&Report Window", "Action title"));
  #ifndef QT_NO_TOOLTIP
  new_rpt->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new report", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  new_rpt->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new report", "Status Tip item"));
  new_rpt->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new report", "Whats This item"));

  new_cmd->setText(QCoreApplication::translate("Selector->Actions", "&Command Window", "Action title"));
  #ifndef QT_NO_TOOLTIP
  new_cmd->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new command window", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  new_cmd->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new command window", "Status Tip item"));
  new_cmd->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new command window", "Whats This item"));

  new_explan->setText(QCoreApplication::translate("Selector->Actions", "&Explain Plan Window", "Action title"));
  #ifndef QT_NO_TOOLTIP
  new_explan->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new explain plan window", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  new_explan->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new explain plan window", "Status Tip item"));
  new_explan->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new explain plan window", "Whats This item"));

  new_diag->setText(QCoreApplication::translate("Selector->Actions", "&Diagram Window", "Action title"));
  #ifndef QT_NO_TOOLTIP
  new_diag->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new diagram window", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  new_diag->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new diagram window", "Status Tip item"));
  new_diag->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new diagram window", "Whats This item"));

  new_view->setText(QCoreApplication::translate("Selector->Actions", "&View", "Action title"));
  #ifndef QT_NO_TOOLTIP
  new_view->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new view", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  new_view->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new view", "Status Tip item"));
  new_view->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new view", "Whats This item"));

  new_mview->setText(QCoreApplication::translate("Selector->Actions", "&Materialized View", "Action title"));
  #ifndef QT_NO_TOOLTIP
  new_mview->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new materialized view", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  new_mview->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new materialized view", "Status Tip item"));
  new_mview->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new materialized view", "Whats This item"));

  new_tbl->setText(QCoreApplication::translate("Selector->Actions", "T&able", "Action title"));
  #ifndef QT_NO_TOOLTIP
  new_tbl->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new table", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  new_tbl->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new table", "Status Tip item"));
  new_tbl->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new table", "Whats This item"));

  new_seq->setText(QCoreApplication::translate("Selector->Actions", "Se&quence", "Action title"));
  #ifndef QT_NO_TOOLTIP
  new_seq->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new sequence", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  new_seq->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new sequence", "Status Tip item"));
  new_seq->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new sequence", "Whats This item"));

  new_syn->setText(QCoreApplication::translate("Selector->Actions", "Sy&nonym", "Action title"));
  #ifndef QT_NO_TOOLTIP
  new_syn->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new synonym", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  new_syn->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new synonym", "Status Tip item"));
  new_syn->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new synonym", "Whats This item"));

  new_lib->setText(QCoreApplication::translate("Selector->Actions", "&Library", "Action title"));
  #ifndef QT_NO_TOOLTIP
  new_lib->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new library", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  new_lib->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new library", "Status Tip item"));
  new_lib->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new library", "Whats This item"));

  new_dir->setText(QCoreApplication::translate("Selector->Actions", "D&irectory", "Action title"));
  #ifndef QT_NO_TOOLTIP
  new_dir->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new directory", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  new_dir->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new directory", "Status Tip item"));
  new_dir->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new directory", "Whats This item"));

  new_job->setText(QCoreApplication::translate("Selector->Actions", "&Job", "Action title"));
  #ifndef QT_NO_TOOLTIP
  new_job->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new job", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  new_job->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new job", "Status Tip item"));
  new_job->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new job", "Whats This item"));

  new_que->setText(QCoreApplication::translate("Selector->Actions", "Queue", "Action title"));
  #ifndef QT_NO_TOOLTIP
  new_que->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new queue", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  new_que->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new queue", "Status Tip item"));
  new_que->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new queue", "Whats This item"));

  new_quetbl->setText(QCoreApplication::translate("Selector->Actions", "Queue ta&ble", "Action title"));
  #ifndef QT_NO_TOOLTIP
  new_quetbl->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new queue table", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  new_quetbl->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new queue table", "Status Tip item"));
  new_quetbl->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new queue table", "Whats This item"));

  new_user->setText(QCoreApplication::translate("Selector->Actions", "&User", "Action title"));
  #ifndef QT_NO_TOOLTIP
  new_user->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new user", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  new_user->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new user", "Status Tip item"));
  new_user->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new user", "Whats This item"));

  new_role->setText(QCoreApplication::translate("Selector->Actions", "R&ole", "Action title"));
  #ifndef QT_NO_TOOLTIP
  new_role->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new role", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  new_role->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new role", "Status Tip item"));
  new_role->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new role", "Whats This item"));

  new_profile->setText(QCoreApplication::translate("Selector->Actions", "Pro&file", "Action title"));
  #ifndef QT_NO_TOOLTIP
  new_profile->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new profile", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  new_profile->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new profile", "Status Tip item"));
  new_profile->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new profile", "Whats This item"));

  new_dblink->setText(QCoreApplication::translate("Selector->Actions", "Database Lin&k", "Action title"));
  #ifndef QT_NO_TOOLTIP
  new_dblink->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new database link", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  new_dblink->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new database link", "Status Tip item"));
  new_dblink->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new database link", "Whats This item"));

  open_prog->setText(QCoreApplication::translate("Selector->Actions", "&Program File", "Action title"));
  #ifndef QT_NO_TOOLTIP
  open_prog->setToolTip(QCoreApplication::translate("Selector->Actions", "Open program file", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  open_prog->setStatusTip(QCoreApplication::translate("Selector->Actions", "Open existing program file", "Status Tip item"));
  open_prog->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Open existing program file", "Whats This item"));

  open_test->setText(QCoreApplication::translate("Selector->Actions", "&Test Script", "Action title"));
  #ifndef QT_NO_TOOLTIP
  open_test->setToolTip(QCoreApplication::translate("Selector->Actions", "Open test script", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  open_test->setStatusTip(QCoreApplication::translate("Selector->Actions", "Open existing test script", "Status Tip item"));
  open_test->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Open existing test script", "Whats This item"));

  open_sql->setText(QCoreApplication::translate("Selector->Actions", "&SQL Script", "Action title"));
  #ifndef QT_NO_TOOLTIP
  open_sql->setToolTip(QCoreApplication::translate("Selector->Actions", "Open SQL script", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  open_sql->setStatusTip(QCoreApplication::translate("Selector->Actions", "Open existing SQL script", "Status Tip item"));
  open_sql->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Open existing SQL script", "Whats This item"));

  open_rpt->setText(QCoreApplication::translate("Selector->Actions", "&Report File", "Action title"));
  #ifndef QT_NO_TOOLTIP
  open_rpt->setToolTip(QCoreApplication::translate("Selector->Actions", "Open report file", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  open_rpt->setStatusTip(QCoreApplication::translate("Selector->Actions", "Open existing report file", "Status Tip item"));
  open_rpt->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Open existing report file", "Whats This item"));

  open_cmd->setText(QCoreApplication::translate("Selector->Actions", "&Command File", "Action title"));
  #ifndef QT_NO_TOOLTIP
  open_cmd->setToolTip(QCoreApplication::translate("Selector->Actions", "Open command file", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  open_cmd->setStatusTip(QCoreApplication::translate("Selector->Actions", "Open existing command file", "Status Tip item"));
  open_cmd->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Open existing command file", "Whats This item"));

  open_diag->setText(QCoreApplication::translate("Selector->Actions", "&Diagram File", "Action title"));
  #ifndef QT_NO_TOOLTIP
  open_diag->setToolTip(QCoreApplication::translate("Selector->Actions", "Open diagram file", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  open_diag->setStatusTip(QCoreApplication::translate("Selector->Actions", "Open existing diagram file", "Status Tip item"));
  open_diag->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Open existing diagram file", "Whats This item"));

  save->setText(QCoreApplication::translate("Selector->Actions", "&Save", "Action title"));
  #ifndef QT_NO_TOOLTIP
  save->setToolTip(QCoreApplication::translate("Selector->Actions", "Save file", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  save->setStatusTip(QCoreApplication::translate("Selector->Actions", "Save program unit as external text file", "Status Tip item"));
  save->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Save program unit as external text file", "Whats This item"));

  save_as->setText(QCoreApplication::translate("Selector->Actions", "Save &As...", "Action title"));
  #ifndef QT_NO_TOOLTIP
  save_as->setToolTip(QCoreApplication::translate("Selector->Actions", "Save file with new name", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  save_as->setStatusTip(QCoreApplication::translate("Selector->Actions", "Save program unit as external text file with new name", "Status Tip item"));
  save_as->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Save program unit as external text file with new name", "Whats This item"));

  save_all->setText(QCoreApplication::translate("Selector->Actions", "Save All", "Action title"));
  #ifndef QT_NO_TOOLTIP
  save_all->setToolTip(QCoreApplication::translate("Selector->Actions", "Save all modified files", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  save_all->setStatusTip(QCoreApplication::translate("Selector->Actions", "Save all modified files", "Status Tip item"));
  save_all->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Save all modified files", "Whats This item"));

  email->setText(QCoreApplication::translate("Selector->Actions", "&E-mail...", "Action title"));
  #ifndef QT_NO_TOOLTIP
  email->setToolTip(QCoreApplication::translate("Selector->Actions", "Send current file via e-mail", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  email->setStatusTip(QCoreApplication::translate("Selector->Actions", "Send current file via e-mail", "Status Tip item"));
  email->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Send current file via e-mail", "Whats This item"));

  close->setText(QCoreApplication::translate("Selector->Actions", "&Close", "Action title"));
  #ifndef QT_NO_TOOLTIP
  close->setToolTip(QCoreApplication::translate("Selector->Actions", "Close current file", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  close->setStatusTip(QCoreApplication::translate("Selector->Actions", "Close current file", "Status Tip item"));
  close->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Close current file", "Whats This item"));

  close_all->setText(QCoreApplication::translate("Selector->Actions", "Clos&e All", "Action title"));
  #ifndef QT_NO_TOOLTIP
  close_all->setToolTip(QCoreApplication::translate("Selector->Actions", "Close all files", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  close_all->setStatusTip(QCoreApplication::translate("Selector->Actions", "Close all files", "Status Tip item"));
  close_all->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Close all files", "Whats This item"));

  print->setText(QCoreApplication::translate("Selector->Actions", "&Print", "Action title"));
  #ifndef QT_NO_TOOLTIP
  print->setToolTip(QCoreApplication::translate("Selector->Actions", "Send file to printer", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  print->setStatusTip(QCoreApplication::translate("Selector->Actions", "Send current file to printer", "Status Tip item"));
  print->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Send current file to printer", "Whats This item"));

  print_setup->setText(QCoreApplication::translate("Selector->Actions", "Print Setup...", "Action title"));
  #ifndef QT_NO_TOOLTIP
  print_setup->setToolTip(QCoreApplication::translate("Selector->Actions", "Change printer setups", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  print_setup->setStatusTip(QCoreApplication::translate("Selector->Actions", "Change printer setups", "Status Tip item"));
  print_setup->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Change printer setups", "Whats This item"));

  page_setup->setText(QCoreApplication::translate("Selector->Actions", "Page Setup...", "Action title"));
  #ifndef QT_NO_TOOLTIP
  page_setup->setToolTip(QCoreApplication::translate("Selector->Actions", "Change print-page options", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  page_setup->setStatusTip(QCoreApplication::translate("Selector->Actions", "Change print-page options", "Status Tip item"));
  page_setup->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Change print-page options", "Whats This item"));

  new_instance->setText(QCoreApplication::translate("Selector->Actions", "Ne&w Instance", "Action title"));
  #ifndef QT_NO_TOOLTIP
  new_instance->setToolTip(QCoreApplication::translate("Selector->Actions", "Create a new Selector instance", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  new_instance->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create a new Selector instance", "Status Tip item"));
  new_instance->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create a new Selector instance", "Whats This item"));

  authorization->setText(QCoreApplication::translate("Selector->Actions", "Authori&zation...", "Action title"));
  #ifndef QT_NO_TOOLTIP
  authorization->setToolTip(QCoreApplication::translate("Selector->Actions", "Change db-connection parameters", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  authorization->setStatusTip(QCoreApplication::translate("Selector->Actions", "Change db-connection parameters", "Status Tip item"));
  authorization->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Change db-connection parameters", "Whats This item"));

  exit->setText(QCoreApplication::translate("Selector->Actions", "E&xit", "Action title"));
  #ifndef QT_NO_TOOLTIP
  exit->setToolTip(QCoreApplication::translate("Selector->Actions", "Complete work and exit", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  exit->setStatusTip(QCoreApplication::translate("Selector->Actions", "Complete work and exit", "Status Tip item"));
  exit->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Complete work and exit", "Whats This item"));
};

edit_actions::edit_actions()
{
  // Edit->Undo
  undo = new QAction;
  undo->setObjectName(QString::fromUtf8("action_edit_undo"));
  #ifndef QT_NO_SHORTCUT
  undo->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_Z));
  #endif // QT_NO_SHORTCUT
  undo->setIcon(QPixmap(":/icons/edit-undo.png"));
  undo->setEnabled(false);

  // Edit->Redo
  redo = new QAction;
  redo->setObjectName(QString::fromUtf8("action_edit_redo"));
  #ifndef QT_NO_SHORTCUT
  redo->setShortcut(QKeySequence(Qt::SHIFT + Qt::CTRL + Qt::Key_Z));
  #endif // QT_NO_SHORTCUT
  redo->setIcon(QPixmap(":/icons/edit-redo.png"));
  redo->setEnabled(false);

  // Edit->Beautifier
  beautifier = new QAction;
  beautifier->setObjectName(QString::fromUtf8("action_edit_beautifier"));
  beautifier->setEnabled(false);

  // Edit->Beautifier Options
  beautifier_optns = new QAction;
  beautifier_optns->setObjectName(QString::fromUtf8("action_edit_beautifier_optns"));
  beautifier_optns->setEnabled(false);

  // Edit->Cut
  cut = new QAction;
  cut->setObjectName(QString::fromUtf8("action_edit_cut"));
  #ifndef QT_NO_SHORTCUT
  cut->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_X));
  #endif // QT_NO_SHORTCUT
  cut->setEnabled(false);

  // Edit->Copy
  copy = new QAction;
  copy->setObjectName(QString::fromUtf8("action_edit_copy"));
  #ifndef QT_NO_SHORTCUT
  copy->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_C));
  #endif // QT_NO_SHORTCUT
  copy->setEnabled(false);

  // Edit->Paste
  paste = new QAction;
  paste->setObjectName(QString::fromUtf8("action_edit_paste"));
  #ifndef QT_NO_SHORTCUT
  paste->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_V));
  #endif // QT_NO_SHORTCUT
  paste->setEnabled(false);

  // Edit->Append
  append = new QAction;
  append->setObjectName(QString::fromUtf8("action_edit_append"));
  append->setEnabled(false);

  // Edit->Clear
  clear = new QAction;
  clear->setObjectName(QString::fromUtf8("action_edit_clear"));
  clear->setEnabled(false);

  // Edit->Select All
  select_all = new QAction;
  select_all->setObjectName(QString::fromUtf8("action_edit_select_all"));
  #ifndef QT_NO_SHORTCUT
  select_all->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_A));
  #endif // QT_NO_SHORTCUT
  select_all->setEnabled(false);

  // Edit->Recall Statement
  recall = new QAction;
  recall->setObjectName(QString::fromUtf8("action_edit_recall"));
  #ifndef QT_NO_SHORTCUT
  recall->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_E));
  #endif // QT_NO_SHORTCUT
  recall->setEnabled(false);

  // Edit->Special Copy->C++
  scpy_cpp = new QAction;
  scpy_cpp->setObjectName(QString::fromUtf8("action_edit_scpy_cpp"));
  scpy_cpp->setEnabled(false);

  // Edit->Special Copy->Delphi
  scpy_delphi = new QAction;
  scpy_delphi->setObjectName(QString::fromUtf8("action_edit_scpy_delphi"));
  scpy_delphi->setEnabled(false);

  // Edit->Special Copy->Java
  scpy_java = new QAction;
  scpy_java->setObjectName(QString::fromUtf8("action_edit_scpy_java"));
  scpy_java->setEnabled(false);

  // Edit->Special Copy->PL/SQL
  scpy_plsql = new QAction;
  scpy_plsql->setObjectName(QString::fromUtf8("action_edit_scpy_plsql"));
  scpy_plsql->setEnabled(false);

  // Edit->Special Copy->Visual Basic
  scpy_basic = new QAction;
  scpy_basic->setObjectName(QString::fromUtf8("action_edit_scpy_basic"));
  scpy_basic->setEnabled(false);

  // Edit->Selection->Indent
  slctn_indent = new QAction;
  slctn_indent->setObjectName(QString::fromUtf8("action_edit_selection_indent"));
  #ifndef QT_NO_SHORTCUT
  slctn_indent->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_I));
  #endif // QT_NO_SHORTCUT
  slctn_indent->setEnabled(false);

  // Edit->Selection->Unindent
  slctn_unindent = new QAction;
  slctn_unindent->setObjectName(QString::fromUtf8("action_edit_selection_unindent"));
  #ifndef QT_NO_SHORTCUT
  slctn_unindent->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_U));
  #endif // QT_NO_SHORTCUT
  slctn_unindent->setEnabled(false);

  // Edit->Selection->Uppercase
  slctn_uppercase = new QAction;
  slctn_uppercase->setObjectName(QString::fromUtf8("action_edit_selection_uppercase"));
  slctn_uppercase->setEnabled(false);

  // Edit->Selection->Lowercase
  slctn_lowercase = new QAction;
  slctn_lowercase->setObjectName(QString::fromUtf8("action_edit_selection_lowercase"));
  slctn_lowercase->setEnabled(false);

  // Edit->Selection->Comment
  slctn_comment = new QAction;
  slctn_comment->setObjectName(QString::fromUtf8("action_edit_selection_comment"));
  slctn_comment->setEnabled(false);

  // Edit->Selection->Uncomment
  slctn_uncomment = new QAction;
  slctn_uncomment->setObjectName(QString::fromUtf8("action_edit_selection_uncomment"));
  slctn_uncomment->setEnabled(false);

  // Edit->Selection->Apply Syntax Case
  slctn_aplsyncase = new QAction;
  slctn_aplsyncase->setObjectName(QString::fromUtf8("action_edit_selection_aplsyncase"));
  slctn_aplsyncase->setEnabled(false);

  // Edit->Selection->Sort
  slctn_sort = new QAction;
  slctn_sort->setObjectName(QString::fromUtf8("action_edit_selection_sort"));
  slctn_sort->setEnabled(false);

  // Edit->Selection->Color Mark
  slctn_mark = new QAction;
  slctn_mark->setObjectName(QString::fromUtf8("action_edit_selection_mark"));
  slctn_mark->setEnabled(false);

  // Edit->To-Do Items->Show List...
  todo_list = new QAction;
  todo_list->setObjectName(QString::fromUtf8("action_edit_todo_list"));
  todo_list->setEnabled(false);

  // Edit->To-Do Items->Add Item...
  todo_add = new QAction;
  todo_add->setObjectName(QString::fromUtf8("action_edit_todo_add"));
  todo_add->setEnabled(false);

  // Edit->To-Do Items->Edit Item...
  todo_edit = new QAction;
  todo_edit->setObjectName(QString::fromUtf8("action_edit_todo_edit"));
  todo_edit->setEnabled(false);

  // Edit->To-Do Items->Close Item
  todo_close = new QAction;
  todo_close->setObjectName(QString::fromUtf8("action_edit_todo_close"));
  todo_close->setEnabled(false);

  // Edit->To-Do Items->Delete Item
  todo_del = new QAction;
  todo_del->setObjectName(QString::fromUtf8("action_edit_todo_del"));
  todo_del->setEnabled(false);

  // Edit->Find
  find = new QAction;
  find->setObjectName(QString::fromUtf8("action_edit_find"));
  #ifndef QT_NO_SHORTCUT
  find->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_F));
  #endif // QT_NO_SHORTCUT
  find->setEnabled(false);

  // Edit->Repeat Last Find
  repeat_find = new QAction;
  repeat_find->setObjectName(QString::fromUtf8("action_edit_repeat_find"));
  #ifndef QT_NO_SHORTCUT
  repeat_find->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_L));
  #endif // QT_NO_SHORTCUT
  repeat_find->setEnabled(false);

  // Edit->Replace
  replace = new QAction;
  replace->setObjectName(QString::fromUtf8("action_edit_replace"));
  #ifndef QT_NO_SHORTCUT
  replace->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_P));
  #endif // QT_NO_SHORTCUT
  replace->setEnabled(false);

  // Edit->Find Matches
  find_matches = new QAction;
  find_matches->setObjectName(QString::fromUtf8("action_edit_find_matches"));
  #ifndef QT_NO_SHORTCUT
  find_matches->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_M));
  #endif // QT_NO_SHORTCUT
  find_matches->setEnabled(false);

  // Edit->Show Special Characters
  show_spec = new QAction;
  show_spec->setObjectName(QString::fromUtf8("action_edit_show_spec"));
  show_spec->setCheckable(true);
  show_spec->setChecked(false);
  show_spec->setEnabled(false);

  // Edit->Code Folding
  code_folding = new QAction;
  code_folding->setObjectName(QString::fromUtf8("action_edit_code_folding"));
  code_folding->setCheckable(true);
  code_folding->setChecked(false);
  code_folding->setEnabled(false);

  // Edit->Set Bookmark
  bookmark_set = new QAction;
  bookmark_set->setObjectName(QString::fromUtf8("action_edit_bookmark_set"));
  #ifndef QT_NO_SHORTCUT
  bookmark_set->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_K));
  #endif // QT_NO_SHORTCUT
  bookmark_set->setEnabled(false);

  // Edit->Go to Bookmark->Next
  bookmark_goto_next = new QAction;
  bookmark_goto_next->setObjectName(QString::fromUtf8("action_edit_bookmark_goto_next"));
  bookmark_goto_next->setEnabled(false);

  // Edit->Go to Bookmark->Previous
  bookmark_goto_prev = new QAction;
  bookmark_goto_prev->setObjectName(QString::fromUtf8("action_edit_bookmark_goto_prev"));
  bookmark_goto_prev->setEnabled(false);

  // Edit->Bookmark List
  bookmark_list = new QAction;
  bookmark_list->setObjectName(QString::fromUtf8("action_edit_bookmark_list"));
  bookmark_list->setEnabled(false);

  // Edit->Go to Line
  go_to = new QAction;
  go_to->setObjectName(QString::fromUtf8("action_edit_goto"));
  #ifndef QT_NO_SHORTCUT
  go_to->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_G));
  #endif // QT_NO_SHORTCUT
  go_to->setEnabled(false);

  // Edit->Next Tab Page
  next_tab = new QAction;
  next_tab->setObjectName(QString::fromUtf8("action_edit_next_tab"));
  #ifndef QT_NO_SHORTCUT
  next_tab->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_H));
  #endif // QT_NO_SHORTCUT
  next_tab->setEnabled(false);

  // Edit->Previous Tab Page
  prev_tab = new QAction;
  prev_tab->setObjectName(QString::fromUtf8("action_edit_prev_tab"));
  #ifndef QT_NO_SHORTCUT
  prev_tab->setShortcut(QKeySequence(Qt::SHIFT + Qt::CTRL + Qt::Key_H));
  #endif // QT_NO_SHORTCUT
  prev_tab->setEnabled(false);

  translateGUI(true);
}

edit_actions::~edit_actions()
{
  delete prev_tab;
  delete next_tab;
  delete go_to;
  delete bookmark_list;
  delete bookmark_goto_prev;
  delete bookmark_goto_next;
  delete bookmark_set;
  delete code_folding;
  delete show_spec;
  delete find_matches;
  delete replace;
  delete repeat_find;
  delete find;
  delete todo_del;
  delete todo_close;
  delete todo_edit;
  delete todo_add;
  delete todo_list;
  delete slctn_mark;
  delete slctn_sort;
  delete slctn_aplsyncase;
  delete slctn_uncomment;
  delete slctn_comment;
  delete slctn_lowercase;
  delete slctn_uppercase;
  delete slctn_unindent;
  delete slctn_indent;
  delete scpy_basic;
  delete scpy_plsql;
  delete scpy_java;
  delete scpy_delphi;
  delete scpy_cpp;
  delete recall;
  delete select_all;
  delete clear;
  delete append;
  delete paste;
  delete copy;
  delete cut;
  delete beautifier_optns;
  delete beautifier;
  delete redo;
  delete undo;
}

void edit_actions::translateGUI(bool init)
{
  undo->setText(QCoreApplication::translate("Selector->Actions", "&Undo", "Action title"));
  #ifndef QT_NO_TOOLTIP
  undo->setToolTip(QCoreApplication::translate("Selector->Actions", "Undo last edit operation", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  undo->setStatusTip(QCoreApplication::translate("Selector->Actions", "Allow you to undo last edit operations", "Status Tip item"));
  undo->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Allow you to undo last edit operations", "Whats This item"));

  redo->setText(QCoreApplication::translate("Selector->Actions", "&Redo", "Action title"));
  #ifndef QT_NO_TOOLTIP
  redo->setToolTip(QCoreApplication::translate("Selector->Actions", "Redo last undo", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  redo->setStatusTip(QCoreApplication::translate("Selector->Actions", "Allow you to restore last edit operations (if it was undone)", "Status Tip item"));
  redo->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Allow you to restore last edit operations (if it was undone)", "Whats This item"));

  beautifier->setText(QCoreApplication::translate("Selector->Actions", "&Beautifier", "Action title"));
  #ifndef QT_NO_TOOLTIP
  beautifier->setToolTip(QCoreApplication::translate("Selector->Actions", "Code automatic beautify", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  beautifier->setStatusTip(QCoreApplication::translate("Selector->Actions", "Code automatic beautify", "Status Tip item"));
  beautifier->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Code automatic beautify", "Whats This item"));

  beautifier_optns->setText(QCoreApplication::translate("Selector->Actions", "Beautifier Options", "Action title"));
  #ifndef QT_NO_TOOLTIP
  beautifier_optns->setToolTip(QCoreApplication::translate("Selector->Actions", "Change beautifier options", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  beautifier_optns->setStatusTip(QCoreApplication::translate("Selector->Actions", "Change beautifier options", "Status Tip item"));
  beautifier_optns->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Change beautifier options", "Whats This item"));

  cut->setText(QCoreApplication::translate("Selector->Actions", "Cut", "Action title"));
  #ifndef QT_NO_TOOLTIP
  cut->setToolTip(QCoreApplication::translate("Selector->Actions", "Cut selected text", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  cut->setStatusTip(QCoreApplication::translate("Selector->Actions", "Cut selected text and put it into clipboard", "Status Tip item"));
  cut->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Cut selected text and put it into clipboard", "Whats This item"));

  copy->setText(QCoreApplication::translate("Selector->Actions", "&Copy", "Action title"));
  #ifndef QT_NO_TOOLTIP
  copy->setToolTip(QCoreApplication::translate("Selector->Actions", "Copy selected text", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  copy->setStatusTip(QCoreApplication::translate("Selector->Actions", "Copy selected text and put it into clipboard", "Status Tip item"));
  copy->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Copy selected text and put it into clipboard", "Whats This item"));

  paste->setText(QCoreApplication::translate("Selector->Actions", "&Paste", "Action title"));
  #ifndef QT_NO_TOOLTIP
  paste->setToolTip(QCoreApplication::translate("Selector->Actions", "Paste text from clipboard", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  paste->setStatusTip(QCoreApplication::translate("Selector->Actions", "Paste text from clipboard", "Status Tip item"));
  paste->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Paste text from clipboard", "Whats This item"));

  append->setText(QCoreApplication::translate("Selector->Actions", "&Append", "Action title"));
  #ifndef QT_NO_TOOLTIP
  append->setToolTip(QCoreApplication::translate("Selector->Actions", "Append", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  append->setStatusTip(QCoreApplication::translate("Selector->Actions", "Append", "Status Tip item"));
  append->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Append", "Whats This item"));

  clear->setText(QCoreApplication::translate("Selector->Actions", "C&lear", "Action title"));
  #ifndef QT_NO_TOOLTIP
  clear->setToolTip(QCoreApplication::translate("Selector->Actions", "Clear current form", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  clear->setStatusTip(QCoreApplication::translate("Selector->Actions", "Clear current form", "Status Tip item"));
  clear->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Clear current form", "Whats This item"));

  select_all->setText(QCoreApplication::translate("Selector->Actions", "Select All", "Action title"));
  #ifndef QT_NO_TOOLTIP
  select_all->setToolTip(QCoreApplication::translate("Selector->Actions", "Select all text in current form", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  select_all->setStatusTip(QCoreApplication::translate("Selector->Actions", "Select all text in current form", "Status Tip item"));
  select_all->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Select all text in current form", "Whats This item"));

  recall->setText(QCoreApplication::translate("Selector->Actions", "R&ecall Statement", "Action title"));
  #ifndef QT_NO_TOOLTIP
  recall->setToolTip(QCoreApplication::translate("Selector->Actions", "Recall statement", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  recall->setStatusTip(QCoreApplication::translate("Selector->Actions", "Recall statement", "Status Tip item"));
  recall->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Recall statement", "Whats This item"));

  scpy_cpp->setText(QCoreApplication::translate("Selector->Actions", "C++", "Action title"));
  #ifndef QT_NO_TOOLTIP
  scpy_cpp->setToolTip(QCoreApplication::translate("Selector->Actions", "Special Copy->C++", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  scpy_cpp->setStatusTip(QCoreApplication::translate("Selector->Actions", "Special Copy->C++", "Status Tip item"));
  scpy_cpp->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Special Copy->C++", "Whats This item"));

  scpy_delphi->setText(QCoreApplication::translate("Selector->Actions", "Delphi", "Action title"));
  #ifndef QT_NO_TOOLTIP
  scpy_delphi->setToolTip(QCoreApplication::translate("Selector->Actions", "Special Copy->Delphi", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  scpy_delphi->setStatusTip(QCoreApplication::translate("Selector->Actions", "Special Copy->Delphi", "Status Tip item"));
  scpy_delphi->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Special Copy->Delphi", "Whats This item"));

  scpy_java->setText(QCoreApplication::translate("Selector->Actions", "Java", "Action title"));
  #ifndef QT_NO_TOOLTIP
  scpy_java->setToolTip(QCoreApplication::translate("Selector->Actions", "Special Copy->Java", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  scpy_java->setStatusTip(QCoreApplication::translate("Selector->Actions", "Special Copy->Java", "Status Tip item"));
  scpy_java->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Special Copy->Java", "Whats This item"));

  scpy_plsql->setText(QCoreApplication::translate("Selector->Actions", "PL/SQL", "Action title"));
  #ifndef QT_NO_TOOLTIP
  scpy_plsql->setToolTip(QCoreApplication::translate("Selector->Actions", "Special Copy->PL/SQL", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  scpy_plsql->setStatusTip(QCoreApplication::translate("Selector->Actions", "Special Copy->PL/SQL", "Status Tip item"));
  scpy_plsql->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Special Copy->PL/SQL", "Whats This item"));

  scpy_basic->setText(QCoreApplication::translate("Selector->Actions", "Visual Basic", "Action title"));
  #ifndef QT_NO_TOOLTIP
  scpy_basic->setToolTip(QCoreApplication::translate("Selector->Actions", "Special Copy->Visual Basic", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  scpy_basic->setStatusTip(QCoreApplication::translate("Selector->Actions", "Special Copy->Visual Basic", "Status Tip item"));
  scpy_basic->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Special Copy->Visual Basic", "Whats This item"));

  slctn_indent->setText(QCoreApplication::translate("Selector->Actions", "&Indent", "Action title"));
  #ifndef QT_NO_TOOLTIP
  slctn_indent->setToolTip(QCoreApplication::translate("Selector->Actions", "Increase indent", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  slctn_indent->setStatusTip(QCoreApplication::translate("Selector->Actions", "Increase indent of selected text", "Status Tip item"));
  slctn_indent->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Increase indent of selected text", "Whats This item"));

  slctn_unindent->setText(QCoreApplication::translate("Selector->Actions", "&Unindent", "Action title"));
  #ifndef QT_NO_TOOLTIP
  slctn_unindent->setToolTip(QCoreApplication::translate("Selector->Actions", "Decrease indent", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  slctn_unindent->setStatusTip(QCoreApplication::translate("Selector->Actions", "Decrease indent of selected text", "Status Tip item"));
  slctn_unindent->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Decrease indent of selected text", "Whats This item"));

  slctn_uppercase->setText(QCoreApplication::translate("Selector->Actions", "Upper&case", "Action title"));
  #ifndef QT_NO_TOOLTIP
  slctn_uppercase->setToolTip(QCoreApplication::translate("Selector->Actions", "To uppercase", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  slctn_uppercase->setStatusTip(QCoreApplication::translate("Selector->Actions", "Convert selected text to uppercase", "Status Tip item"));
  slctn_uppercase->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Convert selected text to uppercase", "Whats This item"));

  slctn_lowercase->setText(QCoreApplication::translate("Selector->Actions", "&Lowercase", "Action title"));
  #ifndef QT_NO_TOOLTIP
  slctn_lowercase->setToolTip(QCoreApplication::translate("Selector->Actions", "To lowercase", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  slctn_lowercase->setStatusTip(QCoreApplication::translate("Selector->Actions", "Convert selected text to lowercase", "Status Tip item"));
  slctn_lowercase->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Convert selected text to lowercase", "Whats This item"));

  slctn_comment->setText(QCoreApplication::translate("Selector->Actions", "C&omment", "Action title"));
  #ifndef QT_NO_TOOLTIP
  slctn_comment->setToolTip(QCoreApplication::translate("Selector->Actions", "To comment", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  slctn_comment->setStatusTip(QCoreApplication::translate("Selector->Actions", "Convert selected text to comment", "Status Tip item"));
  slctn_comment->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Convert text to comment", "Whats This item"));

  slctn_uncomment->setText(QCoreApplication::translate("Selector->Actions", "U&ncomment", "Action title"));
  #ifndef QT_NO_TOOLTIP
  slctn_uncomment->setToolTip(QCoreApplication::translate("Selector->Actions", "To uncomment", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  slctn_uncomment->setStatusTip(QCoreApplication::translate("Selector->Actions", "Convert selected text to uncomment", "Status Tip item"));
  slctn_uncomment->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Convert text to uncomment", "Whats This item"));

  slctn_aplsyncase->setText(QCoreApplication::translate("Selector->Actions", "&Apply Syntax Case", "Action title"));
  #ifndef QT_NO_TOOLTIP
  slctn_aplsyncase->setToolTip(QCoreApplication::translate("Selector->Actions", "Apply syntax case", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  slctn_aplsyncase->setStatusTip(QCoreApplication::translate("Selector->Actions", "Apply syntax case", "Status Tip item"));
  slctn_aplsyncase->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Apply syntax case", "Whats This item"));

  slctn_sort->setText(QCoreApplication::translate("Selector->Actions", "&Sort", "Action title"));
  #ifndef QT_NO_TOOLTIP
  slctn_sort->setToolTip(QCoreApplication::translate("Selector->Actions", "Sort selection", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  slctn_sort->setStatusTip(QCoreApplication::translate("Selector->Actions", "Sort selection", "Status Tip item"));
  slctn_sort->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Sort selection", "Whats This item"));

  slctn_mark->setText(QCoreApplication::translate("Selector->Actions", "Color &Mark", "Action title"));
  #ifndef QT_NO_TOOLTIP
  slctn_mark->setToolTip(QCoreApplication::translate("Selector->Actions", "Add color mark", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  slctn_mark->setStatusTip(QCoreApplication::translate("Selector->Actions", "Add color mark", "Status Tip item"));
  slctn_mark->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Add color mark", "Whats This item"));

  todo_list->setText(QCoreApplication::translate("Selector->Actions", "&Show List...", "Action title"));
  #ifndef QT_NO_TOOLTIP
  todo_list->setToolTip(QCoreApplication::translate("Selector->Actions", "Show To-Do list", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  todo_list->setStatusTip(QCoreApplication::translate("Selector->Actions", "Show To-Do list", "Status Tip item"));
  todo_list->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Show To-Do list", "Whats This item"));

  todo_add->setText(QCoreApplication::translate("Selector->Actions", "&Add Item...", "Action title"));
  #ifndef QT_NO_TOOLTIP
  todo_add->setToolTip(QCoreApplication::translate("Selector->Actions", "Add new To_Do item", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  todo_add->setStatusTip(QCoreApplication::translate("Selector->Actions", "Add new To_Do item", "Status Tip item"));
  todo_add->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Add new To_Do item", "Whats This item"));

  todo_edit->setText(QCoreApplication::translate("Selector->Actions", "&Edit Item...", "Action title"));
  #ifndef QT_NO_TOOLTIP
  todo_edit->setToolTip(QCoreApplication::translate("Selector->Actions", "Edit To-Do item", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  todo_edit->setStatusTip(QCoreApplication::translate("Selector->Actions", "Edit To-Do item", "Status Tip item"));
  todo_edit->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Edit To-Do item", "Whats This item"));

  todo_close->setText(QCoreApplication::translate("Selector->Actions", "&Close Item", "Action title"));
  #ifndef QT_NO_TOOLTIP
  todo_close->setToolTip(QCoreApplication::translate("Selector->Actions", "Close To-Do item", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  todo_close->setStatusTip(QCoreApplication::translate("Selector->Actions", "Close To-Do item", "Status Tip item"));
  todo_close->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Close To-Do item", "Whats This item"));

  todo_del->setText(QCoreApplication::translate("Selector->Actions", "&Delete Item", "Action title"));
  #ifndef QT_NO_TOOLTIP
  todo_del->setToolTip(QCoreApplication::translate("Selector->Actions", "Delete To-Do item", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  todo_del->setStatusTip(QCoreApplication::translate("Selector->Actions", "Delete To-Do item", "Status Tip item"));
  todo_del->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Delete To-Do item", "Whats This item"));

  find->setText(QCoreApplication::translate("Selector->Actions", "&Find", "Action title"));
  #ifndef QT_NO_TOOLTIP
  find->setToolTip(QCoreApplication::translate("Selector->Actions", "Find", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  find->setStatusTip(QCoreApplication::translate("Selector->Actions", "Find", "Status Tip item"));
  find->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Find", "Whats This item"));

  repeat_find->setText(QCoreApplication::translate("Selector->Actions", "Repeat &Last Find", "Action title"));
  #ifndef QT_NO_TOOLTIP
  repeat_find->setToolTip(QCoreApplication::translate("Selector->Actions", "Repeat last find", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  repeat_find->setStatusTip(QCoreApplication::translate("Selector->Actions", "Repeat last find", "Status Tip item"));
  repeat_find->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Repeat last find", "Whats This item"));

  replace->setText(QCoreApplication::translate("Selector->Actions", "Repl&ace", "Action title"));
  #ifndef QT_NO_TOOLTIP
  replace->setToolTip(QCoreApplication::translate("Selector->Actions", "Find and replace", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  replace->setStatusTip(QCoreApplication::translate("Selector->Actions", "Find and replace pattern", "Status Tip item"));
  replace->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Find and replace pattern", "Whats This item"));

  find_matches->setText(QCoreApplication::translate("Selector->Actions", "Find &Matches", "Action title"));
  #ifndef QT_NO_TOOLTIP
  find_matches->setToolTip(QCoreApplication::translate("Selector->Actions", "Find matches", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  find_matches->setStatusTip(QCoreApplication::translate("Selector->Actions", "Find matches", "Status Tip item"));
  find_matches->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Find matches", "Whats This item"));

  show_spec->setText(QCoreApplication::translate("Selector->Actions", "Show Special Characters", "Action title"));
  #ifndef QT_NO_TOOLTIP
  show_spec->setToolTip(QCoreApplication::translate("Selector->Actions", "Show cpecial characters", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  show_spec->setStatusTip(QCoreApplication::translate("Selector->Actions", "Show cpecial characters", "Status Tip item"));
  show_spec->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Show cpecial characters", "Whats This item"));

  code_folding->setText(QCoreApplication::translate("Selector->Actions", "Code Folding", "Action title"));
  #ifndef QT_NO_TOOLTIP
  code_folding->setToolTip(QCoreApplication::translate("Selector->Actions", "Enable/Disable code folding", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  code_folding->setStatusTip(QCoreApplication::translate("Selector->Actions", "Enable/Disable code folding", "Status Tip item"));
  code_folding->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Enable/Disable code folding", "Whats This item"));

  bookmark_set->setText(QCoreApplication::translate("Selector->Actions", "Set Book&makr", "Action title"));
  #ifndef QT_NO_TOOLTIP
  bookmark_set->setToolTip(QCoreApplication::translate("Selector->Actions", "Set bookmark", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  bookmark_set->setStatusTip(QCoreApplication::translate("Selector->Actions", "Set bookmark", "Status Tip item"));
  bookmark_set->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Set bookmark", "Whats This item"));

  bookmark_goto_next->setText(QCoreApplication::translate("Selector->Actions", "&Next", "Action title"));
  #ifndef QT_NO_TOOLTIP
  bookmark_goto_next->setToolTip(QCoreApplication::translate("Selector->Actions", "Go to next bookmark", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  bookmark_goto_next->setStatusTip(QCoreApplication::translate("Selector->Actions", "Go to next bookmark", "Status Tip item"));
  bookmark_goto_next->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Go to next bookmark", "Whats This item"));

  bookmark_goto_prev->setText(QCoreApplication::translate("Selector->Actions", "&Previous", "Action title"));
  #ifndef QT_NO_TOOLTIP
  bookmark_goto_prev->setToolTip(QCoreApplication::translate("Selector->Actions", "Go to previous bookmark", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  bookmark_goto_prev->setStatusTip(QCoreApplication::translate("Selector->Actions", "Go to previous bookmark", "Status Tip item"));
  bookmark_goto_prev->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Go to previous bookmark", "Whats This item"));

  bookmark_list->setText(QCoreApplication::translate("Selector->Actions", "Bookmakr List", "Action title"));
  #ifndef QT_NO_TOOLTIP
  bookmark_list->setToolTip(QCoreApplication::translate("Selector->Actions", "Open bookmark list", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  bookmark_list->setStatusTip(QCoreApplication::translate("Selector->Actions", "Open bookmark list", "Status Tip item"));
  bookmark_list->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Open bookmark list", "Whats This item"));

  go_to->setText(QCoreApplication::translate("Selector->Actions", "&Go to Line", "Action title"));
  #ifndef QT_NO_TOOLTIP
  go_to->setToolTip(QCoreApplication::translate("Selector->Actions", "Jump to line", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  go_to->setStatusTip(QCoreApplication::translate("Selector->Actions", "Jump to line", "Status Tip item"));
  go_to->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Jump to line", "Whats This item"));

  next_tab->setText(QCoreApplication::translate("Selector->Actions", "&Next Tab Page", "Action title"));
  #ifndef QT_NO_TOOLTIP
  next_tab->setToolTip(QCoreApplication::translate("Selector->Actions", "Switch to next tab page", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  next_tab->setStatusTip(QCoreApplication::translate("Selector->Actions", "Switch to next tab page", "Status Tip item"));
  next_tab->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Switch to next tab page", "Whats This item"));

  prev_tab->setText(QCoreApplication::translate("Selector->Actions", "&Previous Tab Page", "Action title"));
  #ifndef QT_NO_TOOLTIP
  prev_tab->setToolTip(QCoreApplication::translate("Selector->Actions", "Switch to previous tab page", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  prev_tab->setStatusTip(QCoreApplication::translate("Selector->Actions", "Switch to previous tab page", "Status Tip item"));
  prev_tab->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Switch to previous tab page", "Whats This item"));
};

session_actions::session_actions()
{
  // Session->Log on
  lon = new QAction;
  lon->setObjectName(QString::fromUtf8("action_session_logon"));
  lon->setIcon(QPixmap(":/icons/login.png"));

  // Session->Log off
  loff = new QAction;
  loff->setObjectName(QString::fromUtf8("action_session_logoff"));
  loff->setEnabled(false);

  // Session->Execute
  exe = new QAction;
  exe->setObjectName(QString::fromUtf8("action_session_execute"));
  #ifndef QT_NO_SHORTCUT
  exe->setShortcut(QKeySequence(Qt::Key_F8));
  #endif // QT_NO_SHORTCUT
  exe->setIcon(QPixmap(":/icons/execute.png"));
  exe->setEnabled(false);

  // Session->Break
  brk = new QAction;
  brk->setObjectName(QString::fromUtf8("action_session_break"));
  #ifndef QT_NO_SHORTCUT
  brk->setShortcut(QKeySequence(Qt::SHIFT + Qt::Key_Escape));
  #endif // QT_NO_SHORTCUT
  brk->setIcon(QPixmap(":/icons/abort.png"));
  brk->setEnabled(false);

  // Session->Kill
  kll = new QAction;
  kll->setObjectName(QString::fromUtf8("action_session_kill"));
  kll->setEnabled(false);

  // Session->Commit
  cmmt = new QAction;
  cmmt->setObjectName(QString::fromUtf8("action_session_commit"));
  #ifndef QT_NO_SHORTCUT
  cmmt->setShortcut(QKeySequence(Qt::Key_F10));
  #endif // QT_NO_SHORTCUT
  cmmt->setIcon(QPixmap(":/icons/commit.png"));
  cmmt->setEnabled(false);

  // Session->Rollback
  rllbck = new QAction;
  rllbck->setObjectName(QString::fromUtf8("action_session_rollback"));
  #ifndef QT_NO_SHORTCUT
  rllbck->setShortcut(QKeySequence(Qt::SHIFT + Qt::Key_F10));
  #endif // QT_NO_SHORTCUT
  rllbck->setIcon(QPixmap(":/icons/rollback.png"));
  rllbck->setEnabled(false);

  // Session->SQL Trace
  trce = new QAction;
  trce->setObjectName(QString::fromUtf8("action_session_trace"));
  trce->setEnabled(false);

  translateGUI(true);
}

session_actions::~session_actions()
{
  delete trce;
  delete rllbck;
  delete cmmt;
  delete kll;
  delete brk;
  delete exe;
  delete loff;
  delete lon;
}

void session_actions::translateGUI(bool init)
{
  lon->setText(QCoreApplication::translate("Selector->Actions", "&Log on...", "Action title"));
  #ifndef QT_NO_TOOLTIP
  lon->setToolTip(QCoreApplication::translate("Selector->Actions", "Log on", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  lon->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create a new connection to the remote server", "Status Tip item"));
  lon->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create a new connection to the remote server", "Whats This item"));

  loff->setText(QCoreApplication::translate("Selector->Actions", "Log &off", "Action title"));
  #ifndef QT_NO_TOOLTIP
  loff->setToolTip(QCoreApplication::translate("Selector->Actions", "Log off", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  loff->setStatusTip(QCoreApplication::translate("Selector->Actions", "Complete work and break connection with database", "Status Tip item"));
  loff->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Complete work and break connection with database", "Whats This item"));

  exe->setText(QCoreApplication::translate("Selector->Actions", "&Execute", "Action title"));
  #ifndef QT_NO_TOOLTIP
  exe->setToolTip(QCoreApplication::translate("Selector->Actions", "Execute", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  exe->setStatusTip(QCoreApplication::translate("Selector->Actions", "Execute program or script", "Status Tip item"));
  exe->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Execute program or script", "Whats This item"));

  brk->setText(QCoreApplication::translate("Selector->Actions", "&Break", "Action title"));
  #ifndef QT_NO_TOOLTIP
  brk->setToolTip(QCoreApplication::translate("Selector->Actions", "Break", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  brk->setStatusTip(QCoreApplication::translate("Selector->Actions", "Break program or script execution", "Status Tip item"));
  brk->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Break program or script execution", "Whats This item"));

  kll->setText(QCoreApplication::translate("Selector->Actions", "&Kill", "Action title"));
  #ifndef QT_NO_TOOLTIP
  kll->setToolTip(QCoreApplication::translate("Selector->Actions", "Kill session", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  kll->setStatusTip(QCoreApplication::translate("Selector->Actions", "Abort script or program execution and break session", "Status Tip item"));
  kll->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Abort script or program execution and break session", "Whats This item"));

  cmmt->setText(QCoreApplication::translate("Selector->Actions", "&Commit", "Action title"));
  #ifndef QT_NO_TOOLTIP
  cmmt->setToolTip(QCoreApplication::translate("Selector->Actions", "Commit", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  cmmt->setStatusTip(QCoreApplication::translate("Selector->Actions", "Commit current transaction", "Status Tip item"));
  cmmt->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Commit current transaction", "Whats This item"));

  rllbck->setText(QCoreApplication::translate("Selector->Actions", "&Rollback", "Action title"));
  #ifndef QT_NO_TOOLTIP
  rllbck->setToolTip(QCoreApplication::translate("Selector->Actions", "Rollback", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  rllbck->setStatusTip(QCoreApplication::translate("Selector->Actions", "Rollback current transaction", "Status Tip item"));
  rllbck->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Rollback current transaction", "Whats This item"));

  trce->setText(QCoreApplication::translate("Selector->Actions", "SQL &Trace", "Action title"));
  #ifndef QT_NO_TOOLTIP
  trce->setToolTip(QCoreApplication::translate("Selector->Actions", "Run SQL trace", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  trce->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run SQL trace", "Status Tip item"));
  trce->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run SQL trace", "Whats This item"));
};

debug_actions::debug_actions()
{
  // Debug->Toggle Breakpoint
  breakpoint = new QAction;
  breakpoint->setObjectName(QString::fromUtf8("action_debug_breakpoint"));
  #ifndef QT_NO_SHORTCUT
  breakpoint->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_B));
  #endif // QT_NO_SHORTCUT
  breakpoint->setEnabled(false);

  // Debug->Modify Breakpoints...
  mod_brkpnts = new QAction;
  mod_brkpnts->setObjectName(QString::fromUtf8("action_debug_mod_brkpnts"));
  mod_brkpnts->setEnabled(false);

  // Debug->Start
  start = new QAction;
  start->setObjectName(QString::fromUtf8("action_debug_start"));
  #ifndef QT_NO_SHORTCUT
  start->setShortcut(QKeySequence(Qt::Key_F9));
  #endif // QT_NO_SHORTCUT
  start->setEnabled(false);

  // Debug->Run
  run = new QAction;
  run->setObjectName(QString::fromUtf8("action_debug_run"));
  #ifndef QT_NO_SHORTCUT
  run->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_R));
  #endif // QT_NO_SHORTCUT
  run->setEnabled(false);

  // Debug->Step Into
  step_into = new QAction;
  step_into->setObjectName(QString::fromUtf8("action_debug_step_into"));
  #ifndef QT_NO_SHORTCUT
  step_into->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_N));
  #endif // QT_NO_SHORTCUT
  step_into->setEnabled(false);

  // Debug->Step Over
  step_over = new QAction;
  step_over->setObjectName(QString::fromUtf8("action_debug_step_over"));
  #ifndef QT_NO_SHORTCUT
  step_over->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_O));
  #endif // QT_NO_SHORTCUT
  step_over->setEnabled(false);

  // Debug->Step Out
  step_out = new QAction;
  step_out->setObjectName(QString::fromUtf8("action_debug_step_out"));
  #ifndef QT_NO_SHORTCUT
  step_out->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_T));
  #endif // QT_NO_SHORTCUT
  step_out->setEnabled(false);

  // Debug->Run to Exception
  cont = new QAction;
  cont->setObjectName(QString::fromUtf8("action_debug_continue"));
  cont->setEnabled(false);

  // Debug->Set Variable...
  set_var = new QAction;
  set_var->setObjectName(QString::fromUtf8("action_debug_var"));
  set_var->setEnabled(false);

  translateGUI(true);
}

debug_actions::~debug_actions()
{
  delete set_var;
  delete cont;
  delete step_out;
  delete step_over;
  delete step_into;
  delete run;
  delete start;
  delete mod_brkpnts;
  delete breakpoint;
}

void debug_actions::translateGUI(bool init)
{
  breakpoint->setText(QCoreApplication::translate("Selector->Actions", "Toggle &Breakpoint", "Action title"));
  #ifndef QT_NO_TOOLTIP
  breakpoint->setToolTip(QCoreApplication::translate("Selector->Actions", "Toggle breakpoint", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  breakpoint->setStatusTip(QCoreApplication::translate("Selector->Actions", "Toggle breakpoint", "Status Tip item"));
  breakpoint->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Toggle breakpoint", "Whats This item"));

  mod_brkpnts->setText(QCoreApplication::translate("Selector->Actions", "&Modify Breakpoints...", "Action title"));
  #ifndef QT_NO_TOOLTIP
  mod_brkpnts->setToolTip(QCoreApplication::translate("Selector->Actions", "Modify breakpoints", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  mod_brkpnts->setStatusTip(QCoreApplication::translate("Selector->Actions", "Modify breakpoints", "Status Tip item"));
  mod_brkpnts->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Modify breakpoints", "Whats This item"));

  start->setText(QCoreApplication::translate("Selector->Actions", "&Start", "Action title"));
  #ifndef QT_NO_TOOLTIP
  start->setToolTip(QCoreApplication::translate("Selector->Actions", "Start debugger", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  start->setStatusTip(QCoreApplication::translate("Selector->Actions", "Start debugger", "Status Tip item"));
  start->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Start debugger", "Whats This item"));

  run->setText(QCoreApplication::translate("Selector->Actions", "&Run", "Action title"));
  #ifndef QT_NO_TOOLTIP
  run->setToolTip(QCoreApplication::translate("Selector->Actions", "Run program", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  run->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run program", "Status Tip item"));
  run->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run program", "Whats This item"));

  step_into->setText(QCoreApplication::translate("Selector->Actions", "Step &Into", "Action title"));
  #ifndef QT_NO_TOOLTIP
  step_into->setToolTip(QCoreApplication::translate("Selector->Actions", "Step into", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  step_into->setStatusTip(QCoreApplication::translate("Selector->Actions", "Step into", "Status Tip item"));
  step_into->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Step into", "Whats This item"));

  step_over->setText(QCoreApplication::translate("Selector->Actions", "Step &Over", "Action title"));
  #ifndef QT_NO_TOOLTIP
  step_over->setToolTip(QCoreApplication::translate("Selector->Actions", "Step over", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  step_over->setStatusTip(QCoreApplication::translate("Selector->Actions", "Step over", "Status Tip item"));
  step_over->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Step over", "Whats This item"));

  step_out->setText(QCoreApplication::translate("Selector->Actions", "Step Ou&t", "Action title"));
  #ifndef QT_NO_TOOLTIP
  step_out->setToolTip(QCoreApplication::translate("Selector->Actions", "Step out", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  step_out->setStatusTip(QCoreApplication::translate("Selector->Actions", "Step out", "Status Tip item"));
  step_out->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Step out", "Whats This item"));

  cont->setText(QCoreApplication::translate("Selector->Actions", "Run to &Exception", "Action title"));
  #ifndef QT_NO_TOOLTIP
  cont->setToolTip(QCoreApplication::translate("Selector->Actions", "Continue", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  cont->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run to exception", "Status Tip item"));
  cont->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run to exception", "Whats This item"));

  set_var->setText(QCoreApplication::translate("Selector->Actions", "Set &Variable...", "Action title"));
  #ifndef QT_NO_TOOLTIP
  set_var->setToolTip(QCoreApplication::translate("Selector->Actions", "Set variable", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  set_var->setStatusTip(QCoreApplication::translate("Selector->Actions", "Set variable", "Status Tip item"));
  set_var->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Set variable", "Whats This item"));
};

tools_actions::tools_actions()
{
  // Tools->Preferences...
  pref = new QAction;
  pref->setObjectName(QString::fromUtf8("action_tools_pref"));

  // Tools->Configure Plug-Ins...
  cfgplgns = new QAction;
  cfgplgns->setObjectName(QString::fromUtf8("action_tools_cfgplgns"));
  cfgplgns->setEnabled(false);

  // Tools->Configure Tools...
  cfgtools = new QAction;
  cfgtools->setObjectName(QString::fromUtf8("action_tools_cfgtools"));
  cfgtools->setEnabled(false);

  // Tools->Configure Documents...
  cfgdocs = new QAction;
  cfgdocs->setObjectName(QString::fromUtf8("action_tools_cfgdocs"));
  cfgdocs->setEnabled(false);

  // Tools->Configure Reports...
  cfgreps = new QAction;
  cfgreps->setObjectName(QString::fromUtf8("action_tools_cfgreps"));
  cfgreps->setEnabled(false);

  // Tools->Macro->Record
  macro_rec = new QAction;
  macro_rec->setObjectName(QString::fromUtf8("action_tools_macro_rec"));
  #ifndef QT_NO_SHORTCUT
  macro_rec->setShortcut(QKeySequence(Qt::Key_F11));
  #endif // QT_NO_SHORTCUT
  macro_rec->setEnabled(false);

  // Tools->Macro->Playback
  macro_play = new QAction;
  macro_play->setObjectName(QString::fromUtf8("action_tools_macro_play"));
  #ifndef QT_NO_SHORTCUT
  macro_play->setShortcut(QKeySequence(Qt::Key_F12));
  #endif // QT_NO_SHORTCUT
  macro_play->setEnabled(false);

  // Tools->Macro->Library...
  macro_lib = new QAction;
  macro_lib->setObjectName(QString::fromUtf8("action_tools_macro_lib"));
  macro_lib->setEnabled(false);

  // Tools->Browser Folders...
  brodir = new QAction;
  brodir->setObjectName(QString::fromUtf8("action_tools_brodir"));
  brodir->setEnabled(false);

  // Tools->Browser Filters...
  brofil = new QAction;
  brofil->setObjectName(QString::fromUtf8("action_tools_brofil"));
  brofil->setEnabled(false);

  // Tools->Template List
  tmpl = new QAction;
  tmpl->setObjectName(QString::fromUtf8("action_tools_tmpl"));
  tmpl->setCheckable(true);
  tmpl->setChecked(false);
  tmpl->setEnabled(false);

  // Tools->Toolbar
  tlbr = new QAction;
  tlbr->setObjectName(QString::fromUtf8("action_tools_tlbr"));
  tlbr->setCheckable(true);
  tlbr->setChecked(true);

  // Tools->Explain Plan
  expln = new QAction;
  expln->setObjectName(QString::fromUtf8("action_tools_expln"));
  #ifndef QT_NO_SHORTCUT
  expln->setShortcut(QKeySequence(Qt::Key_F5));
  #endif // QT_NO_SHORTCUT
  expln->setEnabled(false);

  // Tools->Code Assistant
  astnt = new QAction;
  astnt->setObjectName(QString::fromUtf8("action_tools_astnt"));
  #ifndef QT_NO_SHORTCUT
  astnt->setShortcut(QKeySequence(Qt::Key_F6));
  #endif // QT_NO_SHORTCUT
  astnt->setEnabled(false);

  // Tools->Code Contents
  cntnts = new QAction;
  cntnts->setObjectName(QString::fromUtf8("action_tools_cntnts"));
  cntnts->setEnabled(false);

  // Tools->Show Compiler Hints
  shnts = new QAction;
  shnts->setObjectName(QString::fromUtf8("action_tools_chnts"));
  shnts->setEnabled(false);

  // Tools->Query Builder...
  qbldr = new QAction;
  qbldr->setObjectName(QString::fromUtf8("action_tools_qbldr"));
  qbldr->setEnabled(false);

  // Tools->Find Database Objects...
  fdbo = new QAction;
  fdbo->setObjectName(QString::fromUtf8("action_tools_fdbo"));
  fdbo->setEnabled(false);

  // Tools->Compile Invalide Objects...
  cpinv = new QAction;
  cpinv->setObjectName(QString::fromUtf8("action_tools_cpinv"));
  cpinv->setEnabled(false);

  // Tools->Export User Objects...
  expobj = new QAction;
  expobj->setObjectName(QString::fromUtf8("action_tools_expobj"));
  expobj->setEnabled(false);

  // Tools->Compare User Objects...
  cmpobj = new QAction;
  cmpobj->setObjectName(QString::fromUtf8("action_tools_cmpobj"));
  cmpobj->setEnabled(false);

  // Tools->Event Monitor...
  emon = new QAction;
  emon->setObjectName(QString::fromUtf8("action_tools_emon"));
  emon->setEnabled(false);

  // Tools->Sessions...
  sessns = new QAction;
  sessns->setObjectName(QString::fromUtf8("action_tools_sessns"));
  sessns->setEnabled(false);

  // Tools->Test Manager...
  tstmngr = new QAction;
  tstmngr->setObjectName(QString::fromUtf8("action_tools_tstmngr"));
  tstmngr->setEnabled(false);

  // Tools->Export Tables...
  exptbls = new QAction;
  exptbls->setObjectName(QString::fromUtf8("action_tools_exptbls"));
  exptbls->setEnabled(false);

  // Tools->Import Tables...
  imptbls = new QAction;
  imptbls->setObjectName(QString::fromUtf8("action_tools_imptbls"));
  imptbls->setEnabled(false);

  // Tools->Compare Table Data...
  cmptbld = new QAction;
  cmptbld->setObjectName(QString::fromUtf8("action_tools_cmptbld"));
  cmptbld->setEnabled(false);

  // Tools->Text Importer...
  imptxt = new QAction;
  imptxt->setObjectName(QString::fromUtf8("action_tools_imptxt"));
  imptxt->setEnabled(false);

  // Tools->ODBC Importer...
  impODBC = new QAction;
  impODBC->setObjectName(QString::fromUtf8("action_tools_impODBC"));
  impODBC->setEnabled(false);

  // Tools->Data Generator...
  gendat = new QAction;
  gendat->setObjectName(QString::fromUtf8("action_tools_gendat"));
  gendat->setEnabled(false);

  translateGUI(true);
}

tools_actions::~tools_actions()
{
  delete gendat;
  delete impODBC;
  delete imptxt;
  delete cmptbld;
  delete imptbls;
  delete exptbls;
  delete tstmngr;
  delete sessns;
  delete emon;
  delete cmpobj;
  delete expobj;
  delete cpinv;
  delete fdbo;
  delete qbldr;
  delete shnts;
  delete cntnts;
  delete astnt;
  delete expln;
  delete tlbr;
  delete tmpl;
  delete brofil;
  delete brodir;
  delete macro_lib;
  delete macro_play;
  delete macro_rec;
  delete cfgreps;
  delete cfgdocs;
  delete cfgtools;
  delete cfgplgns;
  delete pref;
}

void tools_actions::translateGUI(bool init)
{
  pref->setText(QCoreApplication::translate("Selector->Actions", "&Preferences...", "Action title"));
  #ifndef QT_NO_TOOLTIP
  pref->setToolTip(QCoreApplication::translate("Selector->Actions", "Preferences", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  pref->setStatusTip(QCoreApplication::translate("Selector->Actions", "Preferences", "Status Tip item"));
  pref->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Preferences", "Whats This item"));

  cfgplgns->setText(QCoreApplication::translate("Selector->Actions", "Configure Plug-Ins...", "Action title"));
  #ifndef QT_NO_TOOLTIP
  cfgplgns->setToolTip(QCoreApplication::translate("Selector->Actions", "Configure plug-ins", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  cfgplgns->setStatusTip(QCoreApplication::translate("Selector->Actions", "Configure plug-ins", "Status Tip item"));
  cfgplgns->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Configure plug-ins", "Whats This item"));

  cfgtools->setText(QCoreApplication::translate("Selector->Actions", "Configure T&ools...", "Action title"));
  #ifndef QT_NO_TOOLTIP
  cfgtools->setToolTip(QCoreApplication::translate("Selector->Actions", "Configure tools", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  cfgtools->setStatusTip(QCoreApplication::translate("Selector->Actions", "Configure tools", "Status Tip item"));
  cfgtools->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Configure tools", "Whats This item"));

  cfgdocs->setText(QCoreApplication::translate("Selector->Actions", "Configure &Documents...", "Action title"));
  #ifndef QT_NO_TOOLTIP
  cfgdocs->setToolTip(QCoreApplication::translate("Selector->Actions", "Configure documents", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  cfgdocs->setStatusTip(QCoreApplication::translate("Selector->Actions", "Configure documents", "Status Tip item"));
  cfgdocs->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Configure documents", "Whats This item"));

  cfgreps->setText(QCoreApplication::translate("Selector->Actions", "Configure &Reports...", "Action title"));
  #ifndef QT_NO_TOOLTIP
  cfgreps->setToolTip(QCoreApplication::translate("Selector->Actions", "Configure reports", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  cfgreps->setStatusTip(QCoreApplication::translate("Selector->Actions", "Configure reports", "Status Tip item"));
  cfgreps->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Configure reports", "Whats This item"));

  macro_rec->setText(QCoreApplication::translate("Selector->Actions", "&Record", "Action title"));
  #ifndef QT_NO_TOOLTIP
  macro_rec->setToolTip(QCoreApplication::translate("Selector->Actions", "Record macro", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  macro_rec->setStatusTip(QCoreApplication::translate("Selector->Actions", "Record macro", "Status Tip item"));
  macro_rec->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Record macro", "Whats This item"));

  macro_play->setText(QCoreApplication::translate("Selector->Actions", "&Playback", "Action title"));
  #ifndef QT_NO_TOOLTIP
  macro_play->setToolTip(QCoreApplication::translate("Selector->Actions", "Playback macro", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  macro_play->setStatusTip(QCoreApplication::translate("Selector->Actions", "Playback macro", "Status Tip item"));
  macro_play->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Playback macro", "Whats This item"));

  macro_lib->setText(QCoreApplication::translate("Selector->Actions", "&Library...", "Action title"));
  #ifndef QT_NO_TOOLTIP
  macro_lib->setToolTip(QCoreApplication::translate("Selector->Actions", "Open macro library", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  macro_lib->setStatusTip(QCoreApplication::translate("Selector->Actions", "Open macro library", "Status Tip item"));
  macro_lib->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Open macro library", "Whats This item"));

  brodir->setText(QCoreApplication::translate("Selector->Actions", "Browser &Folders...", "Action title"));
  #ifndef QT_NO_TOOLTIP
  brodir->setToolTip(QCoreApplication::translate("Selector->Actions", "Open browser folders", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  brodir->setStatusTip(QCoreApplication::translate("Selector->Actions", "Open browser folders", "Status Tip item"));
  brodir->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Open browser folders", "Whats This item"));

  brofil->setText(QCoreApplication::translate("Selector->Actions", "Browser F&ilters...", "Action title"));
  #ifndef QT_NO_TOOLTIP
  brofil->setToolTip(QCoreApplication::translate("Selector->Actions", "Open browser filters", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  brofil->setStatusTip(QCoreApplication::translate("Selector->Actions", "Open browser filters", "Status Tip item"));
  brofil->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Open browser filters", "Whats This item"));

  tmpl->setText(QCoreApplication::translate("Selector->Actions", "T&emplate List", "Action title"));
  #ifndef QT_NO_TOOLTIP
  tmpl->setToolTip(QCoreApplication::translate("Selector->Actions", "Open template list", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  tmpl->setStatusTip(QCoreApplication::translate("Selector->Actions", "Open template list", "Status Tip item"));
  tmpl->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Open template list", "Whats This item"));

  tlbr->setText(QCoreApplication::translate("Selector->Actions", "Toolbar", "Action title"));
  #ifndef QT_NO_TOOLTIP
  tlbr->setToolTip(QCoreApplication::translate("Selector->Actions", "Show toolbars", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  tlbr->setStatusTip(QCoreApplication::translate("Selector->Actions", "Show toolbars", "Status Tip item"));
  tlbr->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Show toolbars", "Whats This item"));

  expln->setText(QCoreApplication::translate("Selector->Actions", "E&xplain Plan", "Action title"));
  #ifndef QT_NO_TOOLTIP
  expln->setToolTip(QCoreApplication::translate("Selector->Actions", "Run explain plan command", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  expln->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run explain plan command", "Status Tip item"));
  expln->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run explain plan command", "Whats This item"));

  astnt->setText(QCoreApplication::translate("Selector->Actions", "Code &Assistant", "Action title"));
  #ifndef QT_NO_TOOLTIP
  astnt->setToolTip(QCoreApplication::translate("Selector->Actions", "Run code assistant", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  astnt->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run code assistant", "Status Tip item"));
  astnt->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run code assistant", "Whats This item"));

  cntnts->setText(QCoreApplication::translate("Selector->Actions", "&Code Contents", "Action title"));
  #ifndef QT_NO_TOOLTIP
  cntnts->setToolTip(QCoreApplication::translate("Selector->Actions", "Show code contents", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  cntnts->setStatusTip(QCoreApplication::translate("Selector->Actions", "Show code contents", "Status Tip item"));
  cntnts->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Show code contents", "Whats This item"));

  shnts->setText(QCoreApplication::translate("Selector->Actions", "Show Compiler &Hints", "Action title"));
  #ifndef QT_NO_TOOLTIP
  shnts->setToolTip(QCoreApplication::translate("Selector->Actions", "Show compiler hints", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  shnts->setStatusTip(QCoreApplication::translate("Selector->Actions", "Show compiler hints", "Status Tip item"));
  shnts->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Show compiler hints", "Whats This item"));

  qbldr->setText(QCoreApplication::translate("Selector->Actions", "&Query Builder...", "Action title"));
  #ifndef QT_NO_TOOLTIP
  qbldr->setToolTip(QCoreApplication::translate("Selector->Actions", "Run query builder", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  qbldr->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run query builder", "Status Tip item"));
  qbldr->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run query builder", "Whats This item"));

  fdbo->setText(QCoreApplication::translate("Selector->Actions", "Find &Database Objects...", "Action title"));
  #ifndef QT_NO_TOOLTIP
  fdbo->setToolTip(QCoreApplication::translate("Selector->Actions", "Execute search under database objects", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  fdbo->setStatusTip(QCoreApplication::translate("Selector->Actions", "Execute search under database objects", "Status Tip item"));
  fdbo->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Execute search under database objects", "Whats This item"));

  cpinv->setText(QCoreApplication::translate("Selector->Actions", "Compile I&nvalid Objects...", "Action title"));
  #ifndef QT_NO_TOOLTIP
  cpinv->setToolTip(QCoreApplication::translate("Selector->Actions", "Compile invalide objects", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  cpinv->setStatusTip(QCoreApplication::translate("Selector->Actions", "Compile invalide objects", "Status Tip item"));
  cpinv->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Compile invalide objects", "Whats This item"));

  expobj->setText(QCoreApplication::translate("Selector->Actions", "Export &User Objects...", "Action title"));
  #ifndef QT_NO_TOOLTIP
  expobj->setToolTip(QCoreApplication::translate("Selector->Actions", "Export user objects", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  expobj->setStatusTip(QCoreApplication::translate("Selector->Actions", "Export user objects", "Status Tip item"));
  expobj->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Export user objects", "Whats This item"));

  cmpobj->setText(QCoreApplication::translate("Selector->Actions", "Compare User O&bjects...", "Action title"));
  #ifndef QT_NO_TOOLTIP
  cmpobj->setToolTip(QCoreApplication::translate("Selector->Actions", "Compare user objects", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  cmpobj->setStatusTip(QCoreApplication::translate("Selector->Actions", "Compare user objects", "Status Tip item"));
  cmpobj->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Compare user objects", "Whats This item"));

  emon->setText(QCoreApplication::translate("Selector->Actions", "E&vent Monitor...", "Action title"));
  #ifndef QT_NO_TOOLTIP
  emon->setToolTip(QCoreApplication::translate("Selector->Actions", "Run event monitor", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  emon->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run event monitor", "Status Tip item"));
  emon->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run event monitor", "Whats This item"));

  sessns->setText(QCoreApplication::translate("Selector->Actions", "&Sessions...", "Action title"));
  #ifndef QT_NO_TOOLTIP
  sessns->setToolTip(QCoreApplication::translate("Selector->Actions", "Show sessions", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  sessns->setStatusTip(QCoreApplication::translate("Selector->Actions", "Show sessions", "Status Tip item"));
  sessns->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Show sessions", "Whats This item"));

  tstmngr->setText(QCoreApplication::translate("Selector->Actions", "Test Manager...", "Action title"));
  #ifndef QT_NO_TOOLTIP
  tstmngr->setToolTip(QCoreApplication::translate("Selector->Actions", "Show test manager", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  tstmngr->setStatusTip(QCoreApplication::translate("Selector->Actions", "Show test manager", "Status Tip item"));
  tstmngr->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Show test manager", "Whats This item"));

  exptbls->setText(QCoreApplication::translate("Selector->Actions", "E&xport Tables...", "Action title"));
  #ifndef QT_NO_TOOLTIP
  exptbls->setToolTip(QCoreApplication::translate("Selector->Actions", "Run export tables tool", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  exptbls->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run export tables tool", "Status Tip item"));
  exptbls->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run export tables tool", "Whats This item"));

  imptbls->setText(QCoreApplication::translate("Selector->Actions", "Import Tables...", "Action title"));
  #ifndef QT_NO_TOOLTIP
  imptbls->setToolTip(QCoreApplication::translate("Selector->Actions", "Run import tables tool", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  imptbls->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run import tables tool", "Status Tip item"));
  imptbls->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run import tables tool", "Whats This item"));

  cmptbld->setText(QCoreApplication::translate("Selector->Actions", "Compare &Table Data...", "Action title"));
  #ifndef QT_NO_TOOLTIP
  cmptbld->setToolTip(QCoreApplication::translate("Selector->Actions", "Run compare tables data tool", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  cmptbld->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run compare tables data tool", "Status Tip item"));
  cmptbld->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run compare tables data tool", "Whats This item"));

  imptxt->setText(QCoreApplication::translate("Selector->Actions", "Text Importer...", "Action title"));
  #ifndef QT_NO_TOOLTIP
  imptxt->setToolTip(QCoreApplication::translate("Selector->Actions", "Run text importer", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  imptxt->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run text importer", "Status Tip item"));
  imptxt->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run text importer", "Whats This item"));

  impODBC->setText(QCoreApplication::translate("Selector->Actions", "ODBC Importer...", "Action title"));
  #ifndef QT_NO_TOOLTIP
  impODBC->setToolTip(QCoreApplication::translate("Selector->Actions", "Run ODBC importer", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  impODBC->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run ODBC importer", "Status Tip item"));
  impODBC->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run ODBC importer", "Whats This item"));

  gendat->setText(QCoreApplication::translate("Selector->Actions", "Data &Generator...", "Action title"));
  #ifndef QT_NO_TOOLTIP
  gendat->setToolTip(QCoreApplication::translate("Selector->Actions", "Run data generator", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  gendat->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run data generator", "Status Tip item"));
  gendat->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run data generator", "Whats This item"));
};

report_actions::report_actions()
{
  // Reports->DBA->Initialization Parameters
  dba_initpar = new QAction;
  dba_initpar->setObjectName(QString::fromUtf8("action_reps_dba_initpar"));
  dba_initpar->setEnabled(false);

  // Reports->DBA->NLS Database Parameters
  dba_nlspar = new QAction;
  dba_nlspar->setObjectName(QString::fromUtf8("action_reps_dba_nlspar"));
  dba_nlspar->setEnabled(false);

  // Reports->DBA->Role Privileges
  dba_rolprv = new QAction;
  dba_rolprv->setObjectName(QString::fromUtf8("action_reps_dba_rolprv"));
  dba_rolprv->setEnabled(false);

  // Reports->DBA->Roles
  dba_rol = new QAction;
  dba_rol->setObjectName(QString::fromUtf8("action_reps_dba_rol"));
  dba_rol->setEnabled(false);

  // Reports->DBA->Rollback Segments
  dba_rlbseg = new QAction;
  dba_rlbseg->setObjectName(QString::fromUtf8("action_reps_dba_rlbseg"));
  dba_rlbseg->setEnabled(false);

  // Reports->DBA->Server Components
  dba_srvcom = new QAction;
  dba_srvcom->setObjectName(QString::fromUtf8("action_reps_dba_srvcom"));
  dba_srvcom->setEnabled(false);

  // Reports->DBA->System Priveleges
  dba_sysprv = new QAction;
  dba_sysprv->setObjectName(QString::fromUtf8("action_reps_dba_sysprv"));
  dba_sysprv->setEnabled(false);

  // Reports->DBA->Tablespaces
  dba_tblspcs = new QAction;
  dba_tblspcs->setObjectName(QString::fromUtf8("action_reps_dba_tblspcs"));
  dba_tblspcs->setEnabled(false);

  // Reports->DBA->Total Free Space
  dba_tfs = new QAction;
  dba_tfs->setObjectName(QString::fromUtf8("action_reps_dba_tfs"));
  dba_tfs->setEnabled(false);

  // Reports->DBA->Users
  dba_usrs = new QAction;
  dba_usrs->setObjectName(QString::fromUtf8("action_reps_dba_usrs"));
  dba_usrs->setEnabled(false);

  // Reports->Objects->All Objects
  objects_all = new QAction;
  objects_all->setObjectName(QString::fromUtf8("action_reps_objects_all"));
  objects_all->setEnabled(false);

  // Reports->Objects->Indexes
  objects_idx = new QAction;
  objects_idx->setObjectName(QString::fromUtf8("action_reps_objects_idx"));
  objects_idx->setEnabled(false);

  // Reports->Objects->Sequences
  objects_seq = new QAction;
  objects_seq->setObjectName(QString::fromUtf8("action_reps_objects_seq"));
  objects_seq->setEnabled(false);

  // Reports->Objects->Synonyms
  objects_syn = new QAction;
  objects_syn->setObjectName(QString::fromUtf8("action_reps_objects_syn"));
  objects_syn->setEnabled(false);

  // Reports->Objects->Tables
  objects_tbs = new QAction;
  objects_tbs->setObjectName(QString::fromUtf8("action_reps_objects_tbs"));
  objects_tbs->setEnabled(false);

  // Reports->Objects->Triggers
  objects_trg = new QAction;
  objects_trg->setObjectName(QString::fromUtf8("action_reps_objects_trg"));
  objects_trg->setEnabled(false);

  // Reports->Objects->Types
  objects_tps = new QAction;
  objects_tps->setObjectName(QString::fromUtf8("action_reps_objects_tps"));
  objects_tps->setEnabled(false);

  // Reports->Objects->Views
  objects_views = new QAction;
  objects_views->setObjectName(QString::fromUtf8("action_reps_objects_views"));
  objects_views->setEnabled(false);

  // Reports->Objects->Compilation Errors
  plsql_cperrs = new QAction;
  plsql_cperrs->setObjectName(QString::fromUtf8("action_reps_plsql_cperrs"));
  plsql_cperrs->setEnabled(false);

  // Reports->Objects->Granted Roles
  user_grrol = new QAction;
  user_grrol->setObjectName(QString::fromUtf8("action_reps_user_grrol"));
  user_grrol->setEnabled(false);

  // Reports->Objects->Granted System Privileges
  user_grsysprv = new QAction;
  user_grsysprv->setObjectName(QString::fromUtf8("action_reps_user_grsysprv"));
  user_grsysprv->setEnabled(false);

  // Reports->Objects->NLS Session Parameters
  user_nlssespar = new QAction;
  user_nlssespar->setObjectName(QString::fromUtf8("action_reps_user_nlssespar"));
  user_nlssespar->setEnabled(false);

  // Reports->Objects->Object Privileges Made
  user_objprvmde = new QAction;
  user_objprvmde->setObjectName(QString::fromUtf8("action_reps_user_objprvmde"));
  user_objprvmde->setEnabled(false);

  // Reports->Objects->Object Privileges Received
  user_objprvrcvd = new QAction;
  user_objprvrcvd->setObjectName(QString::fromUtf8("action_reps_user_objprvrcvd"));
  user_objprvrcvd->setEnabled(false);

  translateGUI(true);
}

report_actions::~report_actions()
{
  delete user_objprvrcvd;
  delete user_objprvmde;
  delete user_nlssespar;
  delete user_grsysprv;
  delete user_grrol;
  delete plsql_cperrs;
  delete objects_views;
  delete objects_tps;
  delete objects_trg;
  delete objects_tbs;
  delete objects_syn;
  delete objects_seq;
  delete objects_idx;
  delete objects_all;
  delete dba_usrs;
  delete dba_tfs;
  delete dba_tblspcs;
  delete dba_sysprv;
  delete dba_srvcom;
  delete dba_rlbseg;
  delete dba_rol;
  delete dba_rolprv;
  delete dba_nlspar;
  delete dba_initpar;
}

void report_actions::translateGUI(bool init)
{
  dba_initpar->setText(QCoreApplication::translate("Selector->Actions", "Initialization Parameters", "Action title"));
  #ifndef QT_NO_TOOLTIP
  dba_initpar->setToolTip(QCoreApplication::translate("Selector->Actions", "Run report \"Database initialization parameters\"", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  dba_initpar->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run report \"Database initialization parameters\"", "Status Tip item"));
  dba_initpar->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run report \"Database initialization parameters\"", "Whats This item"));

  dba_nlspar->setText(QCoreApplication::translate("Selector->Actions", "NLS Database Parameters", "Action title"));
  #ifndef QT_NO_TOOLTIP
  dba_nlspar->setToolTip(QCoreApplication::translate("Selector->Actions", "Run report \"NLS database parameters\"", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  dba_nlspar->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run report \"NLS database parameters\"", "Status Tip item"));
  dba_nlspar->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run report \"NLS database parameters\"", "Whats This item"));

  dba_rolprv->setText(QCoreApplication::translate("Selector->Actions", "Role Privileges", "Action title"));
  #ifndef QT_NO_TOOLTIP
  dba_rolprv->setToolTip(QCoreApplication::translate("Selector->Actions", "Run report \"Role privileges\"", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  dba_rolprv->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run report \"Role privileges\"", "Status Tip item"));
  dba_rolprv->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run report \"Role privileges\"", "Whats This item"));

  dba_rol->setText(QCoreApplication::translate("Selector->Actions", "Roles", "Action title"));
  #ifndef QT_NO_TOOLTIP
  dba_rol->setToolTip(QCoreApplication::translate("Selector->Actions", "Run report \"Roles\"", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  dba_rol->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run report \"Roles\"", "Status Tip item"));
  dba_rol->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run report \"Roles\"", "Whats This item"));

  dba_rlbseg->setText(QCoreApplication::translate("Selector->Actions", "Rollback Segments", "Action title"));
  #ifndef QT_NO_TOOLTIP
  dba_rlbseg->setToolTip(QCoreApplication::translate("Selector->Actions", "Run report \"Rollback segments\"", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  dba_rlbseg->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run report \"Rollback segments\"", "Status Tip item"));
  dba_rlbseg->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run report \"Rollback segments\"", "Whats This item"));

  dba_srvcom->setText(QCoreApplication::translate("Selector->Actions", "Server Components", "Action title"));
  #ifndef QT_NO_TOOLTIP
  dba_srvcom->setToolTip(QCoreApplication::translate("Selector->Actions", "Run report \"Server components\"", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  dba_srvcom->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run report \"Server components\"", "Status Tip item"));
  dba_srvcom->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run report \"Server components\"", "Whats This item"));

  dba_sysprv->setText(QCoreApplication::translate("Selector->Actions", "System Priveleges", "Action title"));
  #ifndef QT_NO_TOOLTIP
  dba_sysprv->setToolTip(QCoreApplication::translate("Selector->Actions", "Run report \"System priveleges\"", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  dba_sysprv->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run report \"System priveleges\"", "Status Tip item"));
  dba_sysprv->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run report \"System priveleges\"", "Whats This item"));

  dba_tblspcs->setText(QCoreApplication::translate("Selector->Actions", "Tablespaces", "Action title"));
  #ifndef QT_NO_TOOLTIP
  dba_tblspcs->setToolTip(QCoreApplication::translate("Selector->Actions", "Run report \"Tablespaces\"", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  dba_tblspcs->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run report \"Tablespaces\"", "Status Tip item"));
  dba_tblspcs->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run report \"Tablespaces\"", "Whats This item"));

  dba_tfs->setText(QCoreApplication::translate("Selector->Actions", "Total Free Space", "Action title"));
  #ifndef QT_NO_TOOLTIP
  dba_tfs->setToolTip(QCoreApplication::translate("Selector->Actions", "Run report \"Total free space\"", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  dba_tfs->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run report \"Total free space\"", "Status Tip item"));
  dba_tfs->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run report \"Total free space\"", "Whats This item"));

  dba_usrs->setText(QCoreApplication::translate("Selector->Actions", "Users", "Action title"));
  #ifndef QT_NO_TOOLTIP
  dba_usrs->setToolTip(QCoreApplication::translate("Selector->Actions", "Run report \"Users\"", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  dba_usrs->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run report \"Users\"", "Status Tip item"));
  dba_usrs->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run report \"Users\"", "Whats This item"));

  objects_all->setText(QCoreApplication::translate("Selector->Actions", "All Objects", "Action title"));
  #ifndef QT_NO_TOOLTIP
  objects_all->setToolTip(QCoreApplication::translate("Selector->Actions", "Run report \"All objects\"", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  objects_all->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run report \"All objects\"", "Status Tip item"));
  objects_all->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run report \"All objects\"", "Whats This item"));

  objects_idx->setText(QCoreApplication::translate("Selector->Actions", "Indexes", "Action title"));
  #ifndef QT_NO_TOOLTIP
  objects_idx->setToolTip(QCoreApplication::translate("Selector->Actions", "Run report \"Indexes\"", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  objects_idx->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run report \"Indexes\"", "Status Tip item"));
  objects_idx->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run report \"Indexes\"", "Whats This item"));

  objects_seq->setText(QCoreApplication::translate("Selector->Actions", "Sequences", "Action title"));
  #ifndef QT_NO_TOOLTIP
  objects_seq->setToolTip(QCoreApplication::translate("Selector->Actions", "Run report \"Sequences\"", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  objects_seq->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run report \"Sequences\"", "Status Tip item"));
  objects_seq->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run report \"Sequences\"", "Whats This item"));

  objects_syn->setText(QCoreApplication::translate("Selector->Actions", "Synonyms", "Action title"));
  #ifndef QT_NO_TOOLTIP
  objects_syn->setToolTip(QCoreApplication::translate("Selector->Actions", "Run report \"Synonyms\"", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  objects_syn->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run report \"Synonyms\"", "Status Tip item"));
  objects_syn->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run report \"Synonyms\"", "Whats This item"));

  objects_tbs->setText(QCoreApplication::translate("Selector->Actions", "Tables", "Action title"));
  #ifndef QT_NO_TOOLTIP
  objects_tbs->setToolTip(QCoreApplication::translate("Selector->Actions", "Run report \"Tables\"", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  objects_tbs->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run report \"Tables\"", "Status Tip item"));
  objects_tbs->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run report \"Tables\"", "Whats This item"));

  objects_trg->setText(QCoreApplication::translate("Selector->Actions", "Triggers", "Action title"));
  #ifndef QT_NO_TOOLTIP
  objects_trg->setToolTip(QCoreApplication::translate("Selector->Actions", "Run report \"Triggers\"", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  objects_trg->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run report \"Triggers\"", "Status Tip item"));
  objects_trg->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run report \"Triggers\"", "Whats This item"));

  objects_tps->setText(QCoreApplication::translate("Selector->Actions", "Types", "Action title"));
  #ifndef QT_NO_TOOLTIP
  objects_tps->setToolTip(QCoreApplication::translate("Selector->Actions", "Run report \"Types\"", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  objects_tps->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run report \"Types\"", "Status Tip item"));
  objects_tps->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run report \"Types\"", "Whats This item"));

  objects_views->setText(QCoreApplication::translate("Selector->Actions", "Views", "Action title"));
  #ifndef QT_NO_TOOLTIP
  objects_views->setToolTip(QCoreApplication::translate("Selector->Actions", "Run report \"Views\"", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  objects_views->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run report \"Views\"", "Status Tip item"));
  objects_views->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run report \"Views\"", "Whats This item"));

  plsql_cperrs->setText(QCoreApplication::translate("Selector->Actions", "Compilation Errors", "Action title"));
  #ifndef QT_NO_TOOLTIP
  plsql_cperrs->setToolTip(QCoreApplication::translate("Selector->Actions", "Run report \"Compilation errors\"", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  plsql_cperrs->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run report \"Compilation errors\"", "Status Tip item"));
  plsql_cperrs->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run report \"Compilation errors\"", "Whats This item"));

  user_grrol->setText(QCoreApplication::translate("Selector->Actions", "Granted Roles", "Action title"));
  #ifndef QT_NO_TOOLTIP
  user_grrol->setToolTip(QCoreApplication::translate("Selector->Actions", "Run report \"Granted roles\"", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  user_grrol->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run report \"Granted roles\"", "Status Tip item"));
  user_grrol->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run report \"Granted roles\"", "Whats This item"));

  user_grsysprv->setText(QCoreApplication::translate("Selector->Actions", "Granted System Privileges", "Action title"));
  #ifndef QT_NO_TOOLTIP
  user_grsysprv->setToolTip(QCoreApplication::translate("Selector->Actions", "Run report \"Granted system privileges\"", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  user_grsysprv->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run report \"Granted system privileges\"", "Status Tip item"));
  user_grsysprv->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run report \"Granted system privileges\"", "Whats This item"));

  user_nlssespar->setText(QCoreApplication::translate("Selector->Actions", "NLS Session Parameters", "Action title"));
  #ifndef QT_NO_TOOLTIP
  user_nlssespar->setToolTip(QCoreApplication::translate("Selector->Actions", "Run report \"NLS session parameters\"", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  user_nlssespar->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run report \"NLS session parameters\"", "Status Tip item"));
  user_nlssespar->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run report \"NLS session parameters\"", "Whats This item"));

  user_objprvmde->setText(QCoreApplication::translate("Selector->Actions", "Object Privileges Made", "Action title"));
  #ifndef QT_NO_TOOLTIP
  user_objprvmde->setToolTip(QCoreApplication::translate("Selector->Actions", "Run report \"Object privileges made\"", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  user_objprvmde->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run report \"Object privileges made\"", "Status Tip item"));
  user_objprvmde->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run report \"Object privileges made\"", "Whats This item"));

  user_objprvrcvd->setText(QCoreApplication::translate("Selector->Actions", "Object Privileges Received", "Action title"));
  #ifndef QT_NO_TOOLTIP
  user_objprvrcvd->setToolTip(QCoreApplication::translate("Selector->Actions", "Run report \"Object privileges received\"", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  user_objprvrcvd->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run report \"Object privileges received\"", "Status Tip item"));
  user_objprvrcvd->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run report \"Object privileges received\"", "Whats This item"));
};

window_actions::window_actions()
{
  // Window->Tile
  tile = new QAction;
  tile->setObjectName(QString::fromUtf8("action_window_tile"));
  tile->setEnabled(false);

  // Window->Cascade
  cascade = new QAction;
  cascade->setObjectName(QString::fromUtf8("action_window_cscd"));
  cascade->setEnabled(false);

  // Window->Arrange All
  arrall = new QAction;
  arrall->setObjectName(QString::fromUtf8("action_window_arrall"));
  arrall->setEnabled(false);

  // Window->Save Layout
  savelo = new QAction;
  savelo->setObjectName(QString::fromUtf8("action_window_savelo"));
  savelo->setEnabled(false);

  translateGUI(true);
}

window_actions::~window_actions()
{
  delete savelo;
  delete arrall;
  delete cascade;
  delete tile;
}

void window_actions::translateGUI(bool init)
{
  tile->setText(QCoreApplication::translate("Selector->Actions", "&Tile", "Action title"));
  #ifndef QT_NO_TOOLTIP
  tile->setToolTip(QCoreApplication::translate("Selector->Actions", "Arrange windows in tile position", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  tile->setStatusTip(QCoreApplication::translate("Selector->Actions", "Arrange windows in tile position", "Status Tip item"));
  tile->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Arrange windows in tile position", "Whats This item"));

  cascade->setText(QCoreApplication::translate("Selector->Actions", "&Cascade", "Action title"));
  #ifndef QT_NO_TOOLTIP
  cascade->setToolTip(QCoreApplication::translate("Selector->Actions", "Arrange windows in cascade position", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  cascade->setStatusTip(QCoreApplication::translate("Selector->Actions", "Arrange windows in cascade position", "Status Tip item"));
  cascade->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Arrange windows in cascade position", "Whats This item"));

  arrall->setText(QCoreApplication::translate("Selector->Actions", "&Arrange All", "Action title"));
  #ifndef QT_NO_TOOLTIP
  arrall->setToolTip(QCoreApplication::translate("Selector->Actions", "Arrange windows in ??? position", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  arrall->setStatusTip(QCoreApplication::translate("Selector->Actions", "Arrange windows in ??? position", "Status Tip item"));
  arrall->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Arrange windows in ??? position", "Whats This item"));

  savelo->setText(QCoreApplication::translate("Selector->Actions", "&Save Layout", "Action title"));
  #ifndef QT_NO_TOOLTIP
  savelo->setToolTip(QCoreApplication::translate("Selector->Actions", "Save current window layout", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  savelo->setStatusTip(QCoreApplication::translate("Selector->Actions", "Save current window layout", "Status Tip item"));
  savelo->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Save current window layout", "Whats This item"));
};

help_actions::help_actions()
{
  // Help->Help
  help = new QAction;
  help->setObjectName(QString::fromUtf8("action_help_help"));
  #ifndef QT_NO_SHORTCUT
  help->setShortcut(QKeySequence(Qt::Key_F1));
  #endif // QT_NO_SHORTCUT
  help->setEnabled(false);

  // Help->Donates & Thanksgiving...
  donate = new QAction;
  donate->setObjectName(QString::fromUtf8("action_help_dnt"));
  donate->setEnabled(false);

  // Help->Support Info...
  suprt = new QAction;
  suprt->setObjectName(QString::fromUtf8("action_help_supp"));
  suprt->setEnabled(false);

  // Help->About Selector...
  about = new QAction;
  about->setObjectName(QString::fromUtf8("action_help_about"));
  about->setEnabled(false);

  translateGUI(true);
}

help_actions::~help_actions()
{
  delete about;
  delete suprt;
  delete donate;
  delete help;
}

void help_actions::translateGUI(bool init)
{
  help->setText(QCoreApplication::translate("Selector->Actions", "&Help", "Action title"));
  #ifndef QT_NO_TOOLTIP
  help->setToolTip(QCoreApplication::translate("Selector->Actions", "Show help", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  help->setStatusTip(QCoreApplication::translate("Selector->Actions", "Show help and user guides", "Status Tip item"));
  help->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Show help and user guides", "Whats This item"));

  donate->setText(QCoreApplication::translate("Selector->Actions", "&Donates && Thanksgiving...", "Action title"));
  #ifndef QT_NO_TOOLTIP
  donate->setToolTip(QCoreApplication::translate("Selector->Actions", "Show information about donates and thanksgiving", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  donate->setStatusTip(QCoreApplication::translate("Selector->Actions", "Show information about donates and thanksgiving", "Status Tip item"));
  donate->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Show information about donates and thanksgiving", "Whats This item"));

  suprt->setText(QCoreApplication::translate("Selector->Actions", "&Support Info...", "Action title"));
  #ifndef QT_NO_TOOLTIP
  suprt->setToolTip(QCoreApplication::translate("Selector->Actions", "Show information about supporting this product", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  suprt->setStatusTip(QCoreApplication::translate("Selector->Actions", "Show information about supporting this product", "Status Tip item"));
  suprt->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Show information about supporting this product", "Whats This item"));

  about->setText(QCoreApplication::translate("Selector->Actions", "&About", "Action title"));
  #ifndef QT_NO_TOOLTIP
  about->setToolTip(QCoreApplication::translate("Selector->Actions", "Show information about Selector", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  about->setStatusTip(QCoreApplication::translate("Selector->Actions", "Show information about Selector", "Status Tip item"));
  about->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Show information about Selector", "Whats This item"));
};

transaction_actions::transaction_actions()
{
  // Edit Data
  edt_rec = new QAction;
  edt_rec->setObjectName(QString::fromUtf8("action_trans_edt_rec"));
  edt_rec->setIcon(QPixmap(":/icons/edit_data.png"));
  edt_rec->setEnabled(false);

  // Insert Record
  ins_rec = new QAction;
  ins_rec->setObjectName(QString::fromUtf8("action_trans_ins_rec"));
  ins_rec->setIcon(QPixmap(":/icons/insert_record.png"));
  ins_rec->setEnabled(false);

  // Delete Record
  del_rec = new QAction;
  del_rec->setObjectName(QString::fromUtf8("action_trans_del_rec"));
  del_rec->setIcon(QPixmap(":/icons/delete_record.png"));
  del_rec->setEnabled(false);

  // Post Changes into DB
  post_chng = new QAction;
  post_chng->setObjectName(QString::fromUtf8("action_trans_post_chng"));
  post_chng->setIcon(QPixmap(":/icons/post_changes.png"));
  post_chng->setEnabled(false);

  // Fetch Next Page (Alt+PgDown)
  fetch_rec = new QAction;
  fetch_rec->setObjectName(QString::fromUtf8("action_trans_fetch_rec"));
  fetch_rec->setIcon(QPixmap(":/icons/fetch_next_page.png"));
  #ifndef QT_NO_SHORTCUT
  fetch_rec->setShortcut(QKeySequence(Qt::ALT + Qt::Key_PageDown));
  #endif // QT_NO_SHORTCUT
  fetch_rec->setEnabled(false);

  // Fetch All Records (Alt+End)
  fetch_all = new QAction;
  fetch_all->setObjectName(QString::fromUtf8("action_trans_fetch_all"));
  fetch_all->setIcon(QPixmap(":/icons/fetch_all_records.png"));
  #ifndef QT_NO_SHORTCUT
  fetch_all->setShortcut(QKeySequence(Qt::ALT + Qt::Key_End));
  #endif // QT_NO_SHORTCUT
  fetch_all->setEnabled(false);

  // Query By Example ???
  qry_by_ex = new QAction;
  qry_by_ex->setObjectName(QString::fromUtf8("action_trans_qry_by_ex"));
  qry_by_ex->setIcon(QPixmap(":/icons/query_by_example.png"));
  qry_by_ex->setEnabled(false);

  // Clear Record
  clr_rec = new QAction;
  clr_rec->setObjectName(QString::fromUtf8("action_trans_clr_rec"));
  clr_rec->setIcon(QPixmap(":/icons/clear_record.png"));
  clr_rec->setEnabled(false);

  translateGUI(true);
}

transaction_actions::~transaction_actions()
{
  delete clr_rec;
  delete qry_by_ex;
  delete fetch_all;
  delete fetch_rec;
  delete post_chng;
  delete del_rec;
  delete ins_rec;
  delete edt_rec;
}

void transaction_actions::translateGUI(bool init)
{
  edt_rec->setText(QCoreApplication::translate("Selector->Actions", "Edit Data", "Action title"));
  #ifndef QT_NO_TOOLTIP
  edt_rec->setToolTip(QCoreApplication::translate("Selector->Actions", "Unlock records for editing", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  edt_rec->setStatusTip(QCoreApplication::translate("Selector->Actions", "Unlock records for editing", "Status Tip item"));
  edt_rec->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Unlock records for editing", "Whats This item"));

  ins_rec->setText(QCoreApplication::translate("Selector->Actions", "Insert Record", "Action title"));
  #ifndef QT_NO_TOOLTIP
  ins_rec->setToolTip(QCoreApplication::translate("Selector->Actions", "Insert new record", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  ins_rec->setStatusTip(QCoreApplication::translate("Selector->Actions", "Insert new record", "Status Tip item"));
  ins_rec->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Insert new record", "Whats This item"));

  del_rec->setText(QCoreApplication::translate("Selector->Actions", "Delete Record", "Action title"));
  #ifndef QT_NO_TOOLTIP
  del_rec->setToolTip(QCoreApplication::translate("Selector->Actions", "Delete record", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  del_rec->setStatusTip(QCoreApplication::translate("Selector->Actions", "Delete record", "Status Tip item"));
  del_rec->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Delete record", "Whats This item"));

  post_chng->setText(QCoreApplication::translate("Selector->Actions", "Post Changes", "Action title"));
  #ifndef QT_NO_TOOLTIP
  post_chng->setToolTip(QCoreApplication::translate("Selector->Actions", "Post changes into database", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  post_chng->setStatusTip(QCoreApplication::translate("Selector->Actions", "Post changes into database", "Status Tip item"));
  post_chng->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Post changes into database", "Whats This item"));

  fetch_rec->setText(QCoreApplication::translate("Selector->Actions", "Fetch Next Page", "Action title"));
  #ifndef QT_NO_TOOLTIP
  fetch_rec->setToolTip(QCoreApplication::translate("Selector->Actions", "Fetch next data portion from database", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  fetch_rec->setStatusTip(QCoreApplication::translate("Selector->Actions", "Fetch next data portion from database", "Status Tip item"));
  fetch_rec->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Fetch next data portion from database", "Whats This item"));

  fetch_all->setText(QCoreApplication::translate("Selector->Actions", "Fetch All Records", "Action title"));
  #ifndef QT_NO_TOOLTIP
  fetch_all->setToolTip(QCoreApplication::translate("Selector->Actions", "Fetch all data from database", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  fetch_all->setStatusTip(QCoreApplication::translate("Selector->Actions", "Fetch all data from database", "Status Tip item"));
  fetch_all->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Fetch all data from database", "Whats This item"));

  qry_by_ex->setText(QCoreApplication::translate("Selector->Actions", "Query By Example", "Action title"));
  #ifndef QT_NO_TOOLTIP
  qry_by_ex->setToolTip(QCoreApplication::translate("Selector->Actions", "Query by example", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  qry_by_ex->setStatusTip(QCoreApplication::translate("Selector->Actions", "Query by example", "Status Tip item"));
  qry_by_ex->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Query by example", "Whats This item"));

  clr_rec->setText(QCoreApplication::translate("Selector->Actions", "Clear Record", "Action title"));
  #ifndef QT_NO_TOOLTIP
  clr_rec->setToolTip(QCoreApplication::translate("Selector->Actions", "Clear record contents", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  clr_rec->setStatusTip(QCoreApplication::translate("Selector->Actions", "Clear record contents", "Status Tip item"));
  clr_rec->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Clear record contents", "Whats This item"));
};
