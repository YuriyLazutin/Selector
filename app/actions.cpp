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

edit_actions::edit_actions()
{
  // Edit->Undo
  undo = new QAction;
  undo->setObjectName(QString::fromUtf8("action_edit_undo"));
  undo->setText(QApplication::translate("Selector", "&Undo", nullptr));
  #ifndef QT_NO_SHORTCUT
  undo->setShortcut(QApplication::translate("Selector", "Ctrl+Z", nullptr));
  #endif // QT_NO_SHORTCUT
  undo->setToolTip("Undo last edit operation");
  undo->setStatusTip("Allow you to undo last edit operations");
  undo->setWhatsThis("Allow you to undo last edit operations");
  undo->setIcon(QPixmap(":/icons/edit-undo.png"));
  undo->setEnabled(false);
  // Edit->Redo
  redo = new QAction;
  redo->setObjectName(QString::fromUtf8("action_edit_redo"));
  redo->setText(QApplication::translate("Selector", "&Redo", nullptr));
  #ifndef QT_NO_SHORTCUT
  redo->setShortcut(QApplication::translate("Selector", "Shift+Ctrl+Z", nullptr));
  #endif // QT_NO_SHORTCUT
  redo->setToolTip("Redo last undo");
  redo->setStatusTip("Allow you to restore last edit operations (if it was undone)");
  redo->setWhatsThis("Allow you to restore last edit operations (if it was undone)");
  redo->setIcon(QPixmap(":/icons/edit-redo.png"));
  redo->setEnabled(false);
  // Edit->Beautifier
  beautifier = new QAction;
  beautifier->setObjectName(QString::fromUtf8("action_edit_beautifier"));
  beautifier->setText(QApplication::translate("Selector", "&Beautifier", nullptr));
  beautifier->setToolTip("Code automatic beautify");
  beautifier->setStatusTip("Code automatic beautify");
  beautifier->setWhatsThis("Code automatic beautify");
  beautifier->setEnabled(false);
  // Edit->Beautifier Options
  beautifier_optns = new QAction;
  beautifier_optns->setObjectName(QString::fromUtf8("action_edit_beautifier_optns"));
  beautifier_optns->setText(QApplication::translate("Selector", "Beautifier Options", nullptr));
  beautifier_optns->setToolTip("Change beautifier options");
  beautifier_optns->setStatusTip("Change beautifier options");
  beautifier_optns->setWhatsThis("Change beautifier options");
  beautifier_optns->setEnabled(false);
  // Edit->Cut
  cut = new QAction;
  cut->setObjectName(QString::fromUtf8("action_edit_cut"));
  cut->setText(QApplication::translate("Selector", "Cut", nullptr));
  #ifndef QT_NO_SHORTCUT
  cut->setShortcut(QApplication::translate("Selector", "Ctrl+X", nullptr));
  #endif // QT_NO_SHORTCUT
  cut->setToolTip("Cut selected text");
  cut->setStatusTip("Cut selected text and put it into clipboard");
  cut->setWhatsThis("Cut selected text and put it into clipboard");
  cut->setEnabled(false);
  // Edit->Copy
  copy = new QAction;
  copy->setObjectName(QString::fromUtf8("action_edit_copy"));
  copy->setText(QApplication::translate("Selector", "&Copy", nullptr));
  #ifndef QT_NO_SHORTCUT
  copy->setShortcut(QApplication::translate("Selector", "Ctrl+C", nullptr));
  #endif // QT_NO_SHORTCUT
  copy->setToolTip("Copy selected text");
  copy->setStatusTip("Copy selected text and put it into clipboard");
  copy->setWhatsThis("Copy selected text and put it into clipboard");
  copy->setEnabled(false);
  // Edit->Paste
  paste = new QAction;
  paste->setObjectName(QString::fromUtf8("action_edit_paste"));
  paste->setText(QApplication::translate("Selector", "&Paste", nullptr));
  #ifndef QT_NO_SHORTCUT
  paste->setShortcut(QApplication::translate("Selector", "Ctrl+V", nullptr));
  #endif // QT_NO_SHORTCUT
  paste->setToolTip("Paste text from clipboard");
  paste->setStatusTip("Paste text from clipboard");
  paste->setWhatsThis("Paste text from clipboard");
  paste->setEnabled(false);
  // Edit->Append
  append = new QAction;
  append->setObjectName(QString::fromUtf8("action_edit_append"));
  append->setText(QApplication::translate("Selector", "&Append", nullptr));
  append->setToolTip("Append");
  append->setStatusTip("Append");
  append->setWhatsThis("Append");
  append->setEnabled(false);
  // Edit->Clear
  clear = new QAction;
  clear->setObjectName(QString::fromUtf8("action_edit_clear"));
  clear->setText(QApplication::translate("Selector", "C&lear", nullptr));
  clear->setToolTip("Clear current form");
  clear->setStatusTip("Clear current form");
  clear->setWhatsThis("Clear current form");
  clear->setEnabled(false);
  // Edit->Select All
  select_all = new QAction;
  select_all->setObjectName(QString::fromUtf8("action_edit_select_all"));
  select_all->setText(QApplication::translate("Selector", "Select All", nullptr));
  #ifndef QT_NO_SHORTCUT
  select_all->setShortcut(QApplication::translate("Selector", "Ctrl+A", nullptr));
  #endif // QT_NO_SHORTCUT
  select_all->setToolTip("Select all text in current form");
  select_all->setStatusTip("Select all text in current form");
  select_all->setWhatsThis("Select all text in current form");
  select_all->setEnabled(false);
  // Edit->Recall Statement
  recall = new QAction;
  recall->setObjectName(QString::fromUtf8("action_edit_recall"));
  recall->setText(QApplication::translate("Selector", "R&ecall Statement", nullptr));
  #ifndef QT_NO_SHORTCUT
  recall->setShortcut(QApplication::translate("Selector", "Ctrl+E", nullptr));
  #endif // QT_NO_SHORTCUT
  recall->setToolTip("Recall statement");
  recall->setStatusTip("Recall statement");
  recall->setWhatsThis("Recall statement");
  recall->setEnabled(false);
  // Edit->Special Copy->C++
  scpy_cpp = new QAction;
  scpy_cpp->setObjectName(QString::fromUtf8("action_edit_scpy_cpp"));
  scpy_cpp->setText(QApplication::translate("Selector", "C++", nullptr));
  scpy_cpp->setToolTip("Special Copy->C++");
  scpy_cpp->setStatusTip("Special Copy->C++");
  scpy_cpp->setWhatsThis("Special Copy->C++");
  scpy_cpp->setEnabled(false);
  // Edit->Special Copy->Delphi
  scpy_delphi = new QAction;
  scpy_delphi->setObjectName(QString::fromUtf8("action_edit_scpy_delphi"));
  scpy_delphi->setText(QApplication::translate("Selector", "Delphi", nullptr));
  scpy_delphi->setToolTip("Special Copy->Delphi");
  scpy_delphi->setStatusTip("Special Copy->Delphi");
  scpy_delphi->setWhatsThis("Special Copy->Delphi");
  scpy_delphi->setEnabled(false);
  // Edit->Special Copy->Java
  scpy_java = new QAction;
  scpy_java->setObjectName(QString::fromUtf8("action_edit_scpy_java"));
  scpy_java->setText(QApplication::translate("Selector", "Java", nullptr));
  scpy_java->setToolTip("Special Copy->Java");
  scpy_java->setStatusTip("Special Copy->Java");
  scpy_java->setWhatsThis("Special Copy->Java");
  scpy_java->setEnabled(false);
  // Edit->Special Copy->PL/SQL
  scpy_plsql = new QAction;
  scpy_plsql->setObjectName(QString::fromUtf8("action_edit_scpy_plsql"));
  scpy_plsql->setText(QApplication::translate("Selector", "PL/SQL", nullptr));
  scpy_plsql->setToolTip("Special Copy->PL/SQL");
  scpy_plsql->setStatusTip("Special Copy->PL/SQL");
  scpy_plsql->setWhatsThis("Special Copy->PL/SQL");
  scpy_plsql->setEnabled(false);
  // Edit->Special Copy->Visual Basic
  scpy_basic = new QAction;
  scpy_basic->setObjectName(QString::fromUtf8("action_edit_scpy_basic"));
  scpy_basic->setText(QApplication::translate("Selector", "Visual Basic", nullptr));
  scpy_basic->setToolTip("Special Copy->Visual Basic");
  scpy_basic->setStatusTip("Special Copy->Visual Basic");
  scpy_basic->setWhatsThis("Special Copy->Visual Basic");
  scpy_basic->setEnabled(false);
  // Edit->Selection->Indent
  slctn_indent = new QAction;
  slctn_indent->setObjectName(QString::fromUtf8("action_edit_selection_indent"));
  slctn_indent->setText(QApplication::translate("Selector", "&Indent", nullptr));
  #ifndef QT_NO_SHORTCUT
  slctn_indent->setShortcut(QApplication::translate("Selector", "Ctrl+I", nullptr));
  #endif // QT_NO_SHORTCUT
  slctn_indent->setToolTip("Increase indent");
  slctn_indent->setStatusTip("Increase indent of selected text");
  slctn_indent->setWhatsThis("Increase indent of selected text");
  slctn_indent->setEnabled(false);
  // Edit->Selection->Unindent
  slctn_unindent = new QAction;
  slctn_unindent->setObjectName(QString::fromUtf8("action_edit_selection_unindent"));
  slctn_unindent->setText(QApplication::translate("Selector", "&Unindent", nullptr));
  #ifndef QT_NO_SHORTCUT
  slctn_unindent->setShortcut(QApplication::translate("Selector", "Ctrl+U", nullptr));
  #endif // QT_NO_SHORTCUT
  slctn_unindent->setToolTip("Decrease indent");
  slctn_unindent->setStatusTip("Decrease indent of selected text");
  slctn_unindent->setWhatsThis("Decrease indent of selected text");
  slctn_unindent->setEnabled(false);
  // Edit->Selection->Uppercase
  slctn_uppercase = new QAction;
  slctn_uppercase->setObjectName(QString::fromUtf8("action_edit_selection_uppercase"));
  slctn_uppercase->setText(QApplication::translate("Selector", "Upper&case", nullptr));
  slctn_uppercase->setToolTip("To uppercase");
  slctn_uppercase->setStatusTip("Convert selected text to uppercase");
  slctn_uppercase->setWhatsThis("Convert selected text to uppercase");
  slctn_uppercase->setEnabled(false);
  // Edit->Selection->Lowercase
  slctn_lowercase = new QAction;
  slctn_lowercase->setObjectName(QString::fromUtf8("action_edit_selection_lowercase"));
  slctn_lowercase->setText(QApplication::translate("Selector", "&Lowercase", nullptr));
  slctn_lowercase->setToolTip("To lowercase");
  slctn_lowercase->setStatusTip("Convert selected text to lowercase");
  slctn_lowercase->setWhatsThis("Convert selected text to lowercase");
  slctn_lowercase->setEnabled(false);
  // Edit->Selection->Comment
  slctn_comment = new QAction;
  slctn_comment->setObjectName(QString::fromUtf8("action_edit_selection_comment"));
  slctn_comment->setText(QApplication::translate("Selector", "C&omment", nullptr));
  slctn_comment->setToolTip("To comment");
  slctn_comment->setStatusTip("Convert selected text to comment");
  slctn_comment->setWhatsThis("Convert text to comment");
  slctn_comment->setEnabled(false);
  // Edit->Selection->Uncomment
  slctn_uncomment = new QAction;
  slctn_uncomment->setObjectName(QString::fromUtf8("action_edit_selection_uncomment"));
  slctn_uncomment->setText(QApplication::translate("Selector", "U&ncomment", nullptr));
  slctn_uncomment->setToolTip("To uncomment");
  slctn_uncomment->setStatusTip("Convert selected text to uncomment");
  slctn_uncomment->setWhatsThis("Convert text to uncomment");
  slctn_uncomment->setEnabled(false);
  // Edit->Selection->Apply Syntax Case
  slctn_aplsyncase = new QAction;
  slctn_aplsyncase->setObjectName(QString::fromUtf8("action_edit_selection_aplsyncase"));
  slctn_aplsyncase->setText(QApplication::translate("Selector", "&Apply Syntax Case", nullptr));
  slctn_aplsyncase->setToolTip("Apply syntax case");
  slctn_aplsyncase->setStatusTip("Apply syntax case");
  slctn_aplsyncase->setWhatsThis("Apply syntax case");
  slctn_aplsyncase->setEnabled(false);
  // Edit->Selection->Sort
  slctn_sort = new QAction;
  slctn_sort->setObjectName(QString::fromUtf8("action_edit_selection_sort"));
  slctn_sort->setText(QApplication::translate("Selector", "&Sort", nullptr));
  slctn_sort->setToolTip("Sort selection");
  slctn_sort->setStatusTip("Sort selection");
  slctn_sort->setWhatsThis("Sort selection");
  slctn_sort->setEnabled(false);
  // Edit->Selection->Color Mark
  slctn_mark = new QAction;
  slctn_mark->setObjectName(QString::fromUtf8("action_edit_selection_mark"));
  slctn_mark->setText(QApplication::translate("Selector", "Color &Mark", nullptr));
  slctn_mark->setToolTip("Add color mark");
  slctn_mark->setStatusTip("Add color mark");
  slctn_mark->setWhatsThis("Add color mark");
  slctn_mark->setEnabled(false);
  // Edit->To-Do Items->Show List...
  todo_list = new QAction;
  todo_list->setObjectName(QString::fromUtf8("action_edit_todo_list"));
  todo_list->setText(QApplication::translate("Selector", "&Show List...", nullptr));
  todo_list->setToolTip("Show To-Do list");
  todo_list->setStatusTip("Show To-Do list");
  todo_list->setWhatsThis("Show To-Do list");
  todo_list->setEnabled(false);
  // Edit->To-Do Items->Add Item...
  todo_add = new QAction;
  todo_add->setObjectName(QString::fromUtf8("action_edit_todo_add"));
  todo_add->setText(QApplication::translate("Selector", "&Add Item...", nullptr));
  todo_add->setToolTip("Add new To_Do item");
  todo_add->setStatusTip("Add new To_Do item");
  todo_add->setWhatsThis("Add new To_Do item");
  todo_add->setEnabled(false);
  // Edit->To-Do Items->Edit Item...
  todo_edit = new QAction;
  todo_edit->setObjectName(QString::fromUtf8("action_edit_todo_edit"));
  todo_edit->setText(QApplication::translate("Selector", "&Edit Item...", nullptr));
  todo_edit->setToolTip("Edit To-Do item");
  todo_edit->setStatusTip("Edit To-Do item");
  todo_edit->setWhatsThis("Edit To-Do item");
  todo_edit->setEnabled(false);
  // Edit->To-Do Items->Close Item
  todo_close = new QAction;
  todo_close->setObjectName(QString::fromUtf8("action_edit_todo_close"));
  todo_close->setText(QApplication::translate("Selector", "&Close Item", nullptr));
  todo_close->setToolTip("Close To-Do item");
  todo_close->setStatusTip("Close To-Do item");
  todo_close->setWhatsThis("Close To-Do item");
  todo_close->setEnabled(false);
  // Edit->To-Do Items->Delete Item
  todo_del = new QAction;
  todo_del->setObjectName(QString::fromUtf8("action_edit_todo_del"));
  todo_del->setText(QApplication::translate("Selector", "&Delete Item", nullptr));
  todo_del->setToolTip("Delete To-Do item");
  todo_del->setStatusTip("Delete To-Do item");
  todo_del->setWhatsThis("Delete To-Do item");
  todo_del->setEnabled(false);
  // Edit->Find
  find = new QAction;
  find->setObjectName(QString::fromUtf8("action_edit_find"));
  find->setText(QApplication::translate("Selector", "&Find", nullptr));
  #ifndef QT_NO_SHORTCUT
  find->setShortcut(QApplication::translate("Selector", "Ctrl+F", nullptr));
  #endif // QT_NO_SHORTCUT
  find->setToolTip("Find");
  find->setStatusTip("Find");
  find->setWhatsThis("Find");
  find->setEnabled(false);
  // Edit->Repeat Last Find
  repeat_find = new QAction;
  repeat_find->setObjectName(QString::fromUtf8("action_edit_repeat_find"));
  repeat_find->setText(QApplication::translate("Selector", "Repeat &Last Find", nullptr));
  #ifndef QT_NO_SHORTCUT
  repeat_find->setShortcut(QApplication::translate("Selector", "Ctrl+L", nullptr));
  #endif // QT_NO_SHORTCUT
  repeat_find->setToolTip("Repeat last find");
  repeat_find->setStatusTip("Repeat last find");
  repeat_find->setWhatsThis("Repeat last find");
  repeat_find->setEnabled(false);
  // Edit->Replace
  replace = new QAction;
  replace->setObjectName(QString::fromUtf8("action_edit_replace"));
  replace->setText(QApplication::translate("Selector", "Repl&ace", nullptr));
  #ifndef QT_NO_SHORTCUT
  replace->setShortcut(QApplication::translate("Selector", "Ctrl+P", nullptr));
  #endif // QT_NO_SHORTCUT
  replace->setToolTip("Find and replace");
  replace->setStatusTip("Find and replace pattern");
  replace->setWhatsThis("Find and replace pattern");
  replace->setEnabled(false);
  // Edit->Find Matches
  find_matches = new QAction;
  find_matches->setObjectName(QString::fromUtf8("action_edit_find_matches"));
  find_matches->setText(QApplication::translate("Selector", "Find &Matches", nullptr));
  #ifndef QT_NO_SHORTCUT
  find_matches->setShortcut(QApplication::translate("Selector", "Ctrl+M", nullptr));
  #endif // QT_NO_SHORTCUT
  find_matches->setToolTip("Find matches");
  find_matches->setStatusTip("Find matches");
  find_matches->setWhatsThis("Find matches");
  find_matches->setEnabled(false);
  // Edit->Show Special Characters
  show_spec = new QAction;
  show_spec->setObjectName(QString::fromUtf8("action_edit_show_spec"));
  show_spec->setText(QApplication::translate("Selector", "Show Special Characters", nullptr));
  show_spec->setToolTip("Show cpecial characters");
  show_spec->setStatusTip("Show cpecial characters");
  show_spec->setWhatsThis("Show cpecial characters");
  show_spec->setCheckable(true);
  show_spec->setChecked(false);
  show_spec->setEnabled(false);
  // Edit->Code Folding
  code_folding = new QAction;
  code_folding->setObjectName(QString::fromUtf8("action_edit_code_folding"));
  code_folding->setText(QApplication::translate("Selector", "Code Folding", nullptr));
  code_folding->setToolTip("Enable/Disable code folding");
  code_folding->setStatusTip("Enable/Disable code folding");
  code_folding->setWhatsThis("Enable/Disable code folding");
  code_folding->setCheckable(true);
  code_folding->setChecked(false);
  code_folding->setEnabled(false);
  // Edit->Set Bookmark
  bookmark_set = new QAction;
  bookmark_set->setObjectName(QString::fromUtf8("action_edit_bookmark_set"));
  bookmark_set->setText(QApplication::translate("Selector", "Set Book&makr", nullptr));
  #ifndef QT_NO_SHORTCUT
  bookmark_set->setShortcut(QApplication::translate("Selector", "Ctrl+K", nullptr));
  #endif // QT_NO_SHORTCUT
  bookmark_set->setToolTip("Set bookmark");
  bookmark_set->setStatusTip("Set bookmark");
  bookmark_set->setWhatsThis("Set bookmark");
  bookmark_set->setEnabled(false);
  // Edit->Go to Bookmark->Next
  bookmark_goto_next = new QAction;
  bookmark_goto_next->setObjectName(QString::fromUtf8("action_edit_bookmark_goto_next"));
  bookmark_goto_next->setText(QApplication::translate("Selector", "&Next", nullptr));
  bookmark_goto_next->setToolTip("Go to next bookmark");
  bookmark_goto_next->setStatusTip("Go to next bookmark");
  bookmark_goto_next->setWhatsThis("Go to next bookmark");
  bookmark_goto_next->setEnabled(false);
  // Edit->Go to Bookmark->Previous
  bookmark_goto_prev = new QAction;
  bookmark_goto_prev->setObjectName(QString::fromUtf8("action_edit_bookmark_goto_prev"));
  bookmark_goto_prev->setText(QApplication::translate("Selector", "&Previous", nullptr));
  bookmark_goto_prev->setToolTip("Go to previous bookmark");
  bookmark_goto_prev->setStatusTip("Go to previous bookmark");
  bookmark_goto_prev->setWhatsThis("Go to previous bookmark");
  bookmark_goto_prev->setEnabled(false);
  // Edit->Bookmark List
  bookmark_list = new QAction;
  bookmark_list->setObjectName(QString::fromUtf8("action_edit_bookmark_list"));
  bookmark_list->setText(QApplication::translate("Selector", "Bookmakr List", nullptr));
  bookmark_list->setToolTip("Open bookmark list");
  bookmark_list->setStatusTip("Open bookmark list");
  bookmark_list->setWhatsThis("Open bookmark list");
  bookmark_list->setEnabled(false);
  // Edit->Go to Line
  go_to = new QAction;
  go_to->setObjectName(QString::fromUtf8("action_edit_goto"));
  go_to->setText(QApplication::translate("Selector", "&Go to Line", nullptr));
  #ifndef QT_NO_SHORTCUT
  go_to->setShortcut(QApplication::translate("Selector", "Ctrl+G", nullptr));
  #endif // QT_NO_SHORTCUT
  go_to->setToolTip("Jump to line");
  go_to->setStatusTip("Jump to line");
  go_to->setWhatsThis("Jump to line");
  go_to->setEnabled(false);
  // Edit->Next Tab Page
  next_tab = new QAction;
  next_tab->setObjectName(QString::fromUtf8("action_edit_next_tab"));
  next_tab->setText(QApplication::translate("Selector", "&Next Tab Page", nullptr));
  #ifndef QT_NO_SHORTCUT
  next_tab->setShortcut(QApplication::translate("Selector", "Ctrl+H", nullptr));
  #endif // QT_NO_SHORTCUT
  next_tab->setToolTip("Switch to next tab page");
  next_tab->setStatusTip("Switch to next tab page");
  next_tab->setWhatsThis("Switch to next tab page");
  next_tab->setEnabled(false);
  // Edit->Previous Tab Page
  prev_tab = new QAction;
  prev_tab->setObjectName(QString::fromUtf8("action_edit_prev_tab"));
  prev_tab->setText(QApplication::translate("Selector", "&Previous Tab Page", nullptr));
  #ifndef QT_NO_SHORTCUT
  prev_tab->setShortcut(QApplication::translate("Selector", "Shift+Ctrl+H", nullptr));
  #endif // QT_NO_SHORTCUT
  prev_tab->setToolTip("Switch to previous tab page");
  prev_tab->setStatusTip("Switch to previous tab page");
  prev_tab->setWhatsThis("Switch to previous tab page");
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
  lon->setText(QApplication::translate("Selector", "&Log on...", nullptr));
  lon->setToolTip("Log on");
  lon->setStatusTip("Create a new connection to the remote server");
  lon->setWhatsThis("Create a new connection to the remote server");
  lon->setIcon(QPixmap(":/icons/login.png"));
  // Session->Log off
  loff = new QAction;
  loff->setObjectName(QString::fromUtf8("action_session_logoff"));
  loff->setText(QApplication::translate("Selector", "Log &off", nullptr));
  loff->setToolTip("Log off");
  loff->setStatusTip("Complete work and break connection with database");
  loff->setWhatsThis("Complete work and break connection with database");
  loff->setEnabled(false);
  // Session->Execute
  exe = new QAction;
  exe->setObjectName(QString::fromUtf8("action_session_execute"));
  exe->setText(QApplication::translate("Selector", "&Execute", nullptr));
  #ifndef QT_NO_SHORTCUT
  exe->setShortcut(QApplication::translate("Selector", "F8", nullptr));
  #endif // QT_NO_SHORTCUT
  exe->setToolTip("Execute");
  exe->setStatusTip("Execute program or script");
  exe->setWhatsThis("Execute program or script");
  exe->setIcon(QPixmap(":/icons/execute.png"));
  exe->setEnabled(false);
  // Session->Break
  brk = new QAction;
  brk->setObjectName(QString::fromUtf8("action_session_break"));
  brk->setText(QApplication::translate("Selector", "&Break", nullptr));
  #ifndef QT_NO_SHORTCUT
  brk->setShortcut(QApplication::translate("Selector", "Shift+Esc", nullptr));
  #endif // QT_NO_SHORTCUT
  brk->setToolTip("Break");
  brk->setStatusTip("Break program or script execution");
  brk->setWhatsThis("Break program or script execution");
  brk->setIcon(QPixmap(":/icons/abort.png"));
  brk->setEnabled(false);
  // Session->Kill
  kll = new QAction;
  kll->setObjectName(QString::fromUtf8("action_session_kill"));
  kll->setText(QApplication::translate("Selector", "&Kill", nullptr));
  kll->setToolTip("Kill session");
  kll->setStatusTip("Abort script or program execution and break session");
  kll->setWhatsThis("Abort script or program execution and break session");
  kll->setEnabled(false);
  // Session->Commit
  cmmt = new QAction;
  cmmt->setObjectName(QString::fromUtf8("action_session_commit"));
  cmmt->setText(QApplication::translate("Selector", "&Commit", nullptr));
  #ifndef QT_NO_SHORTCUT
  cmmt->setShortcut(QApplication::translate("Selector", "F10", nullptr));
  #endif // QT_NO_SHORTCUT
  cmmt->setToolTip("Commit");
  cmmt->setStatusTip("Commit current transaction");
  cmmt->setWhatsThis("Commit current transaction");
  cmmt->setIcon(QPixmap(":/icons/commit.png"));
  cmmt->setEnabled(false);
  // Session->Rollback
  rllbck = new QAction;
  rllbck->setObjectName(QString::fromUtf8("action_session_rollback"));
  rllbck->setText(QApplication::translate("Selector", "&Rollback", nullptr));
  #ifndef QT_NO_SHORTCUT
  rllbck->setShortcut(QApplication::translate("Selector", "Shift+F10", nullptr));
  #endif // QT_NO_SHORTCUT
  rllbck->setToolTip("Rollback");
  rllbck->setStatusTip("Rollback current transaction");
  rllbck->setWhatsThis("Rollback current transaction");
  rllbck->setIcon(QPixmap(":/icons/rollback.png"));
  rllbck->setEnabled(false);
  // Session->SQL Trace
  trce = new QAction;
  trce->setObjectName(QString::fromUtf8("action_session_trace"));
  trce->setText(QApplication::translate("Selector", "SQL &Trace", nullptr));
  trce->setToolTip("Run SQL trace");
  trce->setStatusTip("Run SQL trace");
  trce->setWhatsThis("Run SQL trace");
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
  breakpoint->setText(QApplication::translate("Selector", "Toggle &Breakpoint", nullptr));
  #ifndef QT_NO_SHORTCUT
  breakpoint->setShortcut(QApplication::translate("Selector", "Ctrl+B", nullptr));
  #endif // QT_NO_SHORTCUT
  breakpoint->setToolTip("Toggle breakpoint");
  breakpoint->setStatusTip("Toggle breakpoint");
  breakpoint->setWhatsThis("Toggle breakpoint");
  breakpoint->setEnabled(false);
  // Debug->Modify Breakpoints...
  mod_brkpnts = new QAction;
  mod_brkpnts->setObjectName(QString::fromUtf8("action_debug_mod_brkpnts"));
  mod_brkpnts->setText(QApplication::translate("Selector", "&Modify Breakpoints...", nullptr));
  mod_brkpnts->setToolTip("Modify breakpoints");
  mod_brkpnts->setStatusTip("Modify breakpoints");
  mod_brkpnts->setWhatsThis("Modify breakpoints");
  mod_brkpnts->setEnabled(false);
  // Debug->Start
  start = new QAction;
  start->setObjectName(QString::fromUtf8("action_debug_start"));
  start->setText(QApplication::translate("Selector", "&Start", nullptr));
  #ifndef QT_NO_SHORTCUT
  start->setShortcut(QApplication::translate("Selector", "F9", nullptr));
  #endif // QT_NO_SHORTCUT
  start->setToolTip("Start debugger");
  start->setStatusTip("Start debugger");
  start->setWhatsThis("Start debugger");
  start->setEnabled(false);
  // Debug->Run
  run = new QAction;
  run->setObjectName(QString::fromUtf8("action_debug_run"));
  run->setText(QApplication::translate("Selector", "&Run", nullptr));
  #ifndef QT_NO_SHORTCUT
  run->setShortcut(QApplication::translate("Selector", "Ctrl+R", nullptr));
  #endif // QT_NO_SHORTCUT
  run->setToolTip("Run program");
  run->setStatusTip("Run program");
  run->setWhatsThis("Run program");
  run->setEnabled(false);
  // Debug->Step Into
  step_into = new QAction;
  step_into->setObjectName(QString::fromUtf8("action_debug_step_into"));
  step_into->setText(QApplication::translate("Selector", "Step &Into", nullptr));
  #ifndef QT_NO_SHORTCUT
  step_into->setShortcut(QApplication::translate("Selector", "Ctrl+N", nullptr));
  #endif // QT_NO_SHORTCUT
  step_into->setToolTip("Step into");
  step_into->setStatusTip("Step into");
  step_into->setWhatsThis("Step into");
  step_into->setEnabled(false);
  // Debug->Step Over
  step_over = new QAction;
  step_over->setObjectName(QString::fromUtf8("action_debug_step_over"));
  step_over->setText(QApplication::translate("Selector", "Step &Over", nullptr));
  #ifndef QT_NO_SHORTCUT
  step_over->setShortcut(QApplication::translate("Selector", "Ctrl+O", nullptr));
  #endif // QT_NO_SHORTCUT
  step_over->setToolTip("Step over");
  step_over->setStatusTip("Step over");
  step_over->setWhatsThis("Step over");
  step_over->setEnabled(false);
  // Debug->Step Out
  step_out = new QAction;
  step_out->setObjectName(QString::fromUtf8("action_debug_step_out"));
  step_out->setText(QApplication::translate("Selector", "Step Ou&t", nullptr));
  #ifndef QT_NO_SHORTCUT
  step_out->setShortcut(QApplication::translate("Selector", "Ctrl+T", nullptr));
  #endif // QT_NO_SHORTCUT
  step_out->setToolTip("Step out");
  step_out->setStatusTip("Step out");
  step_out->setWhatsThis("Step out");
  step_out->setEnabled(false);
  // Debug->Run to Exception
  cont = new QAction;
  cont->setObjectName(QString::fromUtf8("action_debug_continue"));
  cont->setText(QApplication::translate("Selector", "Run to &Exception", nullptr));
  cont->setToolTip("Continue");
  cont->setStatusTip("Run to exception");
  cont->setWhatsThis("Run to exception");
  cont->setEnabled(false);
  // Debug->Set Variable...
  set_var = new QAction;
  set_var->setObjectName(QString::fromUtf8("action_debug_var"));
  set_var->setText(QApplication::translate("Selector", "Set &Variable...", nullptr));
  set_var->setToolTip("Set variable");
  set_var->setStatusTip("Set variable");
  set_var->setWhatsThis("Set variable");
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
  pref->setText(QApplication::translate("Selector", "&Preferences...", nullptr));
  pref->setToolTip("Preferences");
  pref->setStatusTip("Preferences");
  pref->setWhatsThis("Preferences");
  // Tools->Configure Plug-Ins...
  cfgplgns = new QAction;
  cfgplgns->setObjectName(QString::fromUtf8("action_tools_cfgplgns"));
  cfgplgns->setText(QApplication::translate("Selector", "Configure Plug-Ins...", nullptr));
  cfgplgns->setToolTip("Configure plug-ins");
  cfgplgns->setStatusTip("Configure plug-ins");
  cfgplgns->setWhatsThis("Configure plug-ins");
  cfgplgns->setEnabled(false);
  // Tools->Configure Tools...
  cfgtools = new QAction;
  cfgtools->setObjectName(QString::fromUtf8("action_tools_cfgtools"));
  cfgtools->setText(QApplication::translate("Selector", "Configure T&ools...", nullptr));
  cfgtools->setToolTip("Configure tools");
  cfgtools->setStatusTip("Configure tools");
  cfgtools->setWhatsThis("Configure tools");
  cfgtools->setEnabled(false);
  // Tools->Configure Documents...
  cfgdocs = new QAction;
  cfgdocs->setObjectName(QString::fromUtf8("action_tools_cfgdocs"));
  cfgdocs->setText(QApplication::translate("Selector", "Configure &Documents...", nullptr));
  cfgdocs->setToolTip("Configure documents");
  cfgdocs->setStatusTip("Configure documents");
  cfgdocs->setWhatsThis("Configure documents");
  cfgdocs->setEnabled(false);
  // Tools->Configure Reports...
  cfgreps = new QAction;
  cfgreps->setObjectName(QString::fromUtf8("action_tools_cfgreps"));
  cfgreps->setText(QApplication::translate("Selector", "Configure &Reports...", nullptr));
  cfgreps->setToolTip("Configure reports");
  cfgreps->setStatusTip("Configure reports");
  cfgreps->setWhatsThis("Configure reports");
  cfgreps->setEnabled(false);
  // Tools->Macro->Record
  macro_rec = new QAction;
  macro_rec->setObjectName(QString::fromUtf8("action_tools_macro_rec"));
  macro_rec->setText(QApplication::translate("Selector", "&Record", nullptr));
  #ifndef QT_NO_SHORTCUT
  macro_rec->setShortcut(QApplication::translate("Selector", "F11", nullptr));
  #endif // QT_NO_SHORTCUT
  macro_rec->setToolTip("Record macro");
  macro_rec->setStatusTip("Record macro");
  macro_rec->setWhatsThis("Record macro");
  macro_rec->setEnabled(false);
  // Tools->Macro->Playback
  macro_play = new QAction;
  macro_play->setObjectName(QString::fromUtf8("action_tools_macro_play"));
  macro_play->setText(QApplication::translate("Selector", "&Playback", nullptr));
  #ifndef QT_NO_SHORTCUT
  macro_play->setShortcut(QApplication::translate("Selector", "F12", nullptr));
  #endif // QT_NO_SHORTCUT
  macro_play->setToolTip("Playback macro");
  macro_play->setStatusTip("Playback macro");
  macro_play->setWhatsThis("Playback macro");
  macro_play->setEnabled(false);
  // Tools->Macro->Library...
  macro_lib = new QAction;
  macro_lib->setObjectName(QString::fromUtf8("action_tools_macro_lib"));
  macro_lib->setText(QApplication::translate("Selector", "&Library...", nullptr));
  macro_lib->setToolTip("Open macro library");
  macro_lib->setStatusTip("Open macro library");
  macro_lib->setWhatsThis("Open macro library");
  macro_lib->setEnabled(false);
  // Tools->Browser Folders...
  brodir = new QAction;
  brodir->setObjectName(QString::fromUtf8("action_tools_brodir"));
  brodir->setText(QApplication::translate("Selector", "Browser &Folders...", nullptr));
  brodir->setToolTip("Open browser folders");
  brodir->setStatusTip("Open browser folders");
  brodir->setWhatsThis("Open browser folders");
  brodir->setEnabled(false);
  // Tools->Browser Filters...
  brofil = new QAction;
  brofil->setObjectName(QString::fromUtf8("action_tools_brofil"));
  brofil->setText(QApplication::translate("Selector", "Browser F&ilters...", nullptr));
  brofil->setToolTip("Open browser filters");
  brofil->setStatusTip("Open browser filters");
  brofil->setWhatsThis("Open browser filters");
  brofil->setEnabled(false);
  // Tools->Template List
  tmpl = new QAction;
  tmpl->setObjectName(QString::fromUtf8("action_tools_tmpl"));
  tmpl->setText(QApplication::translate("Selector", "T&emplate List", nullptr));
  tmpl->setToolTip("Open template list");
  tmpl->setStatusTip("Open template list");
  tmpl->setWhatsThis("Open template list");
  tmpl->setCheckable(true);
  tmpl->setChecked(false);
  tmpl->setEnabled(false);
  // Tools->Toolbar
  tlbr = new QAction;
  tlbr->setObjectName(QString::fromUtf8("action_tools_tlbr"));
  tlbr->setText(QApplication::translate("Selector", "Toolbar", nullptr));
  tlbr->setToolTip("Show toolbars");
  tlbr->setStatusTip("Show toolbars");
  tlbr->setWhatsThis("Show toolbars");
  tlbr->setCheckable(true);
  tlbr->setChecked(true);
  // Tools->Explain Plan
  expln = new QAction;
  expln->setObjectName(QString::fromUtf8("action_tools_expln"));
  expln->setText(QApplication::translate("Selector", "E&xplain Plan", nullptr));
  #ifndef QT_NO_SHORTCUT
  expln->setShortcut(QApplication::translate("Selector", "F5", nullptr));
  #endif // QT_NO_SHORTCUT
  expln->setToolTip("Run explain plan command");
  expln->setStatusTip("Run explain plan command");
  expln->setWhatsThis("Run explain plan command");
  expln->setEnabled(false);
  // Tools->Code Assistant
  astnt = new QAction;
  astnt->setObjectName(QString::fromUtf8("action_tools_astnt"));
  astnt->setText(QApplication::translate("Selector", "Code &Assistant", nullptr));
  #ifndef QT_NO_SHORTCUT
  astnt->setShortcut(QApplication::translate("Selector", "F6", nullptr));
  #endif // QT_NO_SHORTCUT
  astnt->setToolTip("Run code assistant");
  astnt->setStatusTip("Run code assistant");
  astnt->setWhatsThis("Run code assistant");
  astnt->setEnabled(false);
  // Tools->Code Contents
  cntnts = new QAction;
  cntnts->setObjectName(QString::fromUtf8("action_tools_cntnts"));
  cntnts->setText(QApplication::translate("Selector", "&Code Contents", nullptr));
  cntnts->setToolTip("Show code contents");
  cntnts->setStatusTip("Show code contents");
  cntnts->setWhatsThis("Show code contents");
  cntnts->setEnabled(false);
  // Tools->Show Compiler Hints
  shnts = new QAction;
  shnts->setObjectName(QString::fromUtf8("action_tools_chnts"));
  shnts->setText(QApplication::translate("Selector", "Show Compiler &Hints", nullptr));
  shnts->setToolTip("Show compiler hints");
  shnts->setStatusTip("Show compiler hints");
  shnts->setWhatsThis("Show compiler hints");
  shnts->setEnabled(false);
  // Tools->Query Builder...
  qbldr = new QAction;
  qbldr->setObjectName(QString::fromUtf8("action_tools_qbldr"));
  qbldr->setText(QApplication::translate("Selector", "&Query Builder...", nullptr));
  qbldr->setToolTip("Run query builder");
  qbldr->setStatusTip("Run query builder");
  qbldr->setWhatsThis("Run query builder");
  qbldr->setEnabled(false);
  // Tools->Find Database Objects...
  fdbo = new QAction;
  fdbo->setObjectName(QString::fromUtf8("action_tools_fdbo"));
  fdbo->setText(QApplication::translate("Selector", "Find &Database Objects...", nullptr));
  fdbo->setToolTip("Execute search under database objects");
  fdbo->setStatusTip("Execute search under database objects");
  fdbo->setWhatsThis("Execute search under database objects");
  fdbo->setEnabled(false);
  // Tools->Compile Invalide Objects...
  cpinv = new QAction;
  cpinv->setObjectName(QString::fromUtf8("action_tools_cpinv"));
  cpinv->setText(QApplication::translate("Selector", "Compile I&nvalid Objects...", nullptr));
  cpinv->setToolTip("Compile invalide objects");
  cpinv->setStatusTip("Compile invalide objects");
  cpinv->setWhatsThis("Compile invalide objects");
  cpinv->setEnabled(false);
  // Tools->Export User Objects...
  expobj = new QAction;
  expobj->setObjectName(QString::fromUtf8("action_tools_expobj"));
  expobj->setText(QApplication::translate("Selector", "Export &User Objects...", nullptr));
  expobj->setToolTip("Export user objects");
  expobj->setStatusTip("Export user objects");
  expobj->setWhatsThis("Export user objects");
  expobj->setEnabled(false);
  // Tools->Compare User Objects...
  cmpobj = new QAction;
  cmpobj->setObjectName(QString::fromUtf8("action_tools_cmpobj"));
  cmpobj->setText(QApplication::translate("Selector", "Compare User O&bjects...", nullptr));
  cmpobj->setToolTip("Compare user objects");
  cmpobj->setStatusTip("Compare user objects");
  cmpobj->setWhatsThis("Compare user objects");
  cmpobj->setEnabled(false);
  // Tools->Event Monitor...
  emon = new QAction;
  emon->setObjectName(QString::fromUtf8("action_tools_emon"));
  emon->setText(QApplication::translate("Selector", "E&vent Monitor...", nullptr));
  emon->setToolTip("Run event monitor");
  emon->setStatusTip("Run event monitor");
  emon->setWhatsThis("Run event monitor");
  emon->setEnabled(false);
  // Tools->Sessions...
  sessns = new QAction;
  sessns->setObjectName(QString::fromUtf8("action_tools_sessns"));
  sessns->setText(QApplication::translate("Selector", "&Sessions...", nullptr));
  sessns->setToolTip("Show sessions");
  sessns->setStatusTip("Show sessions");
  sessns->setWhatsThis("Show sessions");
  sessns->setEnabled(false);
  // Tools->Test Manager...
  tstmngr = new QAction;
  tstmngr->setObjectName(QString::fromUtf8("action_tools_tstmngr"));
  tstmngr->setText(QApplication::translate("Selector", "Test Manager...", nullptr));
  tstmngr->setToolTip("Show test manager");
  tstmngr->setStatusTip("Show test manager");
  tstmngr->setWhatsThis("Show test manager");
  tstmngr->setEnabled(false);
  // Tools->Export Tables...
  exptbls = new QAction;
  exptbls->setObjectName(QString::fromUtf8("action_tools_exptbls"));
  exptbls->setText(QApplication::translate("Selector", "E&xport Tables...", nullptr));
  exptbls->setToolTip("Run export tables tool");
  exptbls->setStatusTip("Run export tables tool");
  exptbls->setWhatsThis("Run export tables tool");
  exptbls->setEnabled(false);
  // Tools->Import Tables...
  imptbls = new QAction;
  imptbls->setObjectName(QString::fromUtf8("action_tools_imptbls"));
  imptbls->setText(QApplication::translate("Selector", "Import Tables...", nullptr));
  imptbls->setToolTip("Run import tables tool");
  imptbls->setStatusTip("Run import tables tool");
  imptbls->setWhatsThis("Run import tables tool");
  imptbls->setEnabled(false);
  // Tools->Compare Table Data...
  cmptbld = new QAction;
  cmptbld->setObjectName(QString::fromUtf8("action_tools_cmptbld"));
  cmptbld->setText(QApplication::translate("Selector", "Compare &Table Data...", nullptr));
  cmptbld->setToolTip("Run compare tables data tool");
  cmptbld->setStatusTip("Run compare tables data tool");
  cmptbld->setWhatsThis("Run compare tables data tool");
  cmptbld->setEnabled(false);
  // Tools->Text Importer...
  imptxt = new QAction;
  imptxt->setObjectName(QString::fromUtf8("action_tools_imptxt"));
  imptxt->setText(QApplication::translate("Selector", "Text Importer...", nullptr));
  imptxt->setToolTip("Run text importer");
  imptxt->setStatusTip("Run text importer");
  imptxt->setWhatsThis("Run text importer");
  imptxt->setEnabled(false);
  // Tools->ODBC Importer...
  impODBC = new QAction;
  impODBC->setObjectName(QString::fromUtf8("action_tools_impODBC"));
  impODBC->setText(QApplication::translate("Selector", "ODBC Importer...", nullptr));
  impODBC->setToolTip("Run ODBC importer");
  impODBC->setStatusTip("Run ODBC importer");
  impODBC->setWhatsThis("Run ODBC importer");
  impODBC->setEnabled(false);
  // Tools->Data Generator...
  gendat = new QAction;
  gendat->setObjectName(QString::fromUtf8("action_tools_gendat"));
  gendat->setText(QApplication::translate("Selector", "Data &Generator...", nullptr));
  gendat->setToolTip("Run data generator");
  gendat->setStatusTip("Run data generator");
  gendat->setWhatsThis("Run data generator");
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
  dba_initpar->setText(QApplication::translate("Selector", "Initialization Parameters", nullptr));
  dba_initpar->setToolTip("Run report \"Database initialization parameters\"");
  dba_initpar->setStatusTip("Run report \"Database initialization parameters\"");
  dba_initpar->setWhatsThis("Run report \"Database initialization parameters\"");
  dba_initpar->setEnabled(false);
  // Reports->DBA->NLS Database Parameters
  dba_nlspar = new QAction;
  dba_nlspar->setObjectName(QString::fromUtf8("action_reps_dba_nlspar"));
  dba_nlspar->setText(QApplication::translate("Selector", "NLS Database Parameters", nullptr));
  dba_nlspar->setToolTip("Run report \"NLS database parameters\"");
  dba_nlspar->setStatusTip("Run report \"NLS database parameters\"");
  dba_nlspar->setWhatsThis("Run report \"NLS database parameters\"");
  dba_nlspar->setEnabled(false);
  // Reports->DBA->Role Privileges
  dba_rolprv = new QAction;
  dba_rolprv->setObjectName(QString::fromUtf8("action_reps_dba_rolprv"));
  dba_rolprv->setText(QApplication::translate("Selector", "Role Privileges", nullptr));
  dba_rolprv->setToolTip("Run report \"Role privileges\"");
  dba_rolprv->setStatusTip("Run report \"Role privileges\"");
  dba_rolprv->setWhatsThis("Run report \"Role privileges\"");
  dba_rolprv->setEnabled(false);
  // Reports->DBA->Roles
  dba_rol = new QAction;
  dba_rol->setObjectName(QString::fromUtf8("action_reps_dba_rol"));
  dba_rol->setText(QApplication::translate("Selector", "Roles", nullptr));
  dba_rol->setToolTip("Run report \"Roles\"");
  dba_rol->setStatusTip("Run report \"Roles\"");
  dba_rol->setWhatsThis("Run report \"Roles\"");
  dba_rol->setEnabled(false);
  // Reports->DBA->Rollback Segments
  dba_rlbseg = new QAction;
  dba_rlbseg->setObjectName(QString::fromUtf8("action_reps_dba_rlbseg"));
  dba_rlbseg->setText(QApplication::translate("Selector", "Rollback Segments", nullptr));
  dba_rlbseg->setToolTip("Run report \"Rollback segments\"");
  dba_rlbseg->setStatusTip("Run report \"Rollback segments\"");
  dba_rlbseg->setWhatsThis("Run report \"Rollback segments\"");
  dba_rlbseg->setEnabled(false);
  // Reports->DBA->Server Components
  dba_srvcom = new QAction;
  dba_srvcom->setObjectName(QString::fromUtf8("action_reps_dba_srvcom"));
  dba_srvcom->setText(QApplication::translate("Selector", "Server Components", nullptr));
  dba_srvcom->setToolTip("Run report \"Server components\"");
  dba_srvcom->setStatusTip("Run report \"Server components\"");
  dba_srvcom->setWhatsThis("Run report \"Server components\"");
  dba_srvcom->setEnabled(false);
  // Reports->DBA->System Priveleges
  dba_sysprv = new QAction;
  dba_sysprv->setObjectName(QString::fromUtf8("action_reps_dba_sysprv"));
  dba_sysprv->setText(QApplication::translate("Selector", "System Priveleges", nullptr));
  dba_sysprv->setToolTip("Run report \"System priveleges\"");
  dba_sysprv->setStatusTip("Run report \"System priveleges\"");
  dba_sysprv->setWhatsThis("Run report \"System priveleges\"");
  dba_sysprv->setEnabled(false);
  // Reports->DBA->Tablespaces
  dba_tblspcs = new QAction;
  dba_tblspcs->setObjectName(QString::fromUtf8("action_reps_dba_tblspcs"));
  dba_tblspcs->setText(QApplication::translate("Selector", "Tablespaces", nullptr));
  dba_tblspcs->setToolTip("Run report \"Tablespaces\"");
  dba_tblspcs->setStatusTip("Run report \"Tablespaces\"");
  dba_tblspcs->setWhatsThis("Run report \"Tablespaces\"");
  dba_tblspcs->setEnabled(false);
  // Reports->DBA->Total Free Space
  dba_tfs = new QAction;
  dba_tfs->setObjectName(QString::fromUtf8("action_reps_dba_tfs"));
  dba_tfs->setText(QApplication::translate("Selector", "Total Free Space", nullptr));
  dba_tfs->setToolTip("Run report \"Total free space\"");
  dba_tfs->setStatusTip("Run report \"Total free space\"");
  dba_tfs->setWhatsThis("Run report \"Total free space\"");
  dba_tfs->setEnabled(false);
  // Reports->DBA->Users
  dba_usrs = new QAction;
  dba_usrs->setObjectName(QString::fromUtf8("action_reps_dba_usrs"));
  dba_usrs->setText(QApplication::translate("Selector", "Users", nullptr));
  dba_usrs->setToolTip("Run report \"Users\"");
  dba_usrs->setStatusTip("Run report \"Users\"");
  dba_usrs->setWhatsThis("Run report \"Users\"");
  dba_usrs->setEnabled(false);
  // Reports->Objects->All Objects
  objects_all = new QAction;
  objects_all->setObjectName(QString::fromUtf8("action_reps_objects_all"));
  objects_all->setText(QApplication::translate("Selector", "All Objects", nullptr));
  objects_all->setToolTip("Run report \"All objects\"");
  objects_all->setStatusTip("Run report \"All objects\"");
  objects_all->setWhatsThis("Run report \"All objects\"");
  objects_all->setEnabled(false);
  // Reports->Objects->Indexes
  objects_idx = new QAction;
  objects_idx->setObjectName(QString::fromUtf8("action_reps_objects_idx"));
  objects_idx->setText(QApplication::translate("Selector", "Indexes", nullptr));
  objects_idx->setToolTip("Run report \"Indexes\"");
  objects_idx->setStatusTip("Run report \"Indexes\"");
  objects_idx->setWhatsThis("Run report \"Indexes\"");
  objects_idx->setEnabled(false);
  // Reports->Objects->Sequences
  objects_seq = new QAction;
  objects_seq->setObjectName(QString::fromUtf8("action_reps_objects_seq"));
  objects_seq->setText(QApplication::translate("Selector", "Sequences", nullptr));
  objects_seq->setToolTip("Run report \"Sequences\"");
  objects_seq->setStatusTip("Run report \"Sequences\"");
  objects_seq->setWhatsThis("Run report \"Sequences\"");
  objects_seq->setEnabled(false);
  // Reports->Objects->Synonyms
  objects_syn = new QAction;
  objects_syn->setObjectName(QString::fromUtf8("action_reps_objects_syn"));
  objects_syn->setText(QApplication::translate("Selector", "Synonyms", nullptr));
  objects_syn->setToolTip("Run report \"Synonyms\"");
  objects_syn->setStatusTip("Run report \"Synonyms\"");
  objects_syn->setWhatsThis("Run report \"Synonyms\"");
  objects_syn->setEnabled(false);
  // Reports->Objects->Tables
  objects_tbs = new QAction;
  objects_tbs->setObjectName(QString::fromUtf8("action_reps_objects_tbs"));
  objects_tbs->setText(QApplication::translate("Selector", "Tables", nullptr));
  objects_tbs->setToolTip("Run report \"Tables\"");
  objects_tbs->setStatusTip("Run report \"Tables\"");
  objects_tbs->setWhatsThis("Run report \"Tables\"");
  objects_tbs->setEnabled(false);
  // Reports->Objects->Triggers
  objects_trg = new QAction;
  objects_trg->setObjectName(QString::fromUtf8("action_reps_objects_trg"));
  objects_trg->setText(QApplication::translate("Selector", "Triggers", nullptr));
  objects_trg->setToolTip("Run report \"Triggers\"");
  objects_trg->setStatusTip("Run report \"Triggers\"");
  objects_trg->setWhatsThis("Run report \"Triggers\"");
  objects_trg->setEnabled(false);
  // Reports->Objects->Types
  objects_tps = new QAction;
  objects_tps->setObjectName(QString::fromUtf8("action_reps_objects_tps"));
  objects_tps->setText(QApplication::translate("Selector", "Types", nullptr));
  objects_tps->setToolTip("Run report \"Types\"");
  objects_tps->setStatusTip("Run report \"Types\"");
  objects_tps->setWhatsThis("Run report \"Types\"");
  objects_tps->setEnabled(false);
  // Reports->Objects->Views
  objects_views = new QAction;
  objects_views->setObjectName(QString::fromUtf8("action_reps_objects_views"));
  objects_views->setText(QApplication::translate("Selector", "Views", nullptr));
  objects_views->setToolTip("Run report \"Views\"");
  objects_views->setStatusTip("Run report \"Views\"");
  objects_views->setWhatsThis("Run report \"Views\"");
  objects_views->setEnabled(false);
  // Reports->Objects->Compilation Errors
  plsql_cperrs = new QAction;
  plsql_cperrs->setObjectName(QString::fromUtf8("action_reps_plsql_cperrs"));
  plsql_cperrs->setText(QApplication::translate("Selector", "Compilation Errors", nullptr));
  plsql_cperrs->setToolTip("Run report \"Compilation errors\"");
  plsql_cperrs->setStatusTip("Run report \"Compilation errors\"");
  plsql_cperrs->setWhatsThis("Run report \"Compilation errors\"");
  plsql_cperrs->setEnabled(false);
  // Reports->Objects->Granted Roles
  user_grrol = new QAction;
  user_grrol->setObjectName(QString::fromUtf8("action_reps_user_grrol"));
  user_grrol->setText(QApplication::translate("Selector", "Granted Roles", nullptr));
  user_grrol->setToolTip("Run report \"Granted roles\"");
  user_grrol->setStatusTip("Run report \"Granted roles\"");
  user_grrol->setWhatsThis("Run report \"Granted roles\"");
  user_grrol->setEnabled(false);
  // Reports->Objects->Granted System Privileges
  user_grsysprv = new QAction;
  user_grsysprv->setObjectName(QString::fromUtf8("action_reps_user_grsysprv"));
  user_grsysprv->setText(QApplication::translate("Selector", "Granted System Privileges", nullptr));
  user_grsysprv->setToolTip("Run report \"Granted system privileges\"");
  user_grsysprv->setStatusTip("Run report \"Granted system privileges\"");
  user_grsysprv->setWhatsThis("Run report \"Granted system privileges\"");
  user_grsysprv->setEnabled(false);
  // Reports->Objects->NLS Session Parameters
  user_nlssespar = new QAction;
  user_nlssespar->setObjectName(QString::fromUtf8("action_reps_user_nlssespar"));
  user_nlssespar->setText(QApplication::translate("Selector", "NLS Session Parameters", nullptr));
  user_nlssespar->setToolTip("Run report \"NLS session parameters\"");
  user_nlssespar->setStatusTip("Run report \"NLS session parameters\"");
  user_nlssespar->setWhatsThis("Run report \"NLS session parameters\"");
  user_nlssespar->setEnabled(false);
  // Reports->Objects->Object Privileges Made
  user_objprvmde = new QAction;
  user_objprvmde->setObjectName(QString::fromUtf8("action_reps_user_objprvmde"));
  user_objprvmde->setText(QApplication::translate("Selector", "Object Privileges Made", nullptr));
  user_objprvmde->setToolTip("Run report \"Object privileges made\"");
  user_objprvmde->setStatusTip("Run report \"Object privileges made\"");
  user_objprvmde->setWhatsThis("Run report \"Object privileges made\"");
  user_objprvmde->setEnabled(false);
  // Reports->Objects->Object Privileges Received
  user_objprvrcvd = new QAction;
  user_objprvrcvd->setObjectName(QString::fromUtf8("action_reps_user_objprvrcvd"));
  user_objprvrcvd->setText(QApplication::translate("Selector", "Object Privileges Received", nullptr));
  user_objprvrcvd->setToolTip("Run report \"Object privileges received\"");
  user_objprvrcvd->setStatusTip("Run report \"Object privileges received\"");
  user_objprvrcvd->setWhatsThis("Run report \"Object privileges received\"");
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
  tile->setText(QApplication::translate("Selector", "&Tile", nullptr));
  tile->setToolTip("Arrange windows in tile position");
  tile->setStatusTip("Arrange windows in tile position");
  tile->setWhatsThis("Arrange windows in tile position");
  tile->setEnabled(false);
  // Window->Cascade
  cascade = new QAction;
  cascade->setObjectName(QString::fromUtf8("action_window_cscd"));
  cascade->setText(QApplication::translate("Selector", "&Cascade", nullptr));
  cascade->setToolTip("Arrange windows in cascade position");
  cascade->setStatusTip("Arrange windows in cascade position");
  cascade->setWhatsThis("Arrange windows in cascade position");
  cascade->setEnabled(false);
  // Window->Arrange All
  arrall = new QAction;
  arrall->setObjectName(QString::fromUtf8("action_window_arrall"));
  arrall->setText(QApplication::translate("Selector", "&Arrange All", nullptr));
  arrall->setToolTip("Arrange windows in ??? position");
  arrall->setStatusTip("Arrange windows in ??? position");
  arrall->setWhatsThis("Arrange windows in ??? position");
  arrall->setEnabled(false);
  // Window->Save Layout
  savelo = new QAction;
  savelo->setObjectName(QString::fromUtf8("action_window_savelo"));
  savelo->setText(QApplication::translate("Selector", "&Save Layout", nullptr));
  savelo->setToolTip("Save current window layout");
  savelo->setStatusTip("Save current window layout");
  savelo->setWhatsThis("Save current window layout");
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
  help->setText(QApplication::translate("Selector", "&Help", nullptr));
  #ifndef QT_NO_SHORTCUT
  help->setShortcut(QApplication::translate("Selector", "F1", nullptr));
  #endif // QT_NO_SHORTCUT
  help->setToolTip("Show help");
  help->setStatusTip("Show help and user guides");
  help->setWhatsThis("Show help and user guides");
  help->setEnabled(false);
  // Help->Donates & Thanksgiving...
  donate = new QAction;
  donate->setObjectName(QString::fromUtf8("action_help_dnt"));
  donate->setText(QApplication::translate("Selector", "&Donates && Thanksgiving...", nullptr));
  donate->setToolTip("Show information about donates and thanksgiving");
  donate->setStatusTip("Show information about donates and thanksgiving");
  donate->setWhatsThis("Show information about donates and thanksgiving");
  donate->setEnabled(false);
  // Help->Support Info...
  suprt = new QAction;
  suprt->setObjectName(QString::fromUtf8("action_help_supp"));
  suprt->setText(QApplication::translate("Selector", "&Support Info...", nullptr));
  suprt->setToolTip("Show information about supporting this product");
  suprt->setStatusTip("Show information about supporting this product");
  suprt->setWhatsThis("Show information about supporting this product");
  suprt->setEnabled(false);
  // Help->About Selector...
  about = new QAction;
  about->setObjectName(QString::fromUtf8("action_help_about"));
  about->setText(QApplication::translate("Selector", "&About", nullptr));
  about->setToolTip("Show information about Selector");
  about->setStatusTip("Show information about Selector");
  about->setWhatsThis("Show information about Selector");
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
  edt_rec->setText(QApplication::translate("Selector", "Edit Data", nullptr));
  edt_rec->setToolTip("Unlock records for editing");
  edt_rec->setStatusTip("Unlock records for editing");
  edt_rec->setWhatsThis("Unlock records for editing");
  edt_rec->setIcon(QPixmap(":/icons/edit_data.png"));
  edt_rec->setEnabled(false);

  // Insert Record
  ins_rec = new QAction;
  ins_rec->setObjectName(QString::fromUtf8("action_trans_ins_rec"));
  ins_rec->setText(QApplication::translate("Selector", "Insert Record", nullptr));
  ins_rec->setToolTip("Insert new record");
  ins_rec->setStatusTip("Insert new record");
  ins_rec->setWhatsThis("Insert new record");
  ins_rec->setIcon(QPixmap(":/icons/insert_record.png"));
  ins_rec->setEnabled(false);

  // Delete Record
  del_rec = new QAction;
  del_rec->setObjectName(QString::fromUtf8("action_trans_del_rec"));
  del_rec->setText(QApplication::translate("Selector", "Delete Record", nullptr));
  del_rec->setToolTip("Delete record");
  del_rec->setStatusTip("Delete record");
  del_rec->setWhatsThis("Delete record");
  del_rec->setIcon(QPixmap(":/icons/delete_record.png"));
  del_rec->setEnabled(false);

  // Post Changes into DB
  post_chng = new QAction;
  post_chng->setObjectName(QString::fromUtf8("action_trans_post_chng"));
  post_chng->setText(QApplication::translate("Selector", "Post Changes", nullptr));
  post_chng->setToolTip("Post changes into database");
  post_chng->setStatusTip("Post changes into database");
  post_chng->setWhatsThis("Post changes into database");
  post_chng->setIcon(QPixmap(":/icons/post_changes.png"));
  post_chng->setEnabled(false);

  // Fetch Next Page (Alt+PgDown)
  fetch_rec = new QAction;
  fetch_rec->setObjectName(QString::fromUtf8("action_trans_fetch_rec"));
  fetch_rec->setText(QApplication::translate("Selector", "Fetch Next Page", nullptr));
  fetch_rec->setToolTip("Fetch next data portion from database");
  fetch_rec->setStatusTip("Fetch next data portion from database");
  fetch_rec->setWhatsThis("Fetch next data portion from database");
  fetch_rec->setIcon(QPixmap(":/icons/fetch_next_page.png"));
  #ifndef QT_NO_SHORTCUT
  fetch_rec->setShortcut(QApplication::translate("Selector", "Alt+PgDown", nullptr)); // ??? check shortcut
  #endif // QT_NO_SHORTCUT
  fetch_rec->setEnabled(false);

  // Fetch All Records (Alt+End)
  fetch_all = new QAction;
  fetch_all->setObjectName(QString::fromUtf8("action_trans_fetch_all"));
  fetch_all->setText(QApplication::translate("Selector", "Fetch All Records", nullptr));
  fetch_all->setToolTip("Fetch all data from database");
  fetch_all->setStatusTip("Fetch all data from database");
  fetch_all->setWhatsThis("Fetch all data from database");
  fetch_all->setIcon(QPixmap(":/icons/fetch_all_records.png"));
  #ifndef QT_NO_SHORTCUT
  fetch_all->setShortcut(QApplication::translate("Selector", "Alt+End", nullptr)); // ??? check shortcut
  #endif // QT_NO_SHORTCUT
  fetch_all->setEnabled(false);

  // Query By Example ???
  qry_by_ex = new QAction;
  qry_by_ex->setObjectName(QString::fromUtf8("action_trans_qry_by_ex"));
  qry_by_ex->setText(QApplication::translate("Selector", "Query By Example", nullptr));
  qry_by_ex->setToolTip("Query by example");
  qry_by_ex->setStatusTip("Query by example");
  qry_by_ex->setWhatsThis("Query by example");
  qry_by_ex->setIcon(QPixmap(":/icons/query_by_example.png"));
  qry_by_ex->setEnabled(false);

  // Clear Record
  clr_rec = new QAction;
  clr_rec->setObjectName(QString::fromUtf8("action_trans_clr_rec"));
  clr_rec->setText(QApplication::translate("Selector", "Clear Record", nullptr));
  clr_rec->setToolTip("Clear record contents");
  clr_rec->setStatusTip("Clear record contents");
  clr_rec->setWhatsThis("Clear record contents");
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
