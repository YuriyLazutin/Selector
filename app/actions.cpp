#include "actions.h"

file_actions::file_actions()
{
  // File->New->Program Window->Blank
  new_blank = new QAction;
  new_blank->setObjectName(QString::fromUtf8("action_file_new_prog_wnd_blank"));
  new_blank->setText(QCoreApplication::translate("Selector->Actions", "Blank", "Action title"));
  new_blank->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new blank program window", "Tool Tip item"));
  new_blank->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new blank program window", "Status Tip item"));
  new_blank->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new blank program window", "Whats This item"));
  // File->New->Program Window->Function
  new_func = new QAction;
  new_func->setObjectName(QString::fromUtf8("action_file_new_prog_wnd_func"));
  new_func->setText(QCoreApplication::translate("Selector->Actions", "Function", "Action title"));
  new_func->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new function", "Tool Tip item"));
  new_func->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new function window", "Status Tip item"));
  new_func->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new function window", "Whats This item"));
  // File->New->Program Window->Java source
  new_jsrc = new QAction;
  new_jsrc->setObjectName(QString::fromUtf8("action_file_new_prog_wnd_jsrc"));
  new_jsrc->setText(QCoreApplication::translate("Selector->Actions", "Java Source", "Action title"));
  new_jsrc->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new java program window", "Tool Tip item"));
  new_jsrc->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new java program window", "Status Tip item"));
  new_jsrc->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new java program window", "Whats This item"));
  // File->New->Program Window->Package
  new_pkg = new QAction;
  new_pkg->setObjectName(QString::fromUtf8("action_file_new_prog_wnd_pkg"));
  new_pkg->setText(QCoreApplication::translate("Selector->Actions", "Package", "Action title"));
  new_pkg->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new package", "Tool Tip item"));
  new_pkg->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new package", "Status Tip item"));
  new_pkg->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new package", "Whats This item"));
  // File->New->Program Window->Package body
  new_pkgbdy = new QAction;
  new_pkgbdy->setObjectName(QString::fromUtf8("action_file_new_prog_wnd_pkgbdy"));
  new_pkgbdy->setText(QCoreApplication::translate("Selector->Actions", "Package Body", "Action title"));
  new_pkgbdy->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new package body", "Tool Tip item"));
  new_pkgbdy->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new package body", "Status Tip item"));
  new_pkgbdy->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new package body", "Whats This item"));
  // File->New->Program Window->Package Specification
  new_pkgspc = new QAction;
  new_pkgspc->setObjectName(QString::fromUtf8("action_file_new_prog_wnd_pkgspc"));
  new_pkgspc->setText(QCoreApplication::translate("Selector->Actions", "Package Specification", "Action title"));
  new_pkgspc->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new package specification", "Tool Tip item"));
  new_pkgspc->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new package specification", "Status Tip item"));
  new_pkgspc->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new package specification", "Whats This item"));
  // File->New->Program Window->Procedure
  new_proc = new QAction;
  new_proc->setObjectName(QString::fromUtf8("action_file_new_prog_wnd_proc"));
  new_proc->setText(QCoreApplication::translate("Selector->Actions", "Procedure", "Action title"));
  new_proc->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new procedure", "Tool Tip item"));
  new_proc->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new procedure", "Status Tip item"));
  new_proc->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new procedure", "Whats This item"));
  // File->New->Program Window->Trigger
  new_trg = new QAction;
  new_trg->setObjectName(QString::fromUtf8("action_file_new_prog_wnd_trg"));
  new_trg->setText(QCoreApplication::translate("Selector->Actions", "Trigger", "Action title"));
  new_trg->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new trigger", "Tool Tip item"));
  new_trg->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new trigger", "Status Tip item"));
  new_trg->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new trigger", "Whats This item"));
  // File->New->Program Window->Type
  new_type = new QAction;
  new_type->setObjectName(QString::fromUtf8("action_file_new_prog_wnd_type"));
  new_type->setText(QCoreApplication::translate("Selector->Actions", "Type", "Action title"));
  new_type->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new type", "Tool Tip item"));
  new_type->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new type", "Status Tip item"));
  new_type->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new type", "Whats This item"));
  // File->New->Program Window->Type body
  new_typebdy = new QAction;
  new_typebdy->setObjectName(QString::fromUtf8("action_file_new_prog_wnd_typebdy"));
  new_typebdy->setText(QCoreApplication::translate("Selector->Actions", "Type Body", "Action title"));
  new_typebdy->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new type body", "Tool Tip item"));
  new_typebdy->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new type body", "Status Tip item"));
  new_typebdy->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new type body", "Whats This item"));
  // File->New->Program Window->Type Specification
  new_typespc = new QAction;
  new_typespc->setObjectName(QString::fromUtf8("action_file_new_prog_wnd_typespc"));
  new_typespc->setText(QCoreApplication::translate("Selector->Actions", "Type Specification", "Action title"));
  new_typespc->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new type specification", "Tool Tip item"));
  new_typespc->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new type specification", "Status Tip item"));
  new_typespc->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new type specification", "Whats This item"));
  // File->New->Test Window
  new_test = new QAction;
  new_test->setObjectName(QString::fromUtf8("action_file_new_test"));
  new_test->setText(QCoreApplication::translate("Selector->Actions", "&Test Window", "Action title"));
  new_test->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new test window", "Tool Tip item"));
  new_test->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new test window", "Status Tip item"));
  new_test->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new test window", "Whats This item"));
  // File->New->SQL Window
  new_sql = new QAction;
  new_sql->setObjectName(QString::fromUtf8("action_file_new_sql"));
  new_sql->setText(QCoreApplication::translate("Selector->Actions", "&SQL Window", "Action title"));
  new_sql->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new SQL script", "Tool Tip item"));
  new_sql->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new SQL script, program unit or database object", "Status Tip item"));
  new_sql->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new SQL script, program unit or database object", "Whats This item"));
  new_sql->setIcon(QPixmap(":/icons/new-sql.png"));
  // File->New->Report Window
  new_rpt = new QAction;
  new_rpt->setObjectName(QString::fromUtf8("action_file_new_rpt"));
  new_rpt->setText(QCoreApplication::translate("Selector->Actions", "&Report Window", "Action title"));
  new_rpt->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new report", "Tool Tip item"));
  new_rpt->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new report", "Status Tip item"));
  new_rpt->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new report", "Whats This item"));
  new_rpt->setIcon(QPixmap(":/icons/report.png"));
  // File->New->Command Window
  new_cmd = new QAction;
  new_cmd->setObjectName(QString::fromUtf8("action_file_new_cmd"));
  new_cmd->setText(QCoreApplication::translate("Selector->Actions", "&Command Window", "Action title"));
  new_cmd->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new command window", "Tool Tip item"));
  new_cmd->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new command window", "Status Tip item"));
  new_cmd->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new command window", "Whats This item"));
  // File->New->Explain Plan Window
  new_explan = new QAction;
  new_explan->setObjectName(QString::fromUtf8("action_file_new_explan"));
  new_explan->setText(QCoreApplication::translate("Selector->Actions", "&Explain Plan Window", "Action title"));
  new_explan->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new explain plan window", "Tool Tip item"));
  new_explan->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new explain plan window", "Status Tip item"));
  new_explan->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new explain plan window", "Whats This item"));
  // File->New->Diagram Window
  new_diag = new QAction;
  new_diag->setObjectName(QString::fromUtf8("action_file_new_diag"));
  new_diag->setText(QCoreApplication::translate("Selector->Actions", "&Diagram Window", "Action title"));
  new_diag->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new diagram window", "Tool Tip item"));
  new_diag->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new diagram window", "Status Tip item"));
  new_diag->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new diagram window", "Whats This item"));
  // File->New->View
  new_view = new QAction;
  new_view->setObjectName(QString::fromUtf8("action_file_new_view"));
  new_view->setText(QCoreApplication::translate("Selector->Actions", "&View", "Action title"));
  new_view->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new view", "Tool Tip item"));
  new_view->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new view", "Status Tip item"));
  new_view->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new view", "Whats This item"));
  // File->New->Materialized View
  new_mview = new QAction;
  new_mview->setObjectName(QString::fromUtf8("action_file_new_mview"));
  new_mview->setText(QCoreApplication::translate("Selector->Actions", "&Materialized View", "Action title"));
  new_mview->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new materialized view", "Tool Tip item"));
  new_mview->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new materialized view", "Status Tip item"));
  new_mview->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new materialized view", "Whats This item"));
  // File->New->Table
  new_tbl = new QAction;
  new_tbl->setObjectName(QString::fromUtf8("action_file_new_tbl"));
  new_tbl->setText(QCoreApplication::translate("Selector->Actions", "T&able", "Action title"));
  new_tbl->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new table", "Tool Tip item"));
  new_tbl->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new table", "Status Tip item"));
  new_tbl->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new table", "Whats This item"));
  // File->New->Sequence
  new_seq = new QAction;
  new_seq->setObjectName(QString::fromUtf8("action_file_new_seq"));
  new_seq->setText(QCoreApplication::translate("Selector->Actions", "Se&quence", "Action title"));
  new_seq->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new sequence", "Tool Tip item"));
  new_seq->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new sequence", "Status Tip item"));
  new_seq->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new sequence", "Whats This item"));
  // File->New->Synonym
  new_syn = new QAction;
  new_syn->setObjectName(QString::fromUtf8("action_file_new_syn"));
  new_syn->setText(QCoreApplication::translate("Selector->Actions", "Sy&nonym", "Action title"));
  new_syn->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new synonym", "Tool Tip item"));
  new_syn->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new synonym", "Status Tip item"));
  new_syn->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new synonym", "Whats This item"));
  // File->New->Library
  new_lib = new QAction;
  new_lib->setObjectName(QString::fromUtf8("action_file_new_lib"));
  new_lib->setText(QCoreApplication::translate("Selector->Actions", "&Library", "Action title"));
  new_lib->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new library", "Tool Tip item"));
  new_lib->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new library", "Status Tip item"));
  new_lib->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new library", "Whats This item"));
  // File->New->Directory
  new_dir = new QAction;
  new_dir->setObjectName(QString::fromUtf8("action_file_new_dir"));
  new_dir->setText(QCoreApplication::translate("Selector->Actions", "D&irectory", "Action title"));
  new_dir->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new directory", "Tool Tip item"));
  new_dir->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new directory", "Status Tip item"));
  new_dir->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new directory", "Whats This item"));
  // File->New->Job
  new_job = new QAction;
  new_job->setObjectName(QString::fromUtf8("action_file_new_job"));
  new_job->setText(QCoreApplication::translate("Selector->Actions", "&Job", "Action title"));
  new_job->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new job", "Tool Tip item"));
  new_job->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new job", "Status Tip item"));
  new_job->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new job", "Whats This item"));
  // File->New->Queue
  new_que = new QAction;
  new_que->setObjectName(QString::fromUtf8("action_file_new_que"));
  new_que->setText(QCoreApplication::translate("Selector->Actions", "Queue", "Action title"));
  new_que->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new queue", "Tool Tip item"));
  new_que->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new queue", "Status Tip item"));
  new_que->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new queue", "Whats This item"));
  // File->New->Queue table
  new_quetbl = new QAction;
  new_quetbl->setObjectName(QString::fromUtf8("action_file_new_quetbl"));
  new_quetbl->setText(QCoreApplication::translate("Selector->Actions", "Queue ta&ble", "Action title"));
  new_quetbl->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new queue table", "Tool Tip item"));
  new_quetbl->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new queue table", "Status Tip item"));
  new_quetbl->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new queue table", "Whats This item"));
  // File->New->User
  new_user = new QAction;
  new_user->setObjectName(QString::fromUtf8("action_file_new_user"));
  new_user->setText(QCoreApplication::translate("Selector->Actions", "&User", "Action title"));
  new_user->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new user", "Tool Tip item"));
  new_user->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new user", "Status Tip item"));
  new_user->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new user", "Whats This item"));
  // File->New->Role
  new_role = new QAction;
  new_role->setObjectName(QString::fromUtf8("action_file_new_role"));
  new_role->setText(QCoreApplication::translate("Selector->Actions", "R&ole", "Action title"));
  new_role->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new role", "Tool Tip item"));
  new_role->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new role", "Status Tip item"));
  new_role->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new role", "Whats This item"));
  // File->New->Profile
  new_profile = new QAction;
  new_profile->setObjectName(QString::fromUtf8("action_file_new_profile"));
  new_profile->setText(QCoreApplication::translate("Selector->Actions", "Pro&file", "Action title"));
  new_profile->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new profile", "Tool Tip item"));
  new_profile->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new profile", "Status Tip item"));
  new_profile->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new profile", "Whats This item"));
  // File->New->Database Link
  new_dblink = new QAction;
  new_dblink->setObjectName(QString::fromUtf8("action_file_new_dblink"));
  new_dblink->setText(QCoreApplication::translate("Selector->Actions", "Database Lin&k", "Action title"));
  new_dblink->setToolTip(QCoreApplication::translate("Selector->Actions", "Create new database link", "Tool Tip item"));
  new_dblink->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create new database link", "Status Tip item"));
  new_dblink->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create new database link", "Whats This item"));
  // File->Open->Program File
  open_prog = new QAction;
  open_prog->setObjectName(QString::fromUtf8("action_file_open_prog_file"));
  open_prog->setText(QCoreApplication::translate("Selector->Actions", "&Program File", "Action title"));
  open_prog->setToolTip(QCoreApplication::translate("Selector->Actions", "Open program file", "Tool Tip item"));
  open_prog->setStatusTip(QCoreApplication::translate("Selector->Actions", "Open existing program file", "Status Tip item"));
  open_prog->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Open existing program file", "Whats This item"));
  // File->Open->Test Script
  open_test = new QAction;
  open_test->setObjectName(QString::fromUtf8("action_file_open_test_script"));
  open_test->setText(QCoreApplication::translate("Selector->Actions", "&Test Script", "Action title"));
  open_test->setToolTip(QCoreApplication::translate("Selector->Actions", "Open test script", "Tool Tip item"));
  open_test->setStatusTip(QCoreApplication::translate("Selector->Actions", "Open existing test script", "Status Tip item"));
  open_test->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Open existing test script", "Whats This item"));
  // File->Open->SQL Script
  open_sql = new QAction;
  open_sql->setObjectName(QString::fromUtf8("action_file_open_sql_sqript"));
  open_sql->setText(QCoreApplication::translate("Selector->Actions", "&SQL Script", "Action title"));
  open_sql->setToolTip(QCoreApplication::translate("Selector->Actions", "Open SQL script", "Tool Tip item"));
  open_sql->setStatusTip(QCoreApplication::translate("Selector->Actions", "Open existing SQL script", "Status Tip item"));
  open_sql->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Open existing SQL script", "Whats This item"));
  // File->Open->Report File
  open_rpt = new QAction;
  open_rpt->setObjectName(QString::fromUtf8("action_file_open_rpt_file"));
  open_rpt->setText(QCoreApplication::translate("Selector->Actions", "&Report File", "Action title"));
  open_rpt->setToolTip(QCoreApplication::translate("Selector->Actions", "Open report file", "Tool Tip item"));
  open_rpt->setStatusTip(QCoreApplication::translate("Selector->Actions", "Open existing report file", "Status Tip item"));
  open_rpt->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Open existing report file", "Whats This item"));
  open_rpt->setIcon(QPixmap(":/icons/report.png"));
  // File->Open->Command File
  open_cmd = new QAction;
  open_cmd->setObjectName(QString::fromUtf8("action_file_open_cmd_file"));
  open_cmd->setText(QCoreApplication::translate("Selector->Actions", "&Command File", "Action title"));
  open_cmd->setToolTip(QCoreApplication::translate("Selector->Actions", "Open command file", "Tool Tip item"));
  open_cmd->setStatusTip(QCoreApplication::translate("Selector->Actions", "Open existing command file", "Status Tip item"));
  open_cmd->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Open existing command file", "Whats This item"));
  // File->Open->Diagram File
  open_diag = new QAction;
  open_diag->setObjectName(QString::fromUtf8("action_file_open_diag_file"));
  open_diag->setText(QCoreApplication::translate("Selector->Actions", "&Diagram File", "Action title"));
  open_diag->setToolTip(QCoreApplication::translate("Selector->Actions", "Open diagram file", "Tool Tip item"));
  open_diag->setStatusTip(QCoreApplication::translate("Selector->Actions", "Open existing diagram file", "Status Tip item"));
  open_diag->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Open existing diagram file", "Whats This item"));
  // File->Save
  save = new QAction;
  save->setObjectName(QString::fromUtf8("action_file_save"));
  save->setText(QCoreApplication::translate("Selector->Actions", "&Save", "Action title"));
  #ifndef QT_NO_SHORTCUT
  save->setShortcut(QCoreApplication::translate("Selector->Actions", "Ctrl+S", "Action title"));
  #endif // QT_NO_SHORTCUT
  save->setToolTip(QCoreApplication::translate("Selector->Actions", "Save file", "Tool Tip item"));
  save->setStatusTip(QCoreApplication::translate("Selector->Actions", "Save program unit as external text file", "Status Tip item"));
  save->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Save program unit as external text file", "Whats This item"));
  save->setIcon(QPixmap(":/icons/save-sql.png"));
  save->setEnabled(false);
  // File->Save As...
  save_as = new QAction;
  save_as->setObjectName(QString::fromUtf8("action_file_save_as"));
  save_as->setText(QCoreApplication::translate("Selector->Actions", "Save &As...", "Action title"));
  save_as->setToolTip(QCoreApplication::translate("Selector->Actions", "Save file with new name", "Tool Tip item"));
  save_as->setStatusTip(QCoreApplication::translate("Selector->Actions", "Save program unit as external text file with new name", "Status Tip item"));
  save_as->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Save program unit as external text file with new name", "Whats This item"));
  save_as->setEnabled(false);
  // File->Save All
  save_all = new QAction;
  save_all->setObjectName(QString::fromUtf8("action_file_save_all"));
  save_all->setText(QCoreApplication::translate("Selector->Actions", "Save All", "Action title"));
  save_all->setToolTip(QCoreApplication::translate("Selector->Actions", "Save all modified files", "Tool Tip item"));
  save_all->setStatusTip(QCoreApplication::translate("Selector->Actions", "Save all modified files", "Status Tip item"));
  save_all->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Save all modified files", "Whats This item"));
  save_all->setEnabled(false);
  // File->E-mail...
  email = new QAction;
  email->setObjectName(QString::fromUtf8("action_file_email"));
  email->setText(QCoreApplication::translate("Selector->Actions", "&E-mail...", "Action title"));
  email->setToolTip(QCoreApplication::translate("Selector->Actions", "Send current file via e-mail", "Tool Tip item"));
  email->setStatusTip(QCoreApplication::translate("Selector->Actions", "Send current file via e-mail", "Status Tip item"));
  email->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Send current file via e-mail", "Whats This item"));
  email->setEnabled(false);
  // File->Close
  close = new QAction;
  close->setObjectName(QString::fromUtf8("action_file_close"));
  close->setText(QCoreApplication::translate("Selector->Actions", "&Close", "Action title"));
  close->setToolTip(QCoreApplication::translate("Selector->Actions", "Close current file", "Tool Tip item"));
  close->setStatusTip(QCoreApplication::translate("Selector->Actions", "Close current file", "Status Tip item"));
  close->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Close current file", "Whats This item"));
  close->setEnabled(false);
  // File->Close All
  close_all = new QAction;
  close_all->setObjectName(QString::fromUtf8("action_file_close_all"));
  close_all->setText(QCoreApplication::translate("Selector->Actions", "Clos&e All", "Action title"));
  close_all->setToolTip(QCoreApplication::translate("Selector->Actions", "Close all files", "Tool Tip item"));
  close_all->setStatusTip(QCoreApplication::translate("Selector->Actions", "Close all files", "Status Tip item"));
  close_all->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Close all files", "Whats This item"));
  close_all->setEnabled(false);
  // File->Print
  print = new QAction;
  print->setObjectName(QString::fromUtf8("action_file_print"));
  print->setText(QCoreApplication::translate("Selector->Actions", "&Print", "Action title"));
  print->setToolTip(QCoreApplication::translate("Selector->Actions", "Send file to printer", "Tool Tip item"));
  print->setStatusTip(QCoreApplication::translate("Selector->Actions", "Send current file to printer", "Status Tip item"));
  print->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Send current file to printer", "Whats This item"));
  print->setEnabled(false);
  // File->Print Setup...
  print_setup = new QAction;
  print_setup->setObjectName(QString::fromUtf8("action_file_print_setup"));
  print_setup->setText(QCoreApplication::translate("Selector->Actions", "Print Setup...", "Action title"));
  print_setup->setToolTip(QCoreApplication::translate("Selector->Actions", "Change printer setups", "Tool Tip item"));
  print_setup->setStatusTip(QCoreApplication::translate("Selector->Actions", "Change printer setups", "Status Tip item"));
  print_setup->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Change printer setups", "Whats This item"));
  // File->Page Setup...
  page_setup = new QAction;
  page_setup->setObjectName(QString::fromUtf8("action_file_page_setup"));
  page_setup->setText(QCoreApplication::translate("Selector->Actions", "Page Setup...", "Action title"));
  page_setup->setToolTip(QCoreApplication::translate("Selector->Actions", "Change print-page options", "Tool Tip item"));
  page_setup->setStatusTip(QCoreApplication::translate("Selector->Actions", "Change print-page options", "Status Tip item"));
  page_setup->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Change print-page options", "Whats This item"));
  // File->New Instance
  new_instance = new QAction;
  new_instance->setObjectName(QString::fromUtf8("action_file_new_instance"));
  new_instance->setText(QCoreApplication::translate("Selector->Actions", "Ne&w Instance", "Action title"));
  new_instance->setToolTip(QCoreApplication::translate("Selector->Actions", "Create a new Selector instance", "Tool Tip item"));
  new_instance->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create a new Selector instance", "Status Tip item"));
  new_instance->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create a new Selector instance", "Whats This item"));
  // File->Authorization...
  authorization = new QAction;
  authorization->setObjectName(QString::fromUtf8("action_file_authorization"));
  authorization->setText(QCoreApplication::translate("Selector->Actions", "Authori&zation...", "Action title"));
  authorization->setToolTip(QCoreApplication::translate("Selector->Actions", "Change db-connection parameters", "Tool Tip item"));
  authorization->setStatusTip(QCoreApplication::translate("Selector->Actions", "Change db-connection parameters", "Status Tip item"));
  authorization->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Change db-connection parameters", "Whats This item"));
  // File->Exit
  exit = new QAction;
  exit->setObjectName(QString::fromUtf8("action_file_exit"));
  exit->setText(QCoreApplication::translate("Selector->Actions", "E&xit", "Action title"));
  #ifndef QT_NO_SHORTCUT
  exit->setShortcut(QCoreApplication::translate("Selector->Actions", "Alt+F4", nullptr));
  #endif // QT_NO_SHORTCUT
  exit->setToolTip(QCoreApplication::translate("Selector->Actions", "Complete work and exit", "Tool Tip item"));
  exit->setStatusTip(QCoreApplication::translate("Selector->Actions", "Complete work and exit", "Status Tip item"));
  exit->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Complete work and exit", "Whats This item"));
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

edit_actions::edit_actions()
{
  // Edit->Undo
  undo = new QAction;
  undo->setObjectName(QString::fromUtf8("action_edit_undo"));
  undo->setText(QCoreApplication::translate("Selector->Actions", "&Undo", "Action title"));
  #ifndef QT_NO_SHORTCUT
  undo->setShortcut(QCoreApplication::translate("Selector->Actions", "Ctrl+Z", nullptr));
  #endif // QT_NO_SHORTCUT
  undo->setToolTip(QCoreApplication::translate("Selector->Actions", "Undo last edit operation", "Tool Tip item"));
  undo->setStatusTip(QCoreApplication::translate("Selector->Actions", "Allow you to undo last edit operations", "Status Tip item"));
  undo->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Allow you to undo last edit operations", "Whats This item"));
  undo->setIcon(QPixmap(":/icons/edit-undo.png"));
  undo->setEnabled(false);
  // Edit->Redo
  redo = new QAction;
  redo->setObjectName(QString::fromUtf8("action_edit_redo"));
  redo->setText(QCoreApplication::translate("Selector->Actions", "&Redo", "Action title"));
  #ifndef QT_NO_SHORTCUT
  redo->setShortcut(QCoreApplication::translate("Selector->Actions", "Shift+Ctrl+Z", nullptr));
  #endif // QT_NO_SHORTCUT
  redo->setToolTip(QCoreApplication::translate("Selector->Actions", "Redo last undo", "Tool Tip item"));
  redo->setStatusTip(QCoreApplication::translate("Selector->Actions", "Allow you to restore last edit operations (if it was undone)", "Status Tip item"));
  redo->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Allow you to restore last edit operations (if it was undone)", "Whats This item"));
  redo->setIcon(QPixmap(":/icons/edit-redo.png"));
  redo->setEnabled(false);
  // Edit->Beautifier
  beautifier = new QAction;
  beautifier->setObjectName(QString::fromUtf8("action_edit_beautifier"));
  beautifier->setText(QCoreApplication::translate("Selector->Actions", "&Beautifier", "Action title"));
  beautifier->setToolTip(QCoreApplication::translate("Selector->Actions", "Code automatic beautify", "Tool Tip item"));
  beautifier->setStatusTip(QCoreApplication::translate("Selector->Actions", "Code automatic beautify", "Status Tip item"));
  beautifier->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Code automatic beautify", "Whats This item"));
  beautifier->setEnabled(false);
  // Edit->Beautifier Options
  beautifier_optns = new QAction;
  beautifier_optns->setObjectName(QString::fromUtf8("action_edit_beautifier_optns"));
  beautifier_optns->setText(QCoreApplication::translate("Selector->Actions", "Beautifier Options", "Action title"));
  beautifier_optns->setToolTip(QCoreApplication::translate("Selector->Actions", "Change beautifier options", "Tool Tip item"));
  beautifier_optns->setStatusTip(QCoreApplication::translate("Selector->Actions", "Change beautifier options", "Status Tip item"));
  beautifier_optns->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Change beautifier options", "Whats This item"));
  beautifier_optns->setEnabled(false);
  // Edit->Cut
  cut = new QAction;
  cut->setObjectName(QString::fromUtf8("action_edit_cut"));
  cut->setText(QCoreApplication::translate("Selector->Actions", "Cut", "Action title"));
  #ifndef QT_NO_SHORTCUT
  cut->setShortcut(QCoreApplication::translate("Selector->Actions", "Ctrl+X", nullptr));
  #endif // QT_NO_SHORTCUT
  cut->setToolTip(QCoreApplication::translate("Selector->Actions", "Cut selected text", "Tool Tip item"));
  cut->setStatusTip(QCoreApplication::translate("Selector->Actions", "Cut selected text and put it into clipboard", "Status Tip item"));
  cut->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Cut selected text and put it into clipboard", "Whats This item"));
  cut->setEnabled(false);
  // Edit->Copy
  copy = new QAction;
  copy->setObjectName(QString::fromUtf8("action_edit_copy"));
  copy->setText(QCoreApplication::translate("Selector->Actions", "&Copy", "Action title"));
  #ifndef QT_NO_SHORTCUT
  copy->setShortcut(QCoreApplication::translate("Selector->Actions", "Ctrl+C", nullptr));
  #endif // QT_NO_SHORTCUT
  copy->setToolTip(QCoreApplication::translate("Selector->Actions", "Copy selected text", "Tool Tip item"));
  copy->setStatusTip(QCoreApplication::translate("Selector->Actions", "Copy selected text and put it into clipboard", "Status Tip item"));
  copy->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Copy selected text and put it into clipboard", "Whats This item"));
  copy->setEnabled(false);
  // Edit->Paste
  paste = new QAction;
  paste->setObjectName(QString::fromUtf8("action_edit_paste"));
  paste->setText(QCoreApplication::translate("Selector->Actions", "&Paste", "Action title"));
  #ifndef QT_NO_SHORTCUT
  paste->setShortcut(QCoreApplication::translate("Selector->Actions", "Ctrl+V", nullptr));
  #endif // QT_NO_SHORTCUT
  paste->setToolTip(QCoreApplication::translate("Selector->Actions", "Paste text from clipboard", "Tool Tip item"));
  paste->setStatusTip(QCoreApplication::translate("Selector->Actions", "Paste text from clipboard", "Status Tip item"));
  paste->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Paste text from clipboard", "Whats This item"));
  paste->setEnabled(false);
  // Edit->Append
  append = new QAction;
  append->setObjectName(QString::fromUtf8("action_edit_append"));
  append->setText(QCoreApplication::translate("Selector->Actions", "&Append", "Action title"));
  append->setToolTip(QCoreApplication::translate("Selector->Actions", "Append", "Tool Tip item"));
  append->setStatusTip(QCoreApplication::translate("Selector->Actions", "Append", "Status Tip item"));
  append->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Append", "Whats This item"));
  append->setEnabled(false);
  // Edit->Clear
  clear = new QAction;
  clear->setObjectName(QString::fromUtf8("action_edit_clear"));
  clear->setText(QCoreApplication::translate("Selector->Actions", "C&lear", "Action title"));
  clear->setToolTip(QCoreApplication::translate("Selector->Actions", "Clear current form", "Tool Tip item"));
  clear->setStatusTip(QCoreApplication::translate("Selector->Actions", "Clear current form", "Status Tip item"));
  clear->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Clear current form", "Whats This item"));
  clear->setEnabled(false);
  // Edit->Select All
  select_all = new QAction;
  select_all->setObjectName(QString::fromUtf8("action_edit_select_all"));
  select_all->setText(QCoreApplication::translate("Selector->Actions", "Select All", "Action title"));
  #ifndef QT_NO_SHORTCUT
  select_all->setShortcut(QCoreApplication::translate("Selector->Actions", "Ctrl+A", nullptr));
  #endif // QT_NO_SHORTCUT
  select_all->setToolTip(QCoreApplication::translate("Selector->Actions", "Select all text in current form", "Tool Tip item"));
  select_all->setStatusTip(QCoreApplication::translate("Selector->Actions", "Select all text in current form", "Status Tip item"));
  select_all->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Select all text in current form", "Whats This item"));
  select_all->setEnabled(false);
  // Edit->Recall Statement
  recall = new QAction;
  recall->setObjectName(QString::fromUtf8("action_edit_recall"));
  recall->setText(QCoreApplication::translate("Selector->Actions", "R&ecall Statement", "Action title"));
  #ifndef QT_NO_SHORTCUT
  recall->setShortcut(QCoreApplication::translate("Selector->Actions", "Ctrl+E", nullptr));
  #endif // QT_NO_SHORTCUT
  recall->setToolTip(QCoreApplication::translate("Selector->Actions", "Recall statement", "Tool Tip item"));
  recall->setStatusTip(QCoreApplication::translate("Selector->Actions", "Recall statement", "Status Tip item"));
  recall->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Recall statement", "Whats This item"));
  recall->setEnabled(false);
  // Edit->Special Copy->C++
  scpy_cpp = new QAction;
  scpy_cpp->setObjectName(QString::fromUtf8("action_edit_scpy_cpp"));
  scpy_cpp->setText(QCoreApplication::translate("Selector->Actions", "C++", "Action title"));
  scpy_cpp->setToolTip(QCoreApplication::translate("Selector->Actions", "Special Copy->C++", "Tool Tip item"));
  scpy_cpp->setStatusTip(QCoreApplication::translate("Selector->Actions", "Special Copy->C++", "Status Tip item"));
  scpy_cpp->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Special Copy->C++", "Whats This item"));
  scpy_cpp->setEnabled(false);
  // Edit->Special Copy->Delphi
  scpy_delphi = new QAction;
  scpy_delphi->setObjectName(QString::fromUtf8("action_edit_scpy_delphi"));
  scpy_delphi->setText(QCoreApplication::translate("Selector->Actions", "Delphi", "Action title"));
  scpy_delphi->setToolTip(QCoreApplication::translate("Selector->Actions", "Special Copy->Delphi", "Tool Tip item"));
  scpy_delphi->setStatusTip(QCoreApplication::translate("Selector->Actions", "Special Copy->Delphi", "Status Tip item"));
  scpy_delphi->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Special Copy->Delphi", "Whats This item"));
  scpy_delphi->setEnabled(false);
  // Edit->Special Copy->Java
  scpy_java = new QAction;
  scpy_java->setObjectName(QString::fromUtf8("action_edit_scpy_java"));
  scpy_java->setText(QCoreApplication::translate("Selector->Actions", "Java", "Action title"));
  scpy_java->setToolTip(QCoreApplication::translate("Selector->Actions", "Special Copy->Java", "Tool Tip item"));
  scpy_java->setStatusTip(QCoreApplication::translate("Selector->Actions", "Special Copy->Java", "Status Tip item"));
  scpy_java->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Special Copy->Java", "Whats This item"));
  scpy_java->setEnabled(false);
  // Edit->Special Copy->PL/SQL
  scpy_plsql = new QAction;
  scpy_plsql->setObjectName(QString::fromUtf8("action_edit_scpy_plsql"));
  scpy_plsql->setText(QCoreApplication::translate("Selector->Actions", "PL/SQL", "Action title"));
  scpy_plsql->setToolTip(QCoreApplication::translate("Selector->Actions", "Special Copy->PL/SQL", "Tool Tip item"));
  scpy_plsql->setStatusTip(QCoreApplication::translate("Selector->Actions", "Special Copy->PL/SQL", "Status Tip item"));
  scpy_plsql->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Special Copy->PL/SQL", "Whats This item"));
  scpy_plsql->setEnabled(false);
  // Edit->Special Copy->Visual Basic
  scpy_basic = new QAction;
  scpy_basic->setObjectName(QString::fromUtf8("action_edit_scpy_basic"));
  scpy_basic->setText(QCoreApplication::translate("Selector->Actions", "Visual Basic", "Action title"));
  scpy_basic->setToolTip(QCoreApplication::translate("Selector->Actions", "Special Copy->Visual Basic", "Tool Tip item"));
  scpy_basic->setStatusTip(QCoreApplication::translate("Selector->Actions", "Special Copy->Visual Basic", "Status Tip item"));
  scpy_basic->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Special Copy->Visual Basic", "Whats This item"));
  scpy_basic->setEnabled(false);
  // Edit->Selection->Indent
  slctn_indent = new QAction;
  slctn_indent->setObjectName(QString::fromUtf8("action_edit_selection_indent"));
  slctn_indent->setText(QCoreApplication::translate("Selector->Actions", "&Indent", "Action title"));
  #ifndef QT_NO_SHORTCUT
  slctn_indent->setShortcut(QCoreApplication::translate("Selector->Actions", "Ctrl+I", nullptr));
  #endif // QT_NO_SHORTCUT
  slctn_indent->setToolTip(QCoreApplication::translate("Selector->Actions", "Increase indent", "Tool Tip item"));
  slctn_indent->setStatusTip(QCoreApplication::translate("Selector->Actions", "Increase indent of selected text", "Status Tip item"));
  slctn_indent->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Increase indent of selected text", "Whats This item"));
  slctn_indent->setEnabled(false);
  // Edit->Selection->Unindent
  slctn_unindent = new QAction;
  slctn_unindent->setObjectName(QString::fromUtf8("action_edit_selection_unindent"));
  slctn_unindent->setText(QCoreApplication::translate("Selector->Actions", "&Unindent", "Action title"));
  #ifndef QT_NO_SHORTCUT
  slctn_unindent->setShortcut(QCoreApplication::translate("Selector->Actions", "Ctrl+U", nullptr));
  #endif // QT_NO_SHORTCUT
  slctn_unindent->setToolTip(QCoreApplication::translate("Selector->Actions", "Decrease indent", "Tool Tip item"));
  slctn_unindent->setStatusTip(QCoreApplication::translate("Selector->Actions", "Decrease indent of selected text", "Status Tip item"));
  slctn_unindent->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Decrease indent of selected text", "Whats This item"));
  slctn_unindent->setEnabled(false);
  // Edit->Selection->Uppercase
  slctn_uppercase = new QAction;
  slctn_uppercase->setObjectName(QString::fromUtf8("action_edit_selection_uppercase"));
  slctn_uppercase->setText(QCoreApplication::translate("Selector->Actions", "Upper&case", "Action title"));
  slctn_uppercase->setToolTip(QCoreApplication::translate("Selector->Actions", "To uppercase", "Tool Tip item"));
  slctn_uppercase->setStatusTip(QCoreApplication::translate("Selector->Actions", "Convert selected text to uppercase", "Status Tip item"));
  slctn_uppercase->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Convert selected text to uppercase", "Whats This item"));
  slctn_uppercase->setEnabled(false);
  // Edit->Selection->Lowercase
  slctn_lowercase = new QAction;
  slctn_lowercase->setObjectName(QString::fromUtf8("action_edit_selection_lowercase"));
  slctn_lowercase->setText(QCoreApplication::translate("Selector->Actions", "&Lowercase", "Action title"));
  slctn_lowercase->setToolTip(QCoreApplication::translate("Selector->Actions", "To lowercase", "Tool Tip item"));
  slctn_lowercase->setStatusTip(QCoreApplication::translate("Selector->Actions", "Convert selected text to lowercase", "Status Tip item"));
  slctn_lowercase->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Convert selected text to lowercase", "Whats This item"));
  slctn_lowercase->setEnabled(false);
  // Edit->Selection->Comment
  slctn_comment = new QAction;
  slctn_comment->setObjectName(QString::fromUtf8("action_edit_selection_comment"));
  slctn_comment->setText(QCoreApplication::translate("Selector->Actions", "C&omment", "Action title"));
  slctn_comment->setToolTip(QCoreApplication::translate("Selector->Actions", "To comment", "Tool Tip item"));
  slctn_comment->setStatusTip(QCoreApplication::translate("Selector->Actions", "Convert selected text to comment", "Status Tip item"));
  slctn_comment->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Convert text to comment", "Whats This item"));
  slctn_comment->setEnabled(false);
  // Edit->Selection->Uncomment
  slctn_uncomment = new QAction;
  slctn_uncomment->setObjectName(QString::fromUtf8("action_edit_selection_uncomment"));
  slctn_uncomment->setText(QCoreApplication::translate("Selector->Actions", "U&ncomment", "Action title"));
  slctn_uncomment->setToolTip(QCoreApplication::translate("Selector->Actions", "To uncomment", "Tool Tip item"));
  slctn_uncomment->setStatusTip(QCoreApplication::translate("Selector->Actions", "Convert selected text to uncomment", "Status Tip item"));
  slctn_uncomment->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Convert text to uncomment", "Whats This item"));
  slctn_uncomment->setEnabled(false);
  // Edit->Selection->Apply Syntax Case
  slctn_aplsyncase = new QAction;
  slctn_aplsyncase->setObjectName(QString::fromUtf8("action_edit_selection_aplsyncase"));
  slctn_aplsyncase->setText(QCoreApplication::translate("Selector->Actions", "&Apply Syntax Case", "Action title"));
  slctn_aplsyncase->setToolTip(QCoreApplication::translate("Selector->Actions", "Apply syntax case", "Tool Tip item"));
  slctn_aplsyncase->setStatusTip(QCoreApplication::translate("Selector->Actions", "Apply syntax case", "Status Tip item"));
  slctn_aplsyncase->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Apply syntax case", "Whats This item"));
  slctn_aplsyncase->setEnabled(false);
  // Edit->Selection->Sort
  slctn_sort = new QAction;
  slctn_sort->setObjectName(QString::fromUtf8("action_edit_selection_sort"));
  slctn_sort->setText(QCoreApplication::translate("Selector->Actions", "&Sort", "Action title"));
  slctn_sort->setToolTip(QCoreApplication::translate("Selector->Actions", "Sort selection", "Tool Tip item"));
  slctn_sort->setStatusTip(QCoreApplication::translate("Selector->Actions", "Sort selection", "Status Tip item"));
  slctn_sort->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Sort selection", "Whats This item"));
  slctn_sort->setEnabled(false);
  // Edit->Selection->Color Mark
  slctn_mark = new QAction;
  slctn_mark->setObjectName(QString::fromUtf8("action_edit_selection_mark"));
  slctn_mark->setText(QCoreApplication::translate("Selector->Actions", "Color &Mark", "Action title"));
  slctn_mark->setToolTip(QCoreApplication::translate("Selector->Actions", "Add color mark", "Tool Tip item"));
  slctn_mark->setStatusTip(QCoreApplication::translate("Selector->Actions", "Add color mark", "Status Tip item"));
  slctn_mark->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Add color mark", "Whats This item"));
  slctn_mark->setEnabled(false);
  // Edit->To-Do Items->Show List...
  todo_list = new QAction;
  todo_list->setObjectName(QString::fromUtf8("action_edit_todo_list"));
  todo_list->setText(QCoreApplication::translate("Selector->Actions", "&Show List...", "Action title"));
  todo_list->setToolTip(QCoreApplication::translate("Selector->Actions", "Show To-Do list", "Tool Tip item"));
  todo_list->setStatusTip(QCoreApplication::translate("Selector->Actions", "Show To-Do list", "Status Tip item"));
  todo_list->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Show To-Do list", "Whats This item"));
  todo_list->setEnabled(false);
  // Edit->To-Do Items->Add Item...
  todo_add = new QAction;
  todo_add->setObjectName(QString::fromUtf8("action_edit_todo_add"));
  todo_add->setText(QCoreApplication::translate("Selector->Actions", "&Add Item...", "Action title"));
  todo_add->setToolTip(QCoreApplication::translate("Selector->Actions", "Add new To_Do item", "Tool Tip item"));
  todo_add->setStatusTip(QCoreApplication::translate("Selector->Actions", "Add new To_Do item", "Status Tip item"));
  todo_add->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Add new To_Do item", "Whats This item"));
  todo_add->setEnabled(false);
  // Edit->To-Do Items->Edit Item...
  todo_edit = new QAction;
  todo_edit->setObjectName(QString::fromUtf8("action_edit_todo_edit"));
  todo_edit->setText(QCoreApplication::translate("Selector->Actions", "&Edit Item...", "Action title"));
  todo_edit->setToolTip(QCoreApplication::translate("Selector->Actions", "Edit To-Do item", "Tool Tip item"));
  todo_edit->setStatusTip(QCoreApplication::translate("Selector->Actions", "Edit To-Do item", "Status Tip item"));
  todo_edit->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Edit To-Do item", "Whats This item"));
  todo_edit->setEnabled(false);
  // Edit->To-Do Items->Close Item
  todo_close = new QAction;
  todo_close->setObjectName(QString::fromUtf8("action_edit_todo_close"));
  todo_close->setText(QCoreApplication::translate("Selector->Actions", "&Close Item", "Action title"));
  todo_close->setToolTip(QCoreApplication::translate("Selector->Actions", "Close To-Do item", "Tool Tip item"));
  todo_close->setStatusTip(QCoreApplication::translate("Selector->Actions", "Close To-Do item", "Status Tip item"));
  todo_close->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Close To-Do item", "Whats This item"));
  todo_close->setEnabled(false);
  // Edit->To-Do Items->Delete Item
  todo_del = new QAction;
  todo_del->setObjectName(QString::fromUtf8("action_edit_todo_del"));
  todo_del->setText(QCoreApplication::translate("Selector->Actions", "&Delete Item", "Action title"));
  todo_del->setToolTip(QCoreApplication::translate("Selector->Actions", "Delete To-Do item", "Tool Tip item"));
  todo_del->setStatusTip(QCoreApplication::translate("Selector->Actions", "Delete To-Do item", "Status Tip item"));
  todo_del->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Delete To-Do item", "Whats This item"));
  todo_del->setEnabled(false);
  // Edit->Find
  find = new QAction;
  find->setObjectName(QString::fromUtf8("action_edit_find"));
  find->setText(QCoreApplication::translate("Selector->Actions", "&Find", "Action title"));
  #ifndef QT_NO_SHORTCUT
  find->setShortcut(QCoreApplication::translate("Selector->Actions", "Ctrl+F", nullptr));
  #endif // QT_NO_SHORTCUT
  find->setToolTip(QCoreApplication::translate("Selector->Actions", "Find", "Tool Tip item"));
  find->setStatusTip(QCoreApplication::translate("Selector->Actions", "Find", "Status Tip item"));
  find->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Find", "Whats This item"));
  find->setEnabled(false);
  // Edit->Repeat Last Find
  repeat_find = new QAction;
  repeat_find->setObjectName(QString::fromUtf8("action_edit_repeat_find"));
  repeat_find->setText(QCoreApplication::translate("Selector->Actions", "Repeat &Last Find", "Action title"));
  #ifndef QT_NO_SHORTCUT
  repeat_find->setShortcut(QCoreApplication::translate("Selector->Actions", "Ctrl+L", nullptr));
  #endif // QT_NO_SHORTCUT
  repeat_find->setToolTip(QCoreApplication::translate("Selector->Actions", "Repeat last find", "Tool Tip item"));
  repeat_find->setStatusTip(QCoreApplication::translate("Selector->Actions", "Repeat last find", "Status Tip item"));
  repeat_find->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Repeat last find", "Whats This item"));
  repeat_find->setEnabled(false);
  // Edit->Replace
  replace = new QAction;
  replace->setObjectName(QString::fromUtf8("action_edit_replace"));
  replace->setText(QCoreApplication::translate("Selector->Actions", "Repl&ace", "Action title"));
  #ifndef QT_NO_SHORTCUT
  replace->setShortcut(QCoreApplication::translate("Selector->Actions", "Ctrl+P", nullptr));
  #endif // QT_NO_SHORTCUT
  replace->setToolTip(QCoreApplication::translate("Selector->Actions", "Find and replace", "Tool Tip item"));
  replace->setStatusTip(QCoreApplication::translate("Selector->Actions", "Find and replace pattern", "Status Tip item"));
  replace->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Find and replace pattern", "Whats This item"));
  replace->setEnabled(false);
  // Edit->Find Matches
  find_matches = new QAction;
  find_matches->setObjectName(QString::fromUtf8("action_edit_find_matches"));
  find_matches->setText(QCoreApplication::translate("Selector->Actions", "Find &Matches", "Action title"));
  #ifndef QT_NO_SHORTCUT
  find_matches->setShortcut(QCoreApplication::translate("Selector->Actions", "Ctrl+M", nullptr));
  #endif // QT_NO_SHORTCUT
  find_matches->setToolTip(QCoreApplication::translate("Selector->Actions", "Find matches", "Tool Tip item"));
  find_matches->setStatusTip(QCoreApplication::translate("Selector->Actions", "Find matches", "Status Tip item"));
  find_matches->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Find matches", "Whats This item"));
  find_matches->setEnabled(false);
  // Edit->Show Special Characters
  show_spec = new QAction;
  show_spec->setObjectName(QString::fromUtf8("action_edit_show_spec"));
  show_spec->setText(QCoreApplication::translate("Selector->Actions", "Show Special Characters", "Action title"));
  show_spec->setToolTip(QCoreApplication::translate("Selector->Actions", "Show cpecial characters", "Tool Tip item"));
  show_spec->setStatusTip(QCoreApplication::translate("Selector->Actions", "Show cpecial characters", "Status Tip item"));
  show_spec->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Show cpecial characters", "Whats This item"));
  show_spec->setCheckable(true);
  show_spec->setChecked(false);
  show_spec->setEnabled(false);
  // Edit->Code Folding
  code_folding = new QAction;
  code_folding->setObjectName(QString::fromUtf8("action_edit_code_folding"));
  code_folding->setText(QCoreApplication::translate("Selector->Actions", "Code Folding", "Action title"));
  code_folding->setToolTip(QCoreApplication::translate("Selector->Actions", "Enable/Disable code folding", "Tool Tip item"));
  code_folding->setStatusTip(QCoreApplication::translate("Selector->Actions", "Enable/Disable code folding", "Status Tip item"));
  code_folding->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Enable/Disable code folding", "Whats This item"));
  code_folding->setCheckable(true);
  code_folding->setChecked(false);
  code_folding->setEnabled(false);
  // Edit->Set Bookmark
  bookmark_set = new QAction;
  bookmark_set->setObjectName(QString::fromUtf8("action_edit_bookmark_set"));
  bookmark_set->setText(QCoreApplication::translate("Selector->Actions", "Set Book&makr", "Action title"));
  #ifndef QT_NO_SHORTCUT
  bookmark_set->setShortcut(QCoreApplication::translate("Selector->Actions", "Ctrl+K", nullptr));
  #endif // QT_NO_SHORTCUT
  bookmark_set->setToolTip(QCoreApplication::translate("Selector->Actions", "Set bookmark", "Tool Tip item"));
  bookmark_set->setStatusTip(QCoreApplication::translate("Selector->Actions", "Set bookmark", "Status Tip item"));
  bookmark_set->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Set bookmark", "Whats This item"));
  bookmark_set->setEnabled(false);
  // Edit->Go to Bookmark->Next
  bookmark_goto_next = new QAction;
  bookmark_goto_next->setObjectName(QString::fromUtf8("action_edit_bookmark_goto_next"));
  bookmark_goto_next->setText(QCoreApplication::translate("Selector->Actions", "&Next", "Action title"));
  bookmark_goto_next->setToolTip(QCoreApplication::translate("Selector->Actions", "Go to next bookmark", "Tool Tip item"));
  bookmark_goto_next->setStatusTip(QCoreApplication::translate("Selector->Actions", "Go to next bookmark", "Status Tip item"));
  bookmark_goto_next->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Go to next bookmark", "Whats This item"));
  bookmark_goto_next->setEnabled(false);
  // Edit->Go to Bookmark->Previous
  bookmark_goto_prev = new QAction;
  bookmark_goto_prev->setObjectName(QString::fromUtf8("action_edit_bookmark_goto_prev"));
  bookmark_goto_prev->setText(QCoreApplication::translate("Selector->Actions", "&Previous", "Action title"));
  bookmark_goto_prev->setToolTip(QCoreApplication::translate("Selector->Actions", "Go to previous bookmark", "Tool Tip item"));
  bookmark_goto_prev->setStatusTip(QCoreApplication::translate("Selector->Actions", "Go to previous bookmark", "Status Tip item"));
  bookmark_goto_prev->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Go to previous bookmark", "Whats This item"));
  bookmark_goto_prev->setEnabled(false);
  // Edit->Bookmark List
  bookmark_list = new QAction;
  bookmark_list->setObjectName(QString::fromUtf8("action_edit_bookmark_list"));
  bookmark_list->setText(QCoreApplication::translate("Selector->Actions", "Bookmakr List", "Action title"));
  bookmark_list->setToolTip(QCoreApplication::translate("Selector->Actions", "Open bookmark list", "Tool Tip item"));
  bookmark_list->setStatusTip(QCoreApplication::translate("Selector->Actions", "Open bookmark list", "Status Tip item"));
  bookmark_list->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Open bookmark list", "Whats This item"));
  bookmark_list->setEnabled(false);
  // Edit->Go to Line
  go_to = new QAction;
  go_to->setObjectName(QString::fromUtf8("action_edit_goto"));
  go_to->setText(QCoreApplication::translate("Selector->Actions", "&Go to Line", "Action title"));
  #ifndef QT_NO_SHORTCUT
  go_to->setShortcut(QCoreApplication::translate("Selector->Actions", "Ctrl+G", nullptr));
  #endif // QT_NO_SHORTCUT
  go_to->setToolTip(QCoreApplication::translate("Selector->Actions", "Jump to line", "Tool Tip item"));
  go_to->setStatusTip(QCoreApplication::translate("Selector->Actions", "Jump to line", "Status Tip item"));
  go_to->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Jump to line", "Whats This item"));
  go_to->setEnabled(false);
  // Edit->Next Tab Page
  next_tab = new QAction;
  next_tab->setObjectName(QString::fromUtf8("action_edit_next_tab"));
  next_tab->setText(QCoreApplication::translate("Selector->Actions", "&Next Tab Page", "Action title"));
  #ifndef QT_NO_SHORTCUT
  next_tab->setShortcut(QCoreApplication::translate("Selector->Actions", "Ctrl+H", nullptr));
  #endif // QT_NO_SHORTCUT
  next_tab->setToolTip(QCoreApplication::translate("Selector->Actions", "Switch to next tab page", "Tool Tip item"));
  next_tab->setStatusTip(QCoreApplication::translate("Selector->Actions", "Switch to next tab page", "Status Tip item"));
  next_tab->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Switch to next tab page", "Whats This item"));
  next_tab->setEnabled(false);
  // Edit->Previous Tab Page
  prev_tab = new QAction;
  prev_tab->setObjectName(QString::fromUtf8("action_edit_prev_tab"));
  prev_tab->setText(QCoreApplication::translate("Selector->Actions", "&Previous Tab Page", "Action title"));
  #ifndef QT_NO_SHORTCUT
  prev_tab->setShortcut(QCoreApplication::translate("Selector->Actions", "Shift+Ctrl+H", nullptr));
  #endif // QT_NO_SHORTCUT
  prev_tab->setToolTip(QCoreApplication::translate("Selector->Actions", "Switch to previous tab page", "Tool Tip item"));
  prev_tab->setStatusTip(QCoreApplication::translate("Selector->Actions", "Switch to previous tab page", "Status Tip item"));
  prev_tab->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Switch to previous tab page", "Whats This item"));
  prev_tab->setEnabled(false);
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

session_actions::session_actions()
{
  // Session->Log on
  lon = new QAction;
  lon->setObjectName(QString::fromUtf8("action_session_logon"));
  lon->setText(QCoreApplication::translate("Selector->Actions", "&Log on...", "Action title"));
  lon->setToolTip(QCoreApplication::translate("Selector->Actions", "Log on", "Tool Tip item"));
  lon->setStatusTip(QCoreApplication::translate("Selector->Actions", "Create a new connection to the remote server", "Status Tip item"));
  lon->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Create a new connection to the remote server", "Whats This item"));
  lon->setIcon(QPixmap(":/icons/login.png"));
  // Session->Log off
  loff = new QAction;
  loff->setObjectName(QString::fromUtf8("action_session_logoff"));
  loff->setText(QCoreApplication::translate("Selector->Actions", "Log &off", "Action title"));
  loff->setToolTip(QCoreApplication::translate("Selector->Actions", "Log off", "Tool Tip item"));
  loff->setStatusTip(QCoreApplication::translate("Selector->Actions", "Complete work and break connection with database", "Status Tip item"));
  loff->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Complete work and break connection with database", "Whats This item"));
  loff->setEnabled(false);
  // Session->Execute
  exe = new QAction;
  exe->setObjectName(QString::fromUtf8("action_session_execute"));
  exe->setText(QCoreApplication::translate("Selector->Actions", "&Execute", "Action title"));
  #ifndef QT_NO_SHORTCUT
  exe->setShortcut(QCoreApplication::translate("Selector->Actions", "F8", nullptr));
  #endif // QT_NO_SHORTCUT
  exe->setToolTip(QCoreApplication::translate("Selector->Actions", "Execute", "Tool Tip item"));
  exe->setStatusTip(QCoreApplication::translate("Selector->Actions", "Execute program or script", "Status Tip item"));
  exe->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Execute program or script", "Whats This item"));
  exe->setIcon(QPixmap(":/icons/execute.png"));
  exe->setEnabled(false);
  // Session->Break
  brk = new QAction;
  brk->setObjectName(QString::fromUtf8("action_session_break"));
  brk->setText(QCoreApplication::translate("Selector->Actions", "&Break", "Action title"));
  #ifndef QT_NO_SHORTCUT
  brk->setShortcut(QCoreApplication::translate("Selector->Actions", "Shift+Esc", nullptr));
  #endif // QT_NO_SHORTCUT
  brk->setToolTip(QCoreApplication::translate("Selector->Actions", "Break", "Tool Tip item"));
  brk->setStatusTip(QCoreApplication::translate("Selector->Actions", "Break program or script execution", "Status Tip item"));
  brk->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Break program or script execution", "Whats This item"));
  brk->setIcon(QPixmap(":/icons/abort.png"));
  brk->setEnabled(false);
  // Session->Kill
  kll = new QAction;
  kll->setObjectName(QString::fromUtf8("action_session_kill"));
  kll->setText(QCoreApplication::translate("Selector->Actions", "&Kill", "Action title"));
  kll->setToolTip(QCoreApplication::translate("Selector->Actions", "Kill session", "Tool Tip item"));
  kll->setStatusTip(QCoreApplication::translate("Selector->Actions", "Abort script or program execution and break session", "Status Tip item"));
  kll->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Abort script or program execution and break session", "Whats This item"));
  kll->setEnabled(false);
  // Session->Commit
  cmmt = new QAction;
  cmmt->setObjectName(QString::fromUtf8("action_session_commit"));
  cmmt->setText(QCoreApplication::translate("Selector->Actions", "&Commit", "Action title"));
  #ifndef QT_NO_SHORTCUT
  cmmt->setShortcut(QCoreApplication::translate("Selector->Actions", "F10", nullptr));
  #endif // QT_NO_SHORTCUT
  cmmt->setToolTip(QCoreApplication::translate("Selector->Actions", "Commit", "Tool Tip item"));
  cmmt->setStatusTip(QCoreApplication::translate("Selector->Actions", "Commit current transaction", "Status Tip item"));
  cmmt->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Commit current transaction", "Whats This item"));
  cmmt->setIcon(QPixmap(":/icons/commit.png"));
  cmmt->setEnabled(false);
  // Session->Rollback
  rllbck = new QAction;
  rllbck->setObjectName(QString::fromUtf8("action_session_rollback"));
  rllbck->setText(QCoreApplication::translate("Selector->Actions", "&Rollback", "Action title"));
  #ifndef QT_NO_SHORTCUT
  rllbck->setShortcut(QCoreApplication::translate("Selector->Actions", "Shift+F10", nullptr));
  #endif // QT_NO_SHORTCUT
  rllbck->setToolTip(QCoreApplication::translate("Selector->Actions", "Rollback", "Tool Tip item"));
  rllbck->setStatusTip(QCoreApplication::translate("Selector->Actions", "Rollback current transaction", "Status Tip item"));
  rllbck->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Rollback current transaction", "Whats This item"));
  rllbck->setIcon(QPixmap(":/icons/rollback.png"));
  rllbck->setEnabled(false);
  // Session->SQL Trace
  trce = new QAction;
  trce->setObjectName(QString::fromUtf8("action_session_trace"));
  trce->setText(QCoreApplication::translate("Selector->Actions", "SQL &Trace", "Action title"));
  trce->setToolTip(QCoreApplication::translate("Selector->Actions", "Run SQL trace", "Tool Tip item"));
  trce->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run SQL trace", "Status Tip item"));
  trce->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run SQL trace", "Whats This item"));
  trce->setEnabled(false);
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

debug_actions::debug_actions()
{
  // Debug->Toggle Breakpoint
  breakpoint = new QAction;
  breakpoint->setObjectName(QString::fromUtf8("action_debug_breakpoint"));
  breakpoint->setText(QCoreApplication::translate("Selector->Actions", "Toggle &Breakpoint", "Action title"));
  #ifndef QT_NO_SHORTCUT
  breakpoint->setShortcut(QCoreApplication::translate("Selector->Actions", "Ctrl+B", nullptr));
  #endif // QT_NO_SHORTCUT
  breakpoint->setToolTip(QCoreApplication::translate("Selector->Actions", "Toggle breakpoint", "Tool Tip item"));
  breakpoint->setStatusTip(QCoreApplication::translate("Selector->Actions", "Toggle breakpoint", "Status Tip item"));
  breakpoint->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Toggle breakpoint", "Whats This item"));
  breakpoint->setEnabled(false);
  // Debug->Modify Breakpoints...
  mod_brkpnts = new QAction;
  mod_brkpnts->setObjectName(QString::fromUtf8("action_debug_mod_brkpnts"));
  mod_brkpnts->setText(QCoreApplication::translate("Selector->Actions", "&Modify Breakpoints...", "Action title"));
  mod_brkpnts->setToolTip(QCoreApplication::translate("Selector->Actions", "Modify breakpoints", "Tool Tip item"));
  mod_brkpnts->setStatusTip(QCoreApplication::translate("Selector->Actions", "Modify breakpoints", "Status Tip item"));
  mod_brkpnts->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Modify breakpoints", "Whats This item"));
  mod_brkpnts->setEnabled(false);
  // Debug->Start
  start = new QAction;
  start->setObjectName(QString::fromUtf8("action_debug_start"));
  start->setText(QCoreApplication::translate("Selector->Actions", "&Start", "Action title"));
  #ifndef QT_NO_SHORTCUT
  start->setShortcut(QCoreApplication::translate("Selector->Actions", "F9", nullptr));
  #endif // QT_NO_SHORTCUT
  start->setToolTip(QCoreApplication::translate("Selector->Actions", "Start debugger", "Tool Tip item"));
  start->setStatusTip(QCoreApplication::translate("Selector->Actions", "Start debugger", "Status Tip item"));
  start->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Start debugger", "Whats This item"));
  start->setEnabled(false);
  // Debug->Run
  run = new QAction;
  run->setObjectName(QString::fromUtf8("action_debug_run"));
  run->setText(QCoreApplication::translate("Selector->Actions", "&Run", "Action title"));
  #ifndef QT_NO_SHORTCUT
  run->setShortcut(QCoreApplication::translate("Selector->Actions", "Ctrl+R", nullptr));
  #endif // QT_NO_SHORTCUT
  run->setToolTip(QCoreApplication::translate("Selector->Actions", "Run program", "Tool Tip item"));
  run->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run program", "Status Tip item"));
  run->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run program", "Whats This item"));
  run->setEnabled(false);
  // Debug->Step Into
  step_into = new QAction;
  step_into->setObjectName(QString::fromUtf8("action_debug_step_into"));
  step_into->setText(QCoreApplication::translate("Selector->Actions", "Step &Into", "Action title"));
  #ifndef QT_NO_SHORTCUT
  step_into->setShortcut(QCoreApplication::translate("Selector->Actions", "Ctrl+N", nullptr));
  #endif // QT_NO_SHORTCUT
  step_into->setToolTip(QCoreApplication::translate("Selector->Actions", "Step into", "Tool Tip item"));
  step_into->setStatusTip(QCoreApplication::translate("Selector->Actions", "Step into", "Status Tip item"));
  step_into->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Step into", "Whats This item"));
  step_into->setEnabled(false);
  // Debug->Step Over
  step_over = new QAction;
  step_over->setObjectName(QString::fromUtf8("action_debug_step_over"));
  step_over->setText(QCoreApplication::translate("Selector->Actions", "Step &Over", "Action title"));
  #ifndef QT_NO_SHORTCUT
  step_over->setShortcut(QCoreApplication::translate("Selector->Actions", "Ctrl+O", nullptr));
  #endif // QT_NO_SHORTCUT
  step_over->setToolTip(QCoreApplication::translate("Selector->Actions", "Step over", "Tool Tip item"));
  step_over->setStatusTip(QCoreApplication::translate("Selector->Actions", "Step over", "Status Tip item"));
  step_over->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Step over", "Whats This item"));
  step_over->setEnabled(false);
  // Debug->Step Out
  step_out = new QAction;
  step_out->setObjectName(QString::fromUtf8("action_debug_step_out"));
  step_out->setText(QCoreApplication::translate("Selector->Actions", "Step Ou&t", "Action title"));
  #ifndef QT_NO_SHORTCUT
  step_out->setShortcut(QCoreApplication::translate("Selector->Actions", "Ctrl+T", nullptr));
  #endif // QT_NO_SHORTCUT
  step_out->setToolTip(QCoreApplication::translate("Selector->Actions", "Step out", "Tool Tip item"));
  step_out->setStatusTip(QCoreApplication::translate("Selector->Actions", "Step out", "Status Tip item"));
  step_out->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Step out", "Whats This item"));
  step_out->setEnabled(false);
  // Debug->Run to Exception
  cont = new QAction;
  cont->setObjectName(QString::fromUtf8("action_debug_continue"));
  cont->setText(QCoreApplication::translate("Selector->Actions", "Run to &Exception", "Action title"));
  cont->setToolTip(QCoreApplication::translate("Selector->Actions", "Continue", "Tool Tip item"));
  cont->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run to exception", "Status Tip item"));
  cont->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run to exception", "Whats This item"));
  cont->setEnabled(false);
  // Debug->Set Variable...
  set_var = new QAction;
  set_var->setObjectName(QString::fromUtf8("action_debug_var"));
  set_var->setText(QCoreApplication::translate("Selector->Actions", "Set &Variable...", "Action title"));
  set_var->setToolTip(QCoreApplication::translate("Selector->Actions", "Set variable", "Tool Tip item"));
  set_var->setStatusTip(QCoreApplication::translate("Selector->Actions", "Set variable", "Status Tip item"));
  set_var->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Set variable", "Whats This item"));
  set_var->setEnabled(false);
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

tools_actions::tools_actions()
{
  // Tools->Preferences...
  pref = new QAction;
  pref->setObjectName(QString::fromUtf8("action_tools_pref"));
  pref->setText(QCoreApplication::translate("Selector->Actions", "&Preferences...", "Action title"));
  pref->setToolTip(QCoreApplication::translate("Selector->Actions", "Preferences", "Tool Tip item"));
  pref->setStatusTip(QCoreApplication::translate("Selector->Actions", "Preferences", "Status Tip item"));
  pref->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Preferences", "Whats This item"));
  // Tools->Configure Plug-Ins...
  cfgplgns = new QAction;
  cfgplgns->setObjectName(QString::fromUtf8("action_tools_cfgplgns"));
  cfgplgns->setText(QCoreApplication::translate("Selector->Actions", "Configure Plug-Ins...", "Action title"));
  cfgplgns->setToolTip(QCoreApplication::translate("Selector->Actions", "Configure plug-ins", "Tool Tip item"));
  cfgplgns->setStatusTip(QCoreApplication::translate("Selector->Actions", "Configure plug-ins", "Status Tip item"));
  cfgplgns->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Configure plug-ins", "Whats This item"));
  cfgplgns->setEnabled(false);
  // Tools->Configure Tools...
  cfgtools = new QAction;
  cfgtools->setObjectName(QString::fromUtf8("action_tools_cfgtools"));
  cfgtools->setText(QCoreApplication::translate("Selector->Actions", "Configure T&ools...", "Action title"));
  cfgtools->setToolTip(QCoreApplication::translate("Selector->Actions", "Configure tools", "Tool Tip item"));
  cfgtools->setStatusTip(QCoreApplication::translate("Selector->Actions", "Configure tools", "Status Tip item"));
  cfgtools->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Configure tools", "Whats This item"));
  cfgtools->setEnabled(false);
  // Tools->Configure Documents...
  cfgdocs = new QAction;
  cfgdocs->setObjectName(QString::fromUtf8("action_tools_cfgdocs"));
  cfgdocs->setText(QCoreApplication::translate("Selector->Actions", "Configure &Documents...", "Action title"));
  cfgdocs->setToolTip(QCoreApplication::translate("Selector->Actions", "Configure documents", "Tool Tip item"));
  cfgdocs->setStatusTip(QCoreApplication::translate("Selector->Actions", "Configure documents", "Status Tip item"));
  cfgdocs->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Configure documents", "Whats This item"));
  cfgdocs->setEnabled(false);
  // Tools->Configure Reports...
  cfgreps = new QAction;
  cfgreps->setObjectName(QString::fromUtf8("action_tools_cfgreps"));
  cfgreps->setText(QCoreApplication::translate("Selector->Actions", "Configure &Reports...", "Action title"));
  cfgreps->setToolTip(QCoreApplication::translate("Selector->Actions", "Configure reports", "Tool Tip item"));
  cfgreps->setStatusTip(QCoreApplication::translate("Selector->Actions", "Configure reports", "Status Tip item"));
  cfgreps->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Configure reports", "Whats This item"));
  cfgreps->setEnabled(false);
  // Tools->Macro->Record
  macro_rec = new QAction;
  macro_rec->setObjectName(QString::fromUtf8("action_tools_macro_rec"));
  macro_rec->setText(QCoreApplication::translate("Selector->Actions", "&Record", "Action title"));
  #ifndef QT_NO_SHORTCUT
  macro_rec->setShortcut(QCoreApplication::translate("Selector->Actions", "F11", nullptr));
  #endif // QT_NO_SHORTCUT
  macro_rec->setToolTip(QCoreApplication::translate("Selector->Actions", "Record macro", "Tool Tip item"));
  macro_rec->setStatusTip(QCoreApplication::translate("Selector->Actions", "Record macro", "Status Tip item"));
  macro_rec->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Record macro", "Whats This item"));
  macro_rec->setEnabled(false);
  // Tools->Macro->Playback
  macro_play = new QAction;
  macro_play->setObjectName(QString::fromUtf8("action_tools_macro_play"));
  macro_play->setText(QCoreApplication::translate("Selector->Actions", "&Playback", "Action title"));
  #ifndef QT_NO_SHORTCUT
  macro_play->setShortcut(QCoreApplication::translate("Selector->Actions", "F12", nullptr));
  #endif // QT_NO_SHORTCUT
  macro_play->setToolTip(QCoreApplication::translate("Selector->Actions", "Playback macro", "Tool Tip item"));
  macro_play->setStatusTip(QCoreApplication::translate("Selector->Actions", "Playback macro", "Status Tip item"));
  macro_play->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Playback macro", "Whats This item"));
  macro_play->setEnabled(false);
  // Tools->Macro->Library...
  macro_lib = new QAction;
  macro_lib->setObjectName(QString::fromUtf8("action_tools_macro_lib"));
  macro_lib->setText(QCoreApplication::translate("Selector->Actions", "&Library...", "Action title"));
  macro_lib->setToolTip(QCoreApplication::translate("Selector->Actions", "Open macro library", "Tool Tip item"));
  macro_lib->setStatusTip(QCoreApplication::translate("Selector->Actions", "Open macro library", "Status Tip item"));
  macro_lib->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Open macro library", "Whats This item"));
  macro_lib->setEnabled(false);
  // Tools->Browser Folders...
  brodir = new QAction;
  brodir->setObjectName(QString::fromUtf8("action_tools_brodir"));
  brodir->setText(QCoreApplication::translate("Selector->Actions", "Browser &Folders...", "Action title"));
  brodir->setToolTip(QCoreApplication::translate("Selector->Actions", "Open browser folders", "Tool Tip item"));
  brodir->setStatusTip(QCoreApplication::translate("Selector->Actions", "Open browser folders", "Status Tip item"));
  brodir->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Open browser folders", "Whats This item"));
  brodir->setEnabled(false);
  // Tools->Browser Filters...
  brofil = new QAction;
  brofil->setObjectName(QString::fromUtf8("action_tools_brofil"));
  brofil->setText(QCoreApplication::translate("Selector->Actions", "Browser F&ilters...", "Action title"));
  brofil->setToolTip(QCoreApplication::translate("Selector->Actions", "Open browser filters", "Tool Tip item"));
  brofil->setStatusTip(QCoreApplication::translate("Selector->Actions", "Open browser filters", "Status Tip item"));
  brofil->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Open browser filters", "Whats This item"));
  brofil->setEnabled(false);
  // Tools->Template List
  tmpl = new QAction;
  tmpl->setObjectName(QString::fromUtf8("action_tools_tmpl"));
  tmpl->setText(QCoreApplication::translate("Selector->Actions", "T&emplate List", "Action title"));
  tmpl->setToolTip(QCoreApplication::translate("Selector->Actions", "Open template list", "Tool Tip item"));
  tmpl->setStatusTip(QCoreApplication::translate("Selector->Actions", "Open template list", "Status Tip item"));
  tmpl->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Open template list", "Whats This item"));
  tmpl->setCheckable(true);
  tmpl->setChecked(false);
  tmpl->setEnabled(false);
  // Tools->Toolbar
  tlbr = new QAction;
  tlbr->setObjectName(QString::fromUtf8("action_tools_tlbr"));
  tlbr->setText(QCoreApplication::translate("Selector->Actions", "Toolbar", "Action title"));
  tlbr->setToolTip(QCoreApplication::translate("Selector->Actions", "Show toolbars", "Tool Tip item"));
  tlbr->setStatusTip(QCoreApplication::translate("Selector->Actions", "Show toolbars", "Status Tip item"));
  tlbr->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Show toolbars", "Whats This item"));
  tlbr->setCheckable(true);
  tlbr->setChecked(true);
  // Tools->Explain Plan
  expln = new QAction;
  expln->setObjectName(QString::fromUtf8("action_tools_expln"));
  expln->setText(QCoreApplication::translate("Selector->Actions", "E&xplain Plan", "Action title"));
  #ifndef QT_NO_SHORTCUT
  expln->setShortcut(QCoreApplication::translate("Selector->Actions", "F5", nullptr));
  #endif // QT_NO_SHORTCUT
  expln->setToolTip(QCoreApplication::translate("Selector->Actions", "Run explain plan command", "Tool Tip item"));
  expln->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run explain plan command", "Status Tip item"));
  expln->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run explain plan command", "Whats This item"));
  expln->setEnabled(false);
  // Tools->Code Assistant
  astnt = new QAction;
  astnt->setObjectName(QString::fromUtf8("action_tools_astnt"));
  astnt->setText(QCoreApplication::translate("Selector->Actions", "Code &Assistant", "Action title"));
  #ifndef QT_NO_SHORTCUT
  astnt->setShortcut(QCoreApplication::translate("Selector->Actions", "F6", nullptr));
  #endif // QT_NO_SHORTCUT
  astnt->setToolTip(QCoreApplication::translate("Selector->Actions", "Run code assistant", "Tool Tip item"));
  astnt->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run code assistant", "Status Tip item"));
  astnt->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run code assistant", "Whats This item"));
  astnt->setEnabled(false);
  // Tools->Code Contents
  cntnts = new QAction;
  cntnts->setObjectName(QString::fromUtf8("action_tools_cntnts"));
  cntnts->setText(QCoreApplication::translate("Selector->Actions", "&Code Contents", "Action title"));
  cntnts->setToolTip(QCoreApplication::translate("Selector->Actions", "Show code contents", "Tool Tip item"));
  cntnts->setStatusTip(QCoreApplication::translate("Selector->Actions", "Show code contents", "Status Tip item"));
  cntnts->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Show code contents", "Whats This item"));
  cntnts->setEnabled(false);
  // Tools->Show Compiler Hints
  shnts = new QAction;
  shnts->setObjectName(QString::fromUtf8("action_tools_chnts"));
  shnts->setText(QCoreApplication::translate("Selector->Actions", "Show Compiler &Hints", "Action title"));
  shnts->setToolTip(QCoreApplication::translate("Selector->Actions", "Show compiler hints", "Tool Tip item"));
  shnts->setStatusTip(QCoreApplication::translate("Selector->Actions", "Show compiler hints", "Status Tip item"));
  shnts->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Show compiler hints", "Whats This item"));
  shnts->setEnabled(false);
  // Tools->Query Builder...
  qbldr = new QAction;
  qbldr->setObjectName(QString::fromUtf8("action_tools_qbldr"));
  qbldr->setText(QCoreApplication::translate("Selector->Actions", "&Query Builder...", "Action title"));
  qbldr->setToolTip(QCoreApplication::translate("Selector->Actions", "Run query builder", "Tool Tip item"));
  qbldr->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run query builder", "Status Tip item"));
  qbldr->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run query builder", "Whats This item"));
  qbldr->setEnabled(false);
  // Tools->Find Database Objects...
  fdbo = new QAction;
  fdbo->setObjectName(QString::fromUtf8("action_tools_fdbo"));
  fdbo->setText(QCoreApplication::translate("Selector->Actions", "Find &Database Objects...", "Action title"));
  fdbo->setToolTip(QCoreApplication::translate("Selector->Actions", "Execute search under database objects", "Tool Tip item"));
  fdbo->setStatusTip(QCoreApplication::translate("Selector->Actions", "Execute search under database objects", "Status Tip item"));
  fdbo->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Execute search under database objects", "Whats This item"));
  fdbo->setEnabled(false);
  // Tools->Compile Invalide Objects...
  cpinv = new QAction;
  cpinv->setObjectName(QString::fromUtf8("action_tools_cpinv"));
  cpinv->setText(QCoreApplication::translate("Selector->Actions", "Compile I&nvalid Objects...", "Action title"));
  cpinv->setToolTip(QCoreApplication::translate("Selector->Actions", "Compile invalide objects", "Tool Tip item"));
  cpinv->setStatusTip(QCoreApplication::translate("Selector->Actions", "Compile invalide objects", "Status Tip item"));
  cpinv->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Compile invalide objects", "Whats This item"));
  cpinv->setEnabled(false);
  // Tools->Export User Objects...
  expobj = new QAction;
  expobj->setObjectName(QString::fromUtf8("action_tools_expobj"));
  expobj->setText(QCoreApplication::translate("Selector->Actions", "Export &User Objects...", "Action title"));
  expobj->setToolTip(QCoreApplication::translate("Selector->Actions", "Export user objects", "Tool Tip item"));
  expobj->setStatusTip(QCoreApplication::translate("Selector->Actions", "Export user objects", "Status Tip item"));
  expobj->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Export user objects", "Whats This item"));
  expobj->setEnabled(false);
  // Tools->Compare User Objects...
  cmpobj = new QAction;
  cmpobj->setObjectName(QString::fromUtf8("action_tools_cmpobj"));
  cmpobj->setText(QCoreApplication::translate("Selector->Actions", "Compare User O&bjects...", "Action title"));
  cmpobj->setToolTip(QCoreApplication::translate("Selector->Actions", "Compare user objects", "Tool Tip item"));
  cmpobj->setStatusTip(QCoreApplication::translate("Selector->Actions", "Compare user objects", "Status Tip item"));
  cmpobj->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Compare user objects", "Whats This item"));
  cmpobj->setEnabled(false);
  // Tools->Event Monitor...
  emon = new QAction;
  emon->setObjectName(QString::fromUtf8("action_tools_emon"));
  emon->setText(QCoreApplication::translate("Selector->Actions", "E&vent Monitor...", "Action title"));
  emon->setToolTip(QCoreApplication::translate("Selector->Actions", "Run event monitor", "Tool Tip item"));
  emon->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run event monitor", "Status Tip item"));
  emon->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run event monitor", "Whats This item"));
  emon->setEnabled(false);
  // Tools->Sessions...
  sessns = new QAction;
  sessns->setObjectName(QString::fromUtf8("action_tools_sessns"));
  sessns->setText(QCoreApplication::translate("Selector->Actions", "&Sessions...", "Action title"));
  sessns->setToolTip(QCoreApplication::translate("Selector->Actions", "Show sessions", "Tool Tip item"));
  sessns->setStatusTip(QCoreApplication::translate("Selector->Actions", "Show sessions", "Status Tip item"));
  sessns->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Show sessions", "Whats This item"));
  sessns->setEnabled(false);
  // Tools->Test Manager...
  tstmngr = new QAction;
  tstmngr->setObjectName(QString::fromUtf8("action_tools_tstmngr"));
  tstmngr->setText(QCoreApplication::translate("Selector->Actions", "Test Manager...", "Action title"));
  tstmngr->setToolTip(QCoreApplication::translate("Selector->Actions", "Show test manager", "Tool Tip item"));
  tstmngr->setStatusTip(QCoreApplication::translate("Selector->Actions", "Show test manager", "Status Tip item"));
  tstmngr->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Show test manager", "Whats This item"));
  tstmngr->setEnabled(false);
  // Tools->Export Tables...
  exptbls = new QAction;
  exptbls->setObjectName(QString::fromUtf8("action_tools_exptbls"));
  exptbls->setText(QCoreApplication::translate("Selector->Actions", "E&xport Tables...", "Action title"));
  exptbls->setToolTip(QCoreApplication::translate("Selector->Actions", "Run export tables tool", "Tool Tip item"));
  exptbls->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run export tables tool", "Status Tip item"));
  exptbls->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run export tables tool", "Whats This item"));
  exptbls->setEnabled(false);
  // Tools->Import Tables...
  imptbls = new QAction;
  imptbls->setObjectName(QString::fromUtf8("action_tools_imptbls"));
  imptbls->setText(QCoreApplication::translate("Selector->Actions", "Import Tables...", "Action title"));
  imptbls->setToolTip(QCoreApplication::translate("Selector->Actions", "Run import tables tool", "Tool Tip item"));
  imptbls->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run import tables tool", "Status Tip item"));
  imptbls->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run import tables tool", "Whats This item"));
  imptbls->setEnabled(false);
  // Tools->Compare Table Data...
  cmptbld = new QAction;
  cmptbld->setObjectName(QString::fromUtf8("action_tools_cmptbld"));
  cmptbld->setText(QCoreApplication::translate("Selector->Actions", "Compare &Table Data...", "Action title"));
  cmptbld->setToolTip(QCoreApplication::translate("Selector->Actions", "Run compare tables data tool", "Tool Tip item"));
  cmptbld->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run compare tables data tool", "Status Tip item"));
  cmptbld->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run compare tables data tool", "Whats This item"));
  cmptbld->setEnabled(false);
  // Tools->Text Importer...
  imptxt = new QAction;
  imptxt->setObjectName(QString::fromUtf8("action_tools_imptxt"));
  imptxt->setText(QCoreApplication::translate("Selector->Actions", "Text Importer...", "Action title"));
  imptxt->setToolTip(QCoreApplication::translate("Selector->Actions", "Run text importer", "Tool Tip item"));
  imptxt->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run text importer", "Status Tip item"));
  imptxt->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run text importer", "Whats This item"));
  imptxt->setEnabled(false);
  // Tools->ODBC Importer...
  impODBC = new QAction;
  impODBC->setObjectName(QString::fromUtf8("action_tools_impODBC"));
  impODBC->setText(QCoreApplication::translate("Selector->Actions", "ODBC Importer...", "Action title"));
  impODBC->setToolTip(QCoreApplication::translate("Selector->Actions", "Run ODBC importer", "Tool Tip item"));
  impODBC->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run ODBC importer", "Status Tip item"));
  impODBC->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run ODBC importer", "Whats This item"));
  impODBC->setEnabled(false);
  // Tools->Data Generator...
  gendat = new QAction;
  gendat->setObjectName(QString::fromUtf8("action_tools_gendat"));
  gendat->setText(QCoreApplication::translate("Selector->Actions", "Data &Generator...", "Action title"));
  gendat->setToolTip(QCoreApplication::translate("Selector->Actions", "Run data generator", "Tool Tip item"));
  gendat->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run data generator", "Status Tip item"));
  gendat->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run data generator", "Whats This item"));
  gendat->setEnabled(false);
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

report_actions::report_actions()
{
  // Reports->DBA->Initialization Parameters
  dba_initpar = new QAction;
  dba_initpar->setObjectName(QString::fromUtf8("action_reps_dba_initpar"));
  dba_initpar->setText(QCoreApplication::translate("Selector->Actions", "Initialization Parameters", "Action title"));
  dba_initpar->setToolTip(QCoreApplication::translate("Selector->Actions", "Run report \"Database initialization parameters\"", "Tool Tip item"));
  dba_initpar->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run report \"Database initialization parameters\"", "Status Tip item"));
  dba_initpar->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run report \"Database initialization parameters\"", "Whats This item"));
  dba_initpar->setEnabled(false);
  // Reports->DBA->NLS Database Parameters
  dba_nlspar = new QAction;
  dba_nlspar->setObjectName(QString::fromUtf8("action_reps_dba_nlspar"));
  dba_nlspar->setText(QCoreApplication::translate("Selector->Actions", "NLS Database Parameters", "Action title"));
  dba_nlspar->setToolTip(QCoreApplication::translate("Selector->Actions", "Run report \"NLS database parameters\"", "Tool Tip item"));
  dba_nlspar->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run report \"NLS database parameters\"", "Status Tip item"));
  dba_nlspar->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run report \"NLS database parameters\"", "Whats This item"));
  dba_nlspar->setEnabled(false);
  // Reports->DBA->Role Privileges
  dba_rolprv = new QAction;
  dba_rolprv->setObjectName(QString::fromUtf8("action_reps_dba_rolprv"));
  dba_rolprv->setText(QCoreApplication::translate("Selector->Actions", "Role Privileges", "Action title"));
  dba_rolprv->setToolTip(QCoreApplication::translate("Selector->Actions", "Run report \"Role privileges\"", "Tool Tip item"));
  dba_rolprv->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run report \"Role privileges\"", "Status Tip item"));
  dba_rolprv->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run report \"Role privileges\"", "Whats This item"));
  dba_rolprv->setEnabled(false);
  // Reports->DBA->Roles
  dba_rol = new QAction;
  dba_rol->setObjectName(QString::fromUtf8("action_reps_dba_rol"));
  dba_rol->setText(QCoreApplication::translate("Selector->Actions", "Roles", "Action title"));
  dba_rol->setToolTip(QCoreApplication::translate("Selector->Actions", "Run report \"Roles\"", "Tool Tip item"));
  dba_rol->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run report \"Roles\"", "Status Tip item"));
  dba_rol->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run report \"Roles\"", "Whats This item"));
  dba_rol->setEnabled(false);
  // Reports->DBA->Rollback Segments
  dba_rlbseg = new QAction;
  dba_rlbseg->setObjectName(QString::fromUtf8("action_reps_dba_rlbseg"));
  dba_rlbseg->setText(QCoreApplication::translate("Selector->Actions", "Rollback Segments", "Action title"));
  dba_rlbseg->setToolTip(QCoreApplication::translate("Selector->Actions", "Run report \"Rollback segments\"", "Tool Tip item"));
  dba_rlbseg->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run report \"Rollback segments\"", "Status Tip item"));
  dba_rlbseg->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run report \"Rollback segments\"", "Whats This item"));
  dba_rlbseg->setEnabled(false);
  // Reports->DBA->Server Components
  dba_srvcom = new QAction;
  dba_srvcom->setObjectName(QString::fromUtf8("action_reps_dba_srvcom"));
  dba_srvcom->setText(QCoreApplication::translate("Selector->Actions", "Server Components", "Action title"));
  dba_srvcom->setToolTip(QCoreApplication::translate("Selector->Actions", "Run report \"Server components\"", "Tool Tip item"));
  dba_srvcom->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run report \"Server components\"", "Status Tip item"));
  dba_srvcom->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run report \"Server components\"", "Whats This item"));
  dba_srvcom->setEnabled(false);
  // Reports->DBA->System Priveleges
  dba_sysprv = new QAction;
  dba_sysprv->setObjectName(QString::fromUtf8("action_reps_dba_sysprv"));
  dba_sysprv->setText(QCoreApplication::translate("Selector->Actions", "System Priveleges", "Action title"));
  dba_sysprv->setToolTip(QCoreApplication::translate("Selector->Actions", "Run report \"System priveleges\"", "Tool Tip item"));
  dba_sysprv->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run report \"System priveleges\"", "Status Tip item"));
  dba_sysprv->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run report \"System priveleges\"", "Whats This item"));
  dba_sysprv->setEnabled(false);
  // Reports->DBA->Tablespaces
  dba_tblspcs = new QAction;
  dba_tblspcs->setObjectName(QString::fromUtf8("action_reps_dba_tblspcs"));
  dba_tblspcs->setText(QCoreApplication::translate("Selector->Actions", "Tablespaces", "Action title"));
  dba_tblspcs->setToolTip(QCoreApplication::translate("Selector->Actions", "Run report \"Tablespaces\"", "Tool Tip item"));
  dba_tblspcs->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run report \"Tablespaces\"", "Status Tip item"));
  dba_tblspcs->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run report \"Tablespaces\"", "Whats This item"));
  dba_tblspcs->setEnabled(false);
  // Reports->DBA->Total Free Space
  dba_tfs = new QAction;
  dba_tfs->setObjectName(QString::fromUtf8("action_reps_dba_tfs"));
  dba_tfs->setText(QCoreApplication::translate("Selector->Actions", "Total Free Space", "Action title"));
  dba_tfs->setToolTip(QCoreApplication::translate("Selector->Actions", "Run report \"Total free space\"", "Tool Tip item"));
  dba_tfs->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run report \"Total free space\"", "Status Tip item"));
  dba_tfs->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run report \"Total free space\"", "Whats This item"));
  dba_tfs->setEnabled(false);
  // Reports->DBA->Users
  dba_usrs = new QAction;
  dba_usrs->setObjectName(QString::fromUtf8("action_reps_dba_usrs"));
  dba_usrs->setText(QCoreApplication::translate("Selector->Actions", "Users", "Action title"));
  dba_usrs->setToolTip(QCoreApplication::translate("Selector->Actions", "Run report \"Users\"", "Tool Tip item"));
  dba_usrs->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run report \"Users\"", "Status Tip item"));
  dba_usrs->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run report \"Users\"", "Whats This item"));
  dba_usrs->setEnabled(false);
  // Reports->Objects->All Objects
  objects_all = new QAction;
  objects_all->setObjectName(QString::fromUtf8("action_reps_objects_all"));
  objects_all->setText(QCoreApplication::translate("Selector->Actions", "All Objects", "Action title"));
  objects_all->setToolTip(QCoreApplication::translate("Selector->Actions", "Run report \"All objects\"", "Tool Tip item"));
  objects_all->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run report \"All objects\"", "Status Tip item"));
  objects_all->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run report \"All objects\"", "Whats This item"));
  objects_all->setEnabled(false);
  // Reports->Objects->Indexes
  objects_idx = new QAction;
  objects_idx->setObjectName(QString::fromUtf8("action_reps_objects_idx"));
  objects_idx->setText(QCoreApplication::translate("Selector->Actions", "Indexes", "Action title"));
  objects_idx->setToolTip(QCoreApplication::translate("Selector->Actions", "Run report \"Indexes\"", "Tool Tip item"));
  objects_idx->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run report \"Indexes\"", "Status Tip item"));
  objects_idx->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run report \"Indexes\"", "Whats This item"));
  objects_idx->setEnabled(false);
  // Reports->Objects->Sequences
  objects_seq = new QAction;
  objects_seq->setObjectName(QString::fromUtf8("action_reps_objects_seq"));
  objects_seq->setText(QCoreApplication::translate("Selector->Actions", "Sequences", "Action title"));
  objects_seq->setToolTip(QCoreApplication::translate("Selector->Actions", "Run report \"Sequences\"", "Tool Tip item"));
  objects_seq->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run report \"Sequences\"", "Status Tip item"));
  objects_seq->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run report \"Sequences\"", "Whats This item"));
  objects_seq->setEnabled(false);
  // Reports->Objects->Synonyms
  objects_syn = new QAction;
  objects_syn->setObjectName(QString::fromUtf8("action_reps_objects_syn"));
  objects_syn->setText(QCoreApplication::translate("Selector->Actions", "Synonyms", "Action title"));
  objects_syn->setToolTip(QCoreApplication::translate("Selector->Actions", "Run report \"Synonyms\"", "Tool Tip item"));
  objects_syn->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run report \"Synonyms\"", "Status Tip item"));
  objects_syn->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run report \"Synonyms\"", "Whats This item"));
  objects_syn->setEnabled(false);
  // Reports->Objects->Tables
  objects_tbs = new QAction;
  objects_tbs->setObjectName(QString::fromUtf8("action_reps_objects_tbs"));
  objects_tbs->setText(QCoreApplication::translate("Selector->Actions", "Tables", "Action title"));
  objects_tbs->setToolTip(QCoreApplication::translate("Selector->Actions", "Run report \"Tables\"", "Tool Tip item"));
  objects_tbs->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run report \"Tables\"", "Status Tip item"));
  objects_tbs->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run report \"Tables\"", "Whats This item"));
  objects_tbs->setEnabled(false);
  // Reports->Objects->Triggers
  objects_trg = new QAction;
  objects_trg->setObjectName(QString::fromUtf8("action_reps_objects_trg"));
  objects_trg->setText(QCoreApplication::translate("Selector->Actions", "Triggers", "Action title"));
  objects_trg->setToolTip(QCoreApplication::translate("Selector->Actions", "Run report \"Triggers\"", "Tool Tip item"));
  objects_trg->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run report \"Triggers\"", "Status Tip item"));
  objects_trg->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run report \"Triggers\"", "Whats This item"));
  objects_trg->setEnabled(false);
  // Reports->Objects->Types
  objects_tps = new QAction;
  objects_tps->setObjectName(QString::fromUtf8("action_reps_objects_tps"));
  objects_tps->setText(QCoreApplication::translate("Selector->Actions", "Types", "Action title"));
  objects_tps->setToolTip(QCoreApplication::translate("Selector->Actions", "Run report \"Types\"", "Tool Tip item"));
  objects_tps->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run report \"Types\"", "Status Tip item"));
  objects_tps->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run report \"Types\"", "Whats This item"));
  objects_tps->setEnabled(false);
  // Reports->Objects->Views
  objects_views = new QAction;
  objects_views->setObjectName(QString::fromUtf8("action_reps_objects_views"));
  objects_views->setText(QCoreApplication::translate("Selector->Actions", "Views", "Action title"));
  objects_views->setToolTip(QCoreApplication::translate("Selector->Actions", "Run report \"Views\"", "Tool Tip item"));
  objects_views->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run report \"Views\"", "Status Tip item"));
  objects_views->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run report \"Views\"", "Whats This item"));
  objects_views->setEnabled(false);
  // Reports->Objects->Compilation Errors
  plsql_cperrs = new QAction;
  plsql_cperrs->setObjectName(QString::fromUtf8("action_reps_plsql_cperrs"));
  plsql_cperrs->setText(QCoreApplication::translate("Selector->Actions", "Compilation Errors", "Action title"));
  plsql_cperrs->setToolTip(QCoreApplication::translate("Selector->Actions", "Run report \"Compilation errors\"", "Tool Tip item"));
  plsql_cperrs->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run report \"Compilation errors\"", "Status Tip item"));
  plsql_cperrs->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run report \"Compilation errors\"", "Whats This item"));
  plsql_cperrs->setEnabled(false);
  // Reports->Objects->Granted Roles
  user_grrol = new QAction;
  user_grrol->setObjectName(QString::fromUtf8("action_reps_user_grrol"));
  user_grrol->setText(QCoreApplication::translate("Selector->Actions", "Granted Roles", "Action title"));
  user_grrol->setToolTip(QCoreApplication::translate("Selector->Actions", "Run report \"Granted roles\"", "Tool Tip item"));
  user_grrol->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run report \"Granted roles\"", "Status Tip item"));
  user_grrol->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run report \"Granted roles\"", "Whats This item"));
  user_grrol->setEnabled(false);
  // Reports->Objects->Granted System Privileges
  user_grsysprv = new QAction;
  user_grsysprv->setObjectName(QString::fromUtf8("action_reps_user_grsysprv"));
  user_grsysprv->setText(QCoreApplication::translate("Selector->Actions", "Granted System Privileges", "Action title"));
  user_grsysprv->setToolTip(QCoreApplication::translate("Selector->Actions", "Run report \"Granted system privileges\"", "Tool Tip item"));
  user_grsysprv->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run report \"Granted system privileges\"", "Status Tip item"));
  user_grsysprv->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run report \"Granted system privileges\"", "Whats This item"));
  user_grsysprv->setEnabled(false);
  // Reports->Objects->NLS Session Parameters
  user_nlssespar = new QAction;
  user_nlssespar->setObjectName(QString::fromUtf8("action_reps_user_nlssespar"));
  user_nlssespar->setText(QCoreApplication::translate("Selector->Actions", "NLS Session Parameters", "Action title"));
  user_nlssespar->setToolTip(QCoreApplication::translate("Selector->Actions", "Run report \"NLS session parameters\"", "Tool Tip item"));
  user_nlssespar->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run report \"NLS session parameters\"", "Status Tip item"));
  user_nlssespar->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run report \"NLS session parameters\"", "Whats This item"));
  user_nlssespar->setEnabled(false);
  // Reports->Objects->Object Privileges Made
  user_objprvmde = new QAction;
  user_objprvmde->setObjectName(QString::fromUtf8("action_reps_user_objprvmde"));
  user_objprvmde->setText(QCoreApplication::translate("Selector->Actions", "Object Privileges Made", "Action title"));
  user_objprvmde->setToolTip(QCoreApplication::translate("Selector->Actions", "Run report \"Object privileges made\"", "Tool Tip item"));
  user_objprvmde->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run report \"Object privileges made\"", "Status Tip item"));
  user_objprvmde->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run report \"Object privileges made\"", "Whats This item"));
  user_objprvmde->setEnabled(false);
  // Reports->Objects->Object Privileges Received
  user_objprvrcvd = new QAction;
  user_objprvrcvd->setObjectName(QString::fromUtf8("action_reps_user_objprvrcvd"));
  user_objprvrcvd->setText(QCoreApplication::translate("Selector->Actions", "Object Privileges Received", "Action title"));
  user_objprvrcvd->setToolTip(QCoreApplication::translate("Selector->Actions", "Run report \"Object privileges received\"", "Tool Tip item"));
  user_objprvrcvd->setStatusTip(QCoreApplication::translate("Selector->Actions", "Run report \"Object privileges received\"", "Status Tip item"));
  user_objprvrcvd->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Run report \"Object privileges received\"", "Whats This item"));
  user_objprvrcvd->setEnabled(false);
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

window_actions::window_actions()
{
  // Window->Tile
  tile = new QAction;
  tile->setObjectName(QString::fromUtf8("action_window_tile"));
  tile->setText(QCoreApplication::translate("Selector->Actions", "&Tile", "Action title"));
  tile->setToolTip(QCoreApplication::translate("Selector->Actions", "Arrange windows in tile position", "Tool Tip item"));
  tile->setStatusTip(QCoreApplication::translate("Selector->Actions", "Arrange windows in tile position", "Status Tip item"));
  tile->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Arrange windows in tile position", "Whats This item"));
  tile->setEnabled(false);
  // Window->Cascade
  cascade = new QAction;
  cascade->setObjectName(QString::fromUtf8("action_window_cscd"));
  cascade->setText(QCoreApplication::translate("Selector->Actions", "&Cascade", "Action title"));
  cascade->setToolTip(QCoreApplication::translate("Selector->Actions", "Arrange windows in cascade position", "Tool Tip item"));
  cascade->setStatusTip(QCoreApplication::translate("Selector->Actions", "Arrange windows in cascade position", "Status Tip item"));
  cascade->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Arrange windows in cascade position", "Whats This item"));
  cascade->setEnabled(false);
  // Window->Arrange All
  arrall = new QAction;
  arrall->setObjectName(QString::fromUtf8("action_window_arrall"));
  arrall->setText(QCoreApplication::translate("Selector->Actions", "&Arrange All", "Action title"));
  arrall->setToolTip(QCoreApplication::translate("Selector->Actions", "Arrange windows in ??? position", "Tool Tip item"));
  arrall->setStatusTip(QCoreApplication::translate("Selector->Actions", "Arrange windows in ??? position", "Status Tip item"));
  arrall->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Arrange windows in ??? position", "Whats This item"));
  arrall->setEnabled(false);
  // Window->Save Layout
  savelo = new QAction;
  savelo->setObjectName(QString::fromUtf8("action_window_savelo"));
  savelo->setText(QCoreApplication::translate("Selector->Actions", "&Save Layout", "Action title"));
  savelo->setToolTip(QCoreApplication::translate("Selector->Actions", "Save current window layout", "Tool Tip item"));
  savelo->setStatusTip(QCoreApplication::translate("Selector->Actions", "Save current window layout", "Status Tip item"));
  savelo->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Save current window layout", "Whats This item"));
  savelo->setEnabled(false);
}

window_actions::~window_actions()
{
  delete savelo;
  delete arrall;
  delete cascade;
  delete tile;
}

help_actions::help_actions()
{
  // Help->Help
  help = new QAction;
  help->setObjectName(QString::fromUtf8("action_help_help"));
  help->setText(QCoreApplication::translate("Selector->Actions", "&Help", "Action title"));
  #ifndef QT_NO_SHORTCUT
  help->setShortcut(QCoreApplication::translate("Selector->Actions", "F1", nullptr));
  #endif // QT_NO_SHORTCUT
  help->setToolTip(QCoreApplication::translate("Selector->Actions", "Show help", "Tool Tip item"));
  help->setStatusTip(QCoreApplication::translate("Selector->Actions", "Show help and user guides", "Status Tip item"));
  help->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Show help and user guides", "Whats This item"));
  help->setEnabled(false);
  // Help->Donates & Thanksgiving...
  donate = new QAction;
  donate->setObjectName(QString::fromUtf8("action_help_dnt"));
  donate->setText(QCoreApplication::translate("Selector->Actions", "&Donates && Thanksgiving...", "Action title"));
  donate->setToolTip(QCoreApplication::translate("Selector->Actions", "Show information about donates and thanksgiving", "Tool Tip item"));
  donate->setStatusTip(QCoreApplication::translate("Selector->Actions", "Show information about donates and thanksgiving", "Status Tip item"));
  donate->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Show information about donates and thanksgiving", "Whats This item"));
  donate->setEnabled(false);
  // Help->Support Info...
  suprt = new QAction;
  suprt->setObjectName(QString::fromUtf8("action_help_supp"));
  suprt->setText(QCoreApplication::translate("Selector->Actions", "&Support Info...", "Action title"));
  suprt->setToolTip(QCoreApplication::translate("Selector->Actions", "Show information about supporting this product", "Tool Tip item"));
  suprt->setStatusTip(QCoreApplication::translate("Selector->Actions", "Show information about supporting this product", "Status Tip item"));
  suprt->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Show information about supporting this product", "Whats This item"));
  suprt->setEnabled(false);
  // Help->About Selector...
  about = new QAction;
  about->setObjectName(QString::fromUtf8("action_help_about"));
  about->setText(QCoreApplication::translate("Selector->Actions", "&About", "Action title"));
  about->setToolTip(QCoreApplication::translate("Selector->Actions", "Show information about Selector", "Tool Tip item"));
  about->setStatusTip(QCoreApplication::translate("Selector->Actions", "Show information about Selector", "Status Tip item"));
  about->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Show information about Selector", "Whats This item"));
  about->setEnabled(false);
}

help_actions::~help_actions()
{
  delete about;
  delete suprt;
  delete donate;
  delete help;
}

transaction_actions::transaction_actions()
{
  // Edit Data
  edt_rec = new QAction;
  edt_rec->setObjectName(QString::fromUtf8("action_trans_edt_rec"));
  edt_rec->setText(QCoreApplication::translate("Selector->Actions", "Edit Data", "Action title"));
  edt_rec->setToolTip(QCoreApplication::translate("Selector->Actions", "Unlock records for editing", "Tool Tip item"));
  edt_rec->setStatusTip(QCoreApplication::translate("Selector->Actions", "Unlock records for editing", "Status Tip item"));
  edt_rec->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Unlock records for editing", "Whats This item"));
  edt_rec->setIcon(QPixmap(":/icons/edit_data.png"));
  edt_rec->setEnabled(false);

  // Insert Record
  ins_rec = new QAction;
  ins_rec->setObjectName(QString::fromUtf8("action_trans_ins_rec"));
  ins_rec->setText(QCoreApplication::translate("Selector->Actions", "Insert Record", "Action title"));
  ins_rec->setToolTip(QCoreApplication::translate("Selector->Actions", "Insert new record", "Tool Tip item"));
  ins_rec->setStatusTip(QCoreApplication::translate("Selector->Actions", "Insert new record", "Status Tip item"));
  ins_rec->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Insert new record", "Whats This item"));
  ins_rec->setIcon(QPixmap(":/icons/insert_record.png"));
  ins_rec->setEnabled(false);

  // Delete Record
  del_rec = new QAction;
  del_rec->setObjectName(QString::fromUtf8("action_trans_del_rec"));
  del_rec->setText(QCoreApplication::translate("Selector->Actions", "Delete Record", "Action title"));
  del_rec->setToolTip(QCoreApplication::translate("Selector->Actions", "Delete record", "Tool Tip item"));
  del_rec->setStatusTip(QCoreApplication::translate("Selector->Actions", "Delete record", "Status Tip item"));
  del_rec->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Delete record", "Whats This item"));
  del_rec->setIcon(QPixmap(":/icons/delete_record.png"));
  del_rec->setEnabled(false);

  // Post Changes into DB
  post_chng = new QAction;
  post_chng->setObjectName(QString::fromUtf8("action_trans_post_chng"));
  post_chng->setText(QCoreApplication::translate("Selector->Actions", "Post Changes", "Action title"));
  post_chng->setToolTip(QCoreApplication::translate("Selector->Actions", "Post changes into database", "Tool Tip item"));
  post_chng->setStatusTip(QCoreApplication::translate("Selector->Actions", "Post changes into database", "Status Tip item"));
  post_chng->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Post changes into database", "Whats This item"));
  post_chng->setIcon(QPixmap(":/icons/post_changes.png"));
  post_chng->setEnabled(false);

  // Fetch Next Page (Alt+PgDown)
  fetch_rec = new QAction;
  fetch_rec->setObjectName(QString::fromUtf8("action_trans_fetch_rec"));
  fetch_rec->setText(QCoreApplication::translate("Selector->Actions", "Fetch Next Page", "Action title"));
  fetch_rec->setToolTip(QCoreApplication::translate("Selector->Actions", "Fetch next data portion from database", "Tool Tip item"));
  fetch_rec->setStatusTip(QCoreApplication::translate("Selector->Actions", "Fetch next data portion from database", "Status Tip item"));
  fetch_rec->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Fetch next data portion from database", "Whats This item"));
  fetch_rec->setIcon(QPixmap(":/icons/fetch_next_page.png"));
  #ifndef QT_NO_SHORTCUT
  fetch_rec->setShortcut(QCoreApplication::translate("Selector->Actions", "Alt+PgDown", nullptr)); // ??? check shortcut
  #endif // QT_NO_SHORTCUT
  fetch_rec->setEnabled(false);

  // Fetch All Records (Alt+End)
  fetch_all = new QAction;
  fetch_all->setObjectName(QString::fromUtf8("action_trans_fetch_all"));
  fetch_all->setText(QCoreApplication::translate("Selector->Actions", "Fetch All Records", "Action title"));
  fetch_all->setToolTip(QCoreApplication::translate("Selector->Actions", "Fetch all data from database", "Tool Tip item"));
  fetch_all->setStatusTip(QCoreApplication::translate("Selector->Actions", "Fetch all data from database", "Status Tip item"));
  fetch_all->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Fetch all data from database", "Whats This item"));
  fetch_all->setIcon(QPixmap(":/icons/fetch_all_records.png"));
  #ifndef QT_NO_SHORTCUT
  fetch_all->setShortcut(QCoreApplication::translate("Selector->Actions", "Alt+End", nullptr)); // ??? check shortcut
  #endif // QT_NO_SHORTCUT
  fetch_all->setEnabled(false);

  // Query By Example ???
  qry_by_ex = new QAction;
  qry_by_ex->setObjectName(QString::fromUtf8("action_trans_qry_by_ex"));
  qry_by_ex->setText(QCoreApplication::translate("Selector->Actions", "Query By Example", "Action title"));
  qry_by_ex->setToolTip(QCoreApplication::translate("Selector->Actions", "Query by example", "Tool Tip item"));
  qry_by_ex->setStatusTip(QCoreApplication::translate("Selector->Actions", "Query by example", "Status Tip item"));
  qry_by_ex->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Query by example", "Whats This item"));
  qry_by_ex->setIcon(QPixmap(":/icons/query_by_example.png"));
  qry_by_ex->setEnabled(false);

  // Clear Record
  clr_rec = new QAction;
  clr_rec->setObjectName(QString::fromUtf8("action_trans_clr_rec"));
  clr_rec->setText(QCoreApplication::translate("Selector->Actions", "Clear Record", "Action title"));
  clr_rec->setToolTip(QCoreApplication::translate("Selector->Actions", "Clear record contents", "Tool Tip item"));
  clr_rec->setStatusTip(QCoreApplication::translate("Selector->Actions", "Clear record contents", "Status Tip item"));
  clr_rec->setWhatsThis(QCoreApplication::translate("Selector->Actions", "Clear record contents", "Whats This item"));
  clr_rec->setIcon(QPixmap(":/icons/clear_record.png"));
  clr_rec->setEnabled(false);
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
