#include "selector.h"
#include <QApplication>

Selector::Selector(QWidget *parent) : QMainWindow(parent)
{

    setObjectName(QString::fromUtf8("Selector"));
    setWindowTitle(QApplication::translate("Selector", "Selector", nullptr));
    setMinimumSize(QSize(300, 120));
    QSizePolicy szPolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    szPolicy.setHorizontalStretch(0);
    szPolicy.setVerticalStretch(0);
    szPolicy.setHeightForWidth(sizePolicy().hasHeightForWidth());
    setSizePolicy(szPolicy);
    setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.5, fx:0.5, fy:0.5, stop:0 rgba(190, 200, 210, 255), stop:1 rgba(160, 200, 190, 223));"));

    resize(800, 600);

    menubar.setObjectName(QString::fromUtf8("menubar"));
    menubar.setGeometry(QRect(0, 0, 800, 22));
      // File
      menu_file.setObjectName(QString::fromUtf8("menu_file"));
      menu_file.setTitle(QApplication::translate("Selector", "&File", nullptr));
        // File->New
        menu_file_new.setObjectName(QString::fromUtf8("menu_file_new"));
        menu_file_new.setTitle(QApplication::translate("Selector", "&New", nullptr));
        menu_file.addAction(menu_file_new.menuAction());
          // File->New->Program Window
          menu_file_new_prog_wnd.setObjectName(QString::fromUtf8("menu_file_new_prog_wnd"));
          menu_file_new_prog_wnd.setTitle(QApplication::translate("Selector", "&Program Window", nullptr));
          menu_file_new.addAction(menu_file_new_prog_wnd.menuAction());
            // File->New->Program Window->Blank
            action_file_new_prog_wnd_blank.setObjectName(QString::fromUtf8("action_file_new_prog_wnd_blank"));
            action_file_new_prog_wnd_blank.setText(QApplication::translate("Selector", "Blank", nullptr));
            menu_file_new_prog_wnd.addAction(&action_file_new_prog_wnd_blank);
            // File->New->Program Window->-------
            menu_file_new_prog_wnd.addSeparator();
            // File->New->Program Window->Function
            action_file_new_prog_wnd_func.setObjectName(QString::fromUtf8("action_file_new_prog_wnd_func"));
            action_file_new_prog_wnd_func.setText(QApplication::translate("Selector", "Function", nullptr));
            menu_file_new_prog_wnd.addAction(&action_file_new_prog_wnd_func);
            // File->New->Program Window->Java source
            action_file_new_prog_wnd_jsrc.setObjectName(QString::fromUtf8("action_file_new_prog_wnd_jsrc"));
            action_file_new_prog_wnd_jsrc.setText(QApplication::translate("Selector", "Java Source", nullptr));
            menu_file_new_prog_wnd.addAction(&action_file_new_prog_wnd_jsrc);
            // File->New->Program Window->Package
            action_file_new_prog_wnd_pkg.setObjectName(QString::fromUtf8("action_file_new_prog_wnd_pkg"));
            action_file_new_prog_wnd_pkg.setText(QApplication::translate("Selector", "Package", nullptr));
            menu_file_new_prog_wnd.addAction(&action_file_new_prog_wnd_pkg);
            // File->New->Program Window->Package body
            action_file_new_prog_wnd_pkgbdy.setObjectName(QString::fromUtf8("action_file_new_prog_wnd_pkgbdy"));
            action_file_new_prog_wnd_pkgbdy.setText(QApplication::translate("Selector", "Package Body", nullptr));
            menu_file_new_prog_wnd.addAction(&action_file_new_prog_wnd_pkgbdy);
            // File->New->Program Window->Package Specification
            action_file_new_prog_wnd_pkgspc.setObjectName(QString::fromUtf8("action_file_new_prog_wnd_pkgspc"));
            action_file_new_prog_wnd_pkgspc.setText(QApplication::translate("Selector", "Package Specification", nullptr));
            menu_file_new_prog_wnd.addAction(&action_file_new_prog_wnd_pkgspc);
            // File->New->Program Window->Procedure
            action_file_new_prog_wnd_proc.setObjectName(QString::fromUtf8("action_file_new_prog_wnd_proc"));
            action_file_new_prog_wnd_proc.setText(QApplication::translate("Selector", "Procedure", nullptr));
            menu_file_new_prog_wnd.addAction(&action_file_new_prog_wnd_proc);
            // File->New->Program Window->Trigger
            action_file_new_prog_wnd_trg.setObjectName(QString::fromUtf8("action_file_new_prog_wnd_trg"));
            action_file_new_prog_wnd_trg.setText(QApplication::translate("Selector", "Trigger", nullptr));
            menu_file_new_prog_wnd.addAction(&action_file_new_prog_wnd_trg);
            // File->New->Program Window->Type
            action_file_new_prog_wnd_type.setObjectName(QString::fromUtf8("action_file_new_prog_wnd_type"));
            action_file_new_prog_wnd_type.setText(QApplication::translate("Selector", "Type", nullptr));
            menu_file_new_prog_wnd.addAction(&action_file_new_prog_wnd_type);
            // File->New->Program Window->Type body
            action_file_new_prog_wnd_typebdy.setObjectName(QString::fromUtf8("action_file_new_prog_wnd_typebdy"));
            action_file_new_prog_wnd_typebdy.setText(QApplication::translate("Selector", "Type Body", nullptr));
            menu_file_new_prog_wnd.addAction(&action_file_new_prog_wnd_typebdy);
            // File->New->Program Window->Type Specification
            action_file_new_prog_wnd_typespc.setObjectName(QString::fromUtf8("action_file_new_prog_wnd_typespc"));
            action_file_new_prog_wnd_typespc.setText(QApplication::translate("Selector", "Type Specification", nullptr));
            menu_file_new_prog_wnd.addAction(&action_file_new_prog_wnd_typespc);
          // File->New->Test Window
          action_file_new_test.setObjectName(QString::fromUtf8("action_file_new_test"));
          action_file_new_test.setText(QApplication::translate("Selector", "&Test Window", nullptr));
          menu_file_new.addAction(&action_file_new_test);
          // File->New->SQL Window
          action_file_new_sql.setObjectName(QString::fromUtf8("action_file_new_sql"));
          action_file_new_sql.setText(QApplication::translate("Selector", "&SQL Window", nullptr));
          menu_file_new.addAction(&action_file_new_sql);
          // File->New->Report Window
          action_file_new_rpt.setObjectName(QString::fromUtf8("action_file_new_rpt"));
          action_file_new_rpt.setText(QApplication::translate("Selector", "&Report Window", nullptr));
          menu_file_new.addAction(&action_file_new_rpt);
          // File->New->Command Window
          action_file_new_cmd.setObjectName(QString::fromUtf8("action_file_new_cmd"));
          action_file_new_cmd.setText(QApplication::translate("Selector", "&Command Window", nullptr));
          menu_file_new.addAction(&action_file_new_cmd);
          // File->New->Explain Plan Window
          action_file_new_explan.setObjectName(QString::fromUtf8("action_file_new_explan"));
          action_file_new_explan.setText(QApplication::translate("Selector", "&Explain Plan Window", nullptr));
          menu_file_new.addAction(&action_file_new_explan);
          // File->New->Diagram Window
          action_file_new_diag.setObjectName(QString::fromUtf8("action_file_new_diag"));
          action_file_new_diag.setText(QApplication::translate("Selector", "&Diagram Window", nullptr));
          menu_file_new.addAction(&action_file_new_diag);
          // File->New->-------
          menu_file_new.addSeparator();
          // File->New->View
          action_file_new_view.setObjectName(QString::fromUtf8("action_file_new_view"));
          action_file_new_view.setText(QApplication::translate("Selector", "&View", nullptr));
          menu_file_new.addAction(&action_file_new_view);
          // File->New->Materialized View
          action_file_new_mview.setObjectName(QString::fromUtf8("action_file_new_mview"));
          action_file_new_mview.setText(QApplication::translate("Selector", "&Materialized View", nullptr));
          menu_file_new.addAction(&action_file_new_mview);
          // File->New->Table
          action_file_new_tbl.setObjectName(QString::fromUtf8("action_file_new_tbl"));
          action_file_new_tbl.setText(QApplication::translate("Selector", "T&able", nullptr));
          menu_file_new.addAction(&action_file_new_tbl);
          // File->New->Sequence
          action_file_new_seq.setObjectName(QString::fromUtf8("action_file_new_seq"));
          action_file_new_seq.setText(QApplication::translate("Selector", "Se&quence", nullptr));
          menu_file_new.addAction(&action_file_new_seq);
          // File->New->Synonym
          action_file_new_syn.setObjectName(QString::fromUtf8("action_file_new_syn"));
          action_file_new_syn.setText(QApplication::translate("Selector", "Sy&nonym", nullptr));
          menu_file_new.addAction(&action_file_new_syn);
          // File->New->Library
          action_file_new_lib.setObjectName(QString::fromUtf8("action_file_new_lib"));
          action_file_new_lib.setText(QApplication::translate("Selector", "&Library", nullptr));
          menu_file_new.addAction(&action_file_new_lib);
          // File->New->Directory
          action_file_new_dir.setObjectName(QString::fromUtf8("action_file_new_dir"));
          action_file_new_dir.setText(QApplication::translate("Selector", "D&irectory", nullptr));
          menu_file_new.addAction(&action_file_new_dir);
          // File->New->Job
          action_file_new_job.setObjectName(QString::fromUtf8("action_file_new_job"));
          action_file_new_job.setText(QApplication::translate("Selector", "&Job", nullptr));
          menu_file_new.addAction(&action_file_new_job);
          // File->New->Queue
          action_file_new_que.setObjectName(QString::fromUtf8("action_file_new_que"));
          action_file_new_que.setText(QApplication::translate("Selector", "Queue", nullptr));
          menu_file_new.addAction(&action_file_new_que);
          // File->New->Queue table
          action_file_new_quetbl.setObjectName(QString::fromUtf8("action_file_new_quetbl"));
          action_file_new_quetbl.setText(QApplication::translate("Selector", "Queue ta&ble", nullptr));
          menu_file_new.addAction(&action_file_new_quetbl);
          // File->New->-------
          menu_file_new.addSeparator();
          // File->New->User
          action_file_new_user.setObjectName(QString::fromUtf8("action_file_new_user"));
          action_file_new_user.setText(QApplication::translate("Selector", "&User", nullptr));
          menu_file_new.addAction(&action_file_new_user);
          // File->New->Role
          action_file_new_role.setObjectName(QString::fromUtf8("action_file_new_role"));
          action_file_new_role.setText(QApplication::translate("Selector", "R&ole", nullptr));
          menu_file_new.addAction(&action_file_new_role);
          // File->New->Profile
          action_file_new_profile.setObjectName(QString::fromUtf8("action_file_new_profile"));
          action_file_new_profile.setText(QApplication::translate("Selector", "Pro&file", nullptr));
          menu_file_new.addAction(&action_file_new_profile);
          // File->New->-------
          menu_file_new.addSeparator();
          // File->New->Database Link
          action_file_new_dblink.setObjectName(QString::fromUtf8("action_file_new_dblink"));
          action_file_new_dblink.setText(QApplication::translate("Selector", "Database Lin&k", nullptr));
          menu_file_new.addAction(&action_file_new_dblink);
        // File->Open
        menu_file_open.setObjectName(QString::fromUtf8("menu_file_open"));
        menu_file.addAction(menu_file_open.menuAction());
        menu_file_open.setTitle(QApplication::translate("Selector", "&Open", nullptr));
          // File->Open->Program File
          action_file_open_prog_file.setObjectName(QString::fromUtf8("action_file_open_prog_file"));
          action_file_open_prog_file.setText(QApplication::translate("Selector", "&Program File", nullptr));
          menu_file_open.addAction(&action_file_open_prog_file);
          // File->Open->Test Script
          action_file_open_test_script.setObjectName(QString::fromUtf8("action_file_open_test_script"));
          action_file_open_test_script.setText(QApplication::translate("Selector", "&Test Script", nullptr));
          menu_file_open.addAction(&action_file_open_test_script);
          // File->Open->SQL Script
          action_file_open_sql_sqript.setObjectName(QString::fromUtf8("action_file_open_sql_sqript"));
          action_file_open_sql_sqript.setText(QApplication::translate("Selector", "&SQL Script", nullptr));
          menu_file_open.addAction(&action_file_open_sql_sqript);
          // File->Open->Report File
          action_file_open_rpt_file.setObjectName(QString::fromUtf8("action_file_open_rpt_file"));
          action_file_open_rpt_file.setText(QApplication::translate("Selector", "&Report File", nullptr));
          menu_file_open.addAction(&action_file_open_rpt_file);
          // File->Open->Command File
          action_file_open_cmd_file.setObjectName(QString::fromUtf8("action_file_open_cmd_file"));
          action_file_open_cmd_file.setText(QApplication::translate("Selector", "&Command File", nullptr));
          menu_file_open.addAction(&action_file_open_cmd_file);
          // File->Open->Diagram File
          action_file_open_diag_file.setObjectName(QString::fromUtf8("action_file_open_diag_file"));
          action_file_open_diag_file.setText(QApplication::translate("Selector", "&Diagram File", nullptr));
          menu_file_open.addAction(&action_file_open_diag_file);
        // File->Reopen
        menu_file_reopen.setObjectName(QString::fromUtf8("menu_file_reopen"));
        menu_file.addAction(menu_file_reopen.menuAction());
        menu_file_reopen.setTitle(QApplication::translate("Selector", "&Reopen", nullptr));
        // File->-------
        menu_file.addSeparator();
        // File->Save
        action_file_save.setObjectName(QString::fromUtf8("action_file_save"));
        action_file_save.setText(QApplication::translate("Selector", "&Save", nullptr));
        #ifndef QT_NO_SHORTCUT
        action_file_save.setShortcut(QApplication::translate("Selector", "Ctrl+S", nullptr));
        #endif // QT_NO_SHORTCUT
        menu_file.addAction(&action_file_save);
        // File->Save As...
        action_file_save_as.setObjectName(QString::fromUtf8("action_file_save_as"));
        action_file_save_as.setText(QApplication::translate("Selector", "Save &As...", nullptr));
        menu_file.addAction(&action_file_save_as);
        // File->Save All
        action_file_save_all.setObjectName(QString::fromUtf8("action_file_save_all"));
        action_file_save_all.setText(QApplication::translate("Selector", "Save All", nullptr));
        menu_file.addAction(&action_file_save_all);
        // File->-------
        menu_file.addSeparator();
        // File->E-mail...
        action_file_email.setObjectName(QString::fromUtf8("action_file_email"));
        action_file_email.setText(QApplication::translate("Selector", "&E-mail...", nullptr));
        menu_file.addAction(&action_file_email);
        // File->-------
        menu_file.addSeparator();
        // File->Close
        action_file_close.setObjectName(QString::fromUtf8("action_file_close"));
        action_file_close.setText(QApplication::translate("Selector", "&Close", nullptr));
        menu_file.addAction(&action_file_close);
        // File->Close All
        action_file_close_all.setObjectName(QString::fromUtf8("action_file_close_all"));
        action_file_close_all.setText(QApplication::translate("Selector", "Clos&e All", nullptr));
        menu_file.addAction(&action_file_close_all);
        // File->-------
        menu_file.addSeparator();
        // File->Print
        action_file_print.setObjectName(QString::fromUtf8("action_file_print"));
        action_file_print.setText(QApplication::translate("Selector", "&Print", nullptr));
        menu_file.addAction(&action_file_print);
        // File->Print Setup...
        action_file_print_setup.setObjectName(QString::fromUtf8("action_file_print_setup"));
        action_file_print_setup.setText(QApplication::translate("Selector", "Print Setup...", nullptr));
        menu_file.addAction(&action_file_print_setup);
        // File->Page Setup...
        action_file_page_setup.setObjectName(QString::fromUtf8("action_file_page_setup"));
        action_file_page_setup.setText(QApplication::translate("Selector", "Page Setup...", nullptr));
        menu_file.addAction(&action_file_page_setup);
        // File->-------
        menu_file.addSeparator();
        // File->New Instance
        action_file_new_instance.setObjectName(QString::fromUtf8("action_file_new_instance"));
        action_file_new_instance.setText(QApplication::translate("Selector", "Ne&w Instance", nullptr));
        menu_file.addAction(&action_file_new_instance);
        // File->-------
        menu_file.addSeparator();
        // File->Authorization...
        action_file_authorization.setObjectName(QString::fromUtf8("action_file_authorization"));
        action_file_authorization.setText(QApplication::translate("Selector", "Authori&zation...", nullptr));
        menu_file.addAction(&action_file_authorization);
        // File->-------
        menu_file.addSeparator();
        // File->Exit
        action_file_exit.setObjectName(QString::fromUtf8("action_file_exit"));
        action_file_exit.setText(QApplication::translate("Selector", "E&xit", nullptr));
        #ifndef QT_NO_SHORTCUT
        action_file_exit.setShortcut(QApplication::translate("Selector", "Alt+F4", nullptr));
        #endif // QT_NO_SHORTCUT
        menu_file.addAction(&action_file_exit);
      menubar.addAction(menu_file.menuAction());

      // Edit
      menu_edit.setObjectName(QString::fromUtf8("menu_edit"));
      menu_edit.setTitle(QApplication::translate("Selector", "&Edit", nullptr));
        // Edit->Undo
        action_edit_undo.setObjectName(QString::fromUtf8("action_edit_undo"));
        action_edit_undo.setText(QApplication::translate("Selector", "&Undo", nullptr));
        #ifndef QT_NO_SHORTCUT
        action_edit_undo.setShortcut(QApplication::translate("Selector", "Ctrl+Z", nullptr));
        #endif // QT_NO_SHORTCUT
        menu_edit.addAction(&action_edit_undo);
        // Edit->Redo
        action_edit_redo.setObjectName(QString::fromUtf8("action_edit_redo"));
        action_edit_redo.setText(QApplication::translate("Selector", "&Redo", nullptr));
        #ifndef QT_NO_SHORTCUT
        action_edit_redo.setShortcut(QApplication::translate("Selector", "Shift+Ctrl+Z", nullptr));
        #endif // QT_NO_SHORTCUT
        menu_edit.addAction(&action_edit_redo);
        // Edit->-------
        menu_edit.addSeparator();
        // Edit->Beautifier
        action_edit_beautifier.setObjectName(QString::fromUtf8("action_edit_beautifier"));
        action_edit_beautifier.setText(QApplication::translate("Selector", "&Beautifier", nullptr));
        menu_edit.addAction(&action_edit_beautifier);
        // Edit->Beautifier Options
        action_edit_beautifier_optns.setObjectName(QString::fromUtf8("action_edit_beautifier_optns"));
        action_edit_beautifier_optns.setText(QApplication::translate("Selector", "Beautifier Options", nullptr));
        menu_edit.addAction(&action_edit_beautifier_optns);
        // Edit->-------
        menu_edit.addSeparator();
        // Edit->Cut
        action_edit_cut.setObjectName(QString::fromUtf8("action_edit_cut"));
        action_edit_cut.setText(QApplication::translate("Selector", "Cut", nullptr));
        #ifndef QT_NO_SHORTCUT
        action_edit_cut.setShortcut(QApplication::translate("Selector", "Ctrl+X", nullptr));
        #endif // QT_NO_SHORTCUT
        menu_edit.addAction(&action_edit_cut);
        // Edit->Copy
        action_edit_copy.setObjectName(QString::fromUtf8("action_edit_copy"));
        action_edit_copy.setText(QApplication::translate("Selector", "&Copy", nullptr));
        #ifndef QT_NO_SHORTCUT
        action_edit_copy.setShortcut(QApplication::translate("Selector", "Ctrl+C", nullptr));
        #endif // QT_NO_SHORTCUT
        menu_edit.addAction(&action_edit_copy);
        // Edit->Paste
        action_edit_paste.setObjectName(QString::fromUtf8("action_edit_paste"));
        action_edit_paste.setText(QApplication::translate("Selector", "&Paste", nullptr));
        #ifndef QT_NO_SHORTCUT
        action_edit_paste.setShortcut(QApplication::translate("Selector", "Ctrl+V", nullptr));
        #endif // QT_NO_SHORTCUT
        menu_edit.addAction(&action_edit_paste);
        // Edit->Append
        action_edit_append.setObjectName(QString::fromUtf8("action_edit_append"));
        action_edit_append.setText(QApplication::translate("Selector", "&Append", nullptr));
        menu_edit.addAction(&action_edit_append);
        // Edit->Clear
        action_edit_clear.setObjectName(QString::fromUtf8("action_edit_clear"));
        action_edit_clear.setText(QApplication::translate("Selector", "C&lear", nullptr));
        menu_edit.addAction(&action_edit_clear);
        // Edit->Select All
        action_edit_select_all.setObjectName(QString::fromUtf8("action_edit_select_all"));
        action_edit_select_all.setText(QApplication::translate("Selector", "Select All", nullptr));
        #ifndef QT_NO_SHORTCUT
        action_edit_select_all.setShortcut(QApplication::translate("Selector", "Ctrl+A", nullptr));
        #endif // QT_NO_SHORTCUT
        menu_edit.addAction(&action_edit_select_all);
        // Edit->Recall Statement
        action_edit_recall.setObjectName(QString::fromUtf8("action_edit_recall"));
        action_edit_recall.setText(QApplication::translate("Selector", "R&ecall Statement", nullptr));
        #ifndef QT_NO_SHORTCUT
        action_edit_recall.setShortcut(QApplication::translate("Selector", "Ctrl+E", nullptr));
        #endif // QT_NO_SHORTCUT
        menu_edit.addAction(&action_edit_recall);
        // Edit->Special Copy
        menu_edit_scpy.setObjectName(QString::fromUtf8("menu_edit_scpy"));
        menu_edit_scpy.setTitle(QApplication::translate("Selector", "Special Copy", nullptr));
        menu_edit.addAction(menu_edit_scpy.menuAction());
          // Edit->Special Copy->C++
          action_edit_scpy_cpp.setObjectName(QString::fromUtf8("action_edit_scpy_cpp"));
          action_edit_scpy_cpp.setText(QApplication::translate("Selector", "C++", nullptr));
          menu_edit_scpy.addAction(&action_edit_scpy_cpp);
          // Edit->Special Copy->Delphi
          action_edit_scpy_delphi.setObjectName(QString::fromUtf8("action_edit_scpy_delphi"));
          action_edit_scpy_delphi.setText(QApplication::translate("Selector", "Delphi", nullptr));
          menu_edit_scpy.addAction(&action_edit_scpy_delphi);
          // Edit->Special Copy->Java
          action_edit_scpy_java.setObjectName(QString::fromUtf8("action_edit_scpy_java"));
          action_edit_scpy_java.setText(QApplication::translate("Selector", "Java", nullptr));
          menu_edit_scpy.addAction(&action_edit_scpy_java);
          // Edit->Special Copy->PL/SQL
          action_edit_scpy_plsql.setObjectName(QString::fromUtf8("action_edit_scpy_plsql"));
          action_edit_scpy_plsql.setText(QApplication::translate("Selector", "PL/SQL", nullptr));
          menu_edit_scpy.addAction(&action_edit_scpy_plsql);
          // Edit->Special Copy->Visual Basic
          action_edit_scpy_basic.setObjectName(QString::fromUtf8("action_edit_scpy_basic"));
          action_edit_scpy_basic.setText(QApplication::translate("Selector", "Visual Basic", nullptr));
          menu_edit_scpy.addAction(&action_edit_scpy_basic);
        // Edit->Selection
        menu_edit_selection.setObjectName(QString::fromUtf8("menu_edit_selection"));
        menu_edit_selection.setTitle(QApplication::translate("Selector", "&Selection", nullptr));
        menu_edit.addAction(menu_edit_selection.menuAction());
          // Edit->Selection->Indent
          action_edit_selection_indent.setObjectName(QString::fromUtf8("action_edit_selection_indent"));
          action_edit_selection_indent.setText(QApplication::translate("Selector", "&Indent", nullptr));
          #ifndef QT_NO_SHORTCUT
          action_edit_selection_indent.setShortcut(QApplication::translate("Selector", "Ctrl+I", nullptr));
          #endif // QT_NO_SHORTCUT
          menu_edit_selection.addAction(&action_edit_selection_indent);
          // Edit->Selection->Unindent
          action_edit_selection_unindent.setObjectName(QString::fromUtf8("action_edit_selection_unindent"));
          action_edit_selection_unindent.setText(QApplication::translate("Selector", "&Unindent", nullptr));
          #ifndef QT_NO_SHORTCUT
          action_edit_selection_unindent.setShortcut(QApplication::translate("Selector", "Ctrl+U", nullptr));
          #endif // QT_NO_SHORTCUT
          menu_edit_selection.addAction(&action_edit_selection_unindent);
          // Edit->Selection->Uppercase
          action_edit_selection_uppercase.setObjectName(QString::fromUtf8("action_edit_selection_uppercase"));
          action_edit_selection_uppercase.setText(QApplication::translate("Selector", "Upper&case", nullptr));
          menu_edit_selection.addAction(&action_edit_selection_uppercase);
          // Edit->Selection->Lowercase
          action_edit_selection_lowercase.setObjectName(QString::fromUtf8("action_edit_selection_lowercase"));
          action_edit_selection_lowercase.setText(QApplication::translate("Selector", "&Lowercase", nullptr));
          menu_edit_selection.addAction(&action_edit_selection_lowercase);
          // Edit->Selection->Comment
          action_edit_selection_comment.setObjectName(QString::fromUtf8("action_edit_selection_comment"));
          action_edit_selection_comment.setText(QApplication::translate("Selector", "C&omment", nullptr));
          menu_edit_selection.addAction(&action_edit_selection_comment);
          // Edit->Selection->Uncomment
          action_edit_selection_uncomment.setObjectName(QString::fromUtf8("action_edit_selection_uncomment"));
          action_edit_selection_uncomment.setText(QApplication::translate("Selector", "U&ncomment", nullptr));
          menu_edit_selection.addAction(&action_edit_selection_uncomment);
          // Edit->Selection->Apply Syntax Case
          action_edit_selection_aplsyncase.setObjectName(QString::fromUtf8("action_edit_selection_aplsyncase"));
          action_edit_selection_aplsyncase.setText(QApplication::translate("Selector", "&Apply Syntax Case", nullptr));
          menu_edit_selection.addAction(&action_edit_selection_aplsyncase);
          // Edit->Selection->Sort
          action_edit_selection_sort.setObjectName(QString::fromUtf8("action_edit_selection_sort"));
          action_edit_selection_sort.setText(QApplication::translate("Selector", "&Sort", nullptr));
          menu_edit_selection.addAction(&action_edit_selection_sort);
          // Edit->Selection->Color Mark
          action_edit_selection_mark.setObjectName(QString::fromUtf8("action_edit_selection_mark"));
          action_edit_selection_mark.setText(QApplication::translate("Selector", "Color &Mark", nullptr));
          menu_edit_selection.addAction(&action_edit_selection_mark);
        // Edit->To-Do Items
        menu_edit_todo.setObjectName(QString::fromUtf8("menu_edit_todo"));
        menu_edit_todo.setTitle(QApplication::translate("Selector", "To-&Do Items", nullptr));
        menu_edit.addAction(menu_edit_todo.menuAction());
            // Edit->To-Do Items->Show List...
            action_edit_todo_list.setObjectName(QString::fromUtf8("action_edit_todo_list"));
            action_edit_todo_list.setText(QApplication::translate("Selector", "&Show List...", nullptr));
            menu_edit_todo.addAction(&action_edit_todo_list);
            // Edit->To-Do Items->Add Item...
            action_edit_todo_add.setObjectName(QString::fromUtf8("action_edit_todo_add"));
            action_edit_todo_add.setText(QApplication::translate("Selector", "&Add Item...", nullptr));
            menu_edit_todo.addAction(&action_edit_todo_add);
            // Edit->To-Do Items->Edit Item...
            action_edit_todo_edit.setObjectName(QString::fromUtf8("action_edit_todo_edit"));
            action_edit_todo_edit.setText(QApplication::translate("Selector", "&Edit Item...", nullptr));
            menu_edit_todo.addAction(&action_edit_todo_edit);
            // Edit->To-Do Items->Close Item
            action_edit_todo_close.setObjectName(QString::fromUtf8("action_edit_todo_close"));
            action_edit_todo_close.setText(QApplication::translate("Selector", "&Close Item", nullptr));
            menu_edit_todo.addAction(&action_edit_todo_close);
            // Edit->To-Do Items->Delete Item
            action_edit_todo_del.setObjectName(QString::fromUtf8("action_edit_todo_del"));
            action_edit_todo_del.setText(QApplication::translate("Selector", "&Delete Item", nullptr));
            menu_edit_todo.addAction(&action_edit_todo_del);
        // Edit->-------
        menu_edit.addSeparator();
        // Edit->Find
        action_edit_find.setObjectName(QString::fromUtf8("action_edit_find"));
        action_edit_find.setText(QApplication::translate("Selector", "&Find", nullptr));
        #ifndef QT_NO_SHORTCUT
        action_edit_find.setShortcut(QApplication::translate("Selector", "Ctrl+F", nullptr));
        #endif // QT_NO_SHORTCUT
        menu_edit.addAction(&action_edit_find);
        // Edit->Repeat Last Find
        action_edit_repeat_find.setObjectName(QString::fromUtf8("action_edit_repeat_find"));
        action_edit_repeat_find.setText(QApplication::translate("Selector", "Repeat &Last Find", nullptr));
        #ifndef QT_NO_SHORTCUT
        action_edit_repeat_find.setShortcut(QApplication::translate("Selector", "Ctrl+L", nullptr));
        #endif // QT_NO_SHORTCUT
        menu_edit.addAction(&action_edit_repeat_find);
        // Edit->Replace
        action_edit_replace.setObjectName(QString::fromUtf8("action_edit_replace"));
        action_edit_replace.setText(QApplication::translate("Selector", "Repl&ace", nullptr));
        #ifndef QT_NO_SHORTCUT
        action_edit_replace.setShortcut(QApplication::translate("Selector", "Ctrl+P", nullptr));
        #endif // QT_NO_SHORTCUT
        menu_edit.addAction(&action_edit_replace);
        // Edit->Search Bar
        action_edit_search_bar.setObjectName(QString::fromUtf8("action_edit_search_bar"));
        action_edit_search_bar.setText(QApplication::translate("Selector", "&Search Bar", nullptr));
        menu_edit.addAction(&action_edit_search_bar);
        // Edit->Find Matches
        action_edit_find_matches.setObjectName(QString::fromUtf8("action_edit_find_matches"));
        action_edit_find_matches.setText(QApplication::translate("Selector", "Find &Matches", nullptr));
        #ifndef QT_NO_SHORTCUT
        action_edit_find_matches.setShortcut(QApplication::translate("Selector", "Ctrl+M", nullptr));
        #endif // QT_NO_SHORTCUT
        menu_edit.addAction(&action_edit_find_matches);
        // Edit->Show Special Characters
        action_edit_show_spec.setObjectName(QString::fromUtf8("action_edit_show_spec"));
        action_edit_show_spec.setText(QApplication::translate("Selector", "Show Special Characters", nullptr));
        action_edit_show_spec.setCheckable(true);
        action_edit_show_spec.setChecked(false);
        menu_edit.addAction(&action_edit_show_spec);
        // Edit->Code Folding
        action_edit_code_folding.setObjectName(QString::fromUtf8("action_edit_code_folding"));
        action_edit_code_folding.setText(QApplication::translate("Selector", "Code Folding", nullptr));
        action_edit_code_folding.setCheckable(true);
        action_edit_code_folding.setChecked(true);
        menu_edit.addAction(&action_edit_code_folding);
        // Edit->Set Bookmark
        action_edit_bookmark_set.setObjectName(QString::fromUtf8("action_edit_bookmark_set"));
        action_edit_bookmark_set.setText(QApplication::translate("Selector", "Set Book&makr", nullptr));
        #ifndef QT_NO_SHORTCUT
        action_edit_bookmark_set.setShortcut(QApplication::translate("Selector", "Ctrl+K", nullptr));
        #endif // QT_NO_SHORTCUT
        menu_edit.addAction(&action_edit_bookmark_set);
        // Edit->Go to Bookmark
        menu_edit_bookmark_goto.setObjectName(QString::fromUtf8("menu_edit_bookmark_goto"));
        menu_edit_bookmark_goto.setTitle(QApplication::translate("Selector", "Go to Boo&kmark", nullptr));
        #ifndef QT_NO_SHORTCUT
        menu_edit_bookmark_goto.menuAction()->setShortcut(QApplication::translate("Selector", "Ctrl+Q", nullptr));
        #endif // QT_NO_SHORTCUT
        menu_edit.addAction(menu_edit_bookmark_goto.menuAction());
          // Edit->Go to Bookmark->Next
          action_edit_bookmark_goto_next.setObjectName(QString::fromUtf8("action_edit_bookmark_goto_next"));
          action_edit_bookmark_goto_next.setText(QApplication::translate("Selector", "&Next", nullptr));
          menu_edit_bookmark_goto.addAction(&action_edit_bookmark_goto_next);
          // Edit->Go to Bookmark->Previous
          action_edit_bookmark_goto_prev.setObjectName(QString::fromUtf8("action_edit_bookmark_goto_prev"));
          action_edit_bookmark_goto_prev.setText(QApplication::translate("Selector", "&Previous", nullptr));
          menu_edit_bookmark_goto.addAction(&action_edit_bookmark_goto_prev);
        // Edit->Bookmark List
        action_edit_bookmark_list.setObjectName(QString::fromUtf8("action_edit_bookmark_list"));
        action_edit_bookmark_list.setText(QApplication::translate("Selector", "Bookmakr List", nullptr));
        menu_edit.addAction(&action_edit_bookmark_list);
        // Edit->Go to Line
        action_edit_goto.setObjectName(QString::fromUtf8("action_edit_goto"));
        action_edit_goto.setText(QApplication::translate("Selector", "&Go to Line", nullptr));
        #ifndef QT_NO_SHORTCUT
        action_edit_goto.setShortcut(QApplication::translate("Selector", "Ctrl+G", nullptr));
        #endif // QT_NO_SHORTCUT
        menu_edit.addAction(&action_edit_goto);
        // Edit->-------
        menu_edit.addSeparator();
        // Edit->Next Tab Page
        action_edit_next_tab.setObjectName(QString::fromUtf8("action_edit_next_tab"));
        action_edit_next_tab.setText(QApplication::translate("Selector", "&Next Tab Page", nullptr));
        #ifndef QT_NO_SHORTCUT
        action_edit_next_tab.setShortcut(QApplication::translate("Selector", "Ctrl+H", nullptr));
        #endif // QT_NO_SHORTCUT
        menu_edit.addAction(&action_edit_next_tab);
        // Edit->Previous Tab Page
        action_edit_prev_tab.setObjectName(QString::fromUtf8("action_edit_prev_tab"));
        action_edit_prev_tab.setText(QApplication::translate("Selector", "&Previous Tab Page", nullptr));
        #ifndef QT_NO_SHORTCUT
        action_edit_prev_tab.setShortcut(QApplication::translate("Selector", "Shift+Ctrl+H", nullptr));
        #endif // QT_NO_SHORTCUT
        menu_edit.addAction(&action_edit_prev_tab);
      menubar.addAction(menu_edit.menuAction());

      // Session
      menu_session.setObjectName(QString::fromUtf8("menu_session"));
      menu_session.setTitle(QApplication::translate("Selector", "&Session", nullptr));
        // Session->Log on
        action_session_logon.setObjectName(QString::fromUtf8("action_session_logon"));
        action_session_logon.setText(QApplication::translate("Selector", "&Log on...", nullptr));
        menu_session.addAction(&action_session_logon);
        // Session->Log off
        action_session_logoff.setObjectName(QString::fromUtf8("action_session_logoff"));
        action_session_logoff.setText(QApplication::translate("Selector", "Log &off", nullptr));
        menu_session.addAction(&action_session_logoff);
        // Session->-------
        menu_session.addSeparator();
        // Session->Execute
        action_session_execute.setObjectName(QString::fromUtf8("action_session_execute"));
        action_session_execute.setText(QApplication::translate("Selector", "&Execute", nullptr));
        #ifndef QT_NO_SHORTCUT
        action_session_execute.setShortcut(QApplication::translate("Selector", "F8", nullptr));
        #endif // QT_NO_SHORTCUT
        menu_session.addAction(&action_session_execute);
        // Session->Break
        action_session_break.setObjectName(QString::fromUtf8("action_session_break"));
        action_session_break.setText(QApplication::translate("Selector", "&Break", nullptr));
        #ifndef QT_NO_SHORTCUT
        action_session_break.setShortcut(QApplication::translate("Selector", "Shift+Esc", nullptr));
        #endif // QT_NO_SHORTCUT
        menu_session.addAction(&action_session_break);
        // Session->Kill
        action_session_kill.setObjectName(QString::fromUtf8("action_session_kill"));
        action_session_kill.setText(QApplication::translate("Selector", "&Kill", nullptr));
        menu_session.addAction(&action_session_kill);
        // Session->Commit
        action_session_commit.setObjectName(QString::fromUtf8("action_session_commit"));
        action_session_commit.setText(QApplication::translate("Selector", "&Commit", nullptr));
        #ifndef QT_NO_SHORTCUT
        action_session_commit.setShortcut(QApplication::translate("Selector", "F10", nullptr));
        #endif // QT_NO_SHORTCUT
        menu_session.addAction(&action_session_commit);
        // Session->Rollback
        action_session_rollback.setObjectName(QString::fromUtf8("action_session_rollback"));
        action_session_rollback.setText(QApplication::translate("Selector", "&Rollback", nullptr));
        #ifndef QT_NO_SHORTCUT
        action_session_rollback.setShortcut(QApplication::translate("Selector", "Shift+F10", nullptr));
        #endif // QT_NO_SHORTCUT
        menu_session.addAction(&action_session_rollback);
        // Session->SQL Trace
        action_session_trace.setObjectName(QString::fromUtf8("action_session_trace"));
        action_session_trace.setText(QApplication::translate("Selector", "SQL &Trace", nullptr));
        menu_session.addAction(&action_session_trace);
      menubar.addAction(menu_session.menuAction());

      // Debug
      menu_debug.setObjectName(QString::fromUtf8("menu_debug"));
      menu_debug.setTitle(QApplication::translate("Selector", "&Debug", nullptr));
        // Debug->Toggle Breakpoint
        action_debug_breakpoint.setObjectName(QString::fromUtf8("action_debug_breakpoint"));
        action_debug_breakpoint.setText(QApplication::translate("Selector", "Toggle &Breakpoint", nullptr));
        #ifndef QT_NO_SHORTCUT
        action_debug_breakpoint.setShortcut(QApplication::translate("Selector", "Ctrl+B", nullptr));
        #endif // QT_NO_SHORTCUT
        menu_debug.addAction(&action_debug_breakpoint);
        // Debug->Modify Breakpoints...
        action_debug_mod_brkpnts.setObjectName(QString::fromUtf8("action_debug_mod_brkpnts"));
        action_debug_mod_brkpnts.setText(QApplication::translate("Selector", "&Modify Breakpoints...", nullptr));
        menu_debug.addAction(&action_debug_mod_brkpnts);
        // Debug->Start
        action_debug_start.setObjectName(QString::fromUtf8("action_debug_start"));
        action_debug_start.setText(QApplication::translate("Selector", "&Start", nullptr));
        #ifndef QT_NO_SHORTCUT
        action_debug_start.setShortcut(QApplication::translate("Selector", "F9", nullptr));
        #endif // QT_NO_SHORTCUT
        menu_debug.addAction(&action_debug_start);
        // Debug->-------
        menu_debug.addSeparator();
        // Debug->Run
        action_debug_run.setObjectName(QString::fromUtf8("action_debug_run"));
        action_debug_run.setText(QApplication::translate("Selector", "&Run", nullptr));
        #ifndef QT_NO_SHORTCUT
        action_debug_run.setShortcut(QApplication::translate("Selector", "Ctrl+R", nullptr));
        #endif // QT_NO_SHORTCUT
        menu_debug.addAction(&action_debug_run);
        // Debug->Step Into
        action_debug_step_into.setObjectName(QString::fromUtf8("action_debug_step_into"));
        action_debug_step_into.setText(QApplication::translate("Selector", "Step &Into", nullptr));
        #ifndef QT_NO_SHORTCUT
        action_debug_step_into.setShortcut(QApplication::translate("Selector", "Ctrl+N", nullptr));
        #endif // QT_NO_SHORTCUT
        menu_debug.addAction(&action_debug_step_into);
        // Debug->Step Over
        action_debug_step_over.setObjectName(QString::fromUtf8("action_debug_step_over"));
        action_debug_step_over.setText(QApplication::translate("Selector", "Step &Over", nullptr));
        #ifndef QT_NO_SHORTCUT
        action_debug_step_over.setShortcut(QApplication::translate("Selector", "Ctrl+O", nullptr));
        #endif // QT_NO_SHORTCUT
        menu_debug.addAction(&action_debug_step_over);
        // Debug->Step Out
        action_debug_step_out.setObjectName(QString::fromUtf8("action_debug_step_out"));
        action_debug_step_out.setText(QApplication::translate("Selector", "Step Ou&t", nullptr));
        #ifndef QT_NO_SHORTCUT
        action_debug_step_out.setShortcut(QApplication::translate("Selector", "Ctrl+T", nullptr));
        #endif // QT_NO_SHORTCUT
        menu_debug.addAction(&action_debug_step_out);
        // Debug->Run to Exception
        action_debug_continue.setObjectName(QString::fromUtf8("action_debug_continue"));
        action_debug_continue.setText(QApplication::translate("Selector", "Run to &Exception", nullptr));
        menu_debug.addAction(&action_debug_continue);
        // Debug->-------
        menu_debug.addSeparator();
        // Debug->Set Variable...
        action_debug_var.setObjectName(QString::fromUtf8("action_debug_var"));
        action_debug_var.setText(QApplication::translate("Selector", "Set &Variable...", nullptr));
        menu_debug.addAction(&action_debug_var);
      menubar.addAction(menu_debug.menuAction());

      // Tools
      menu_tools.setObjectName(QString::fromUtf8("menu_tools"));
      menu_tools.setTitle(QApplication::translate("Selector", "&Tools", nullptr));
        // Tools->Preferences...
        action_tools_pref.setObjectName(QString::fromUtf8("action_tools_pref"));
        action_tools_pref.setText(QApplication::translate("Selector", "&Preferences...", nullptr));
        menu_tools.addAction(&action_tools_pref);

      menubar.addAction(menu_tools.menuAction());

    setMenuBar(&menubar);


    toolBar.setObjectName(QString::fromUtf8("toolBar"));
    toolBar.setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.5, fx:0.5, fy:0.5, stop:0 rgba(190, 200, 210, 255), stop:1 rgba(160, 200, 190, 223));"));
    toolBar.addAction(&action_file_authorization);
    toolBar.addSeparator();
    toolBar.addAction(&action_edit_undo);
    addToolBar(Qt::TopToolBarArea, &toolBar);


    //    centralwidget = new QWidget(Selector);
    centralwidget.setObjectName(QString::fromUtf8("centralwidget"));
    //toolButton = new QToolBar(&centralwidget);
    //toolBar->setGeometry(QRect(0, 0, 800, 64));
    //toolButton->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    //toolButton->setText(QApplication::translate("Selector", "This is main tool bar", nullptr));
    setCentralWidget(&centralwidget);

    //    statusbar = new QStatusBar(MainWindow);
    statusbar.setObjectName(QString::fromUtf8("statusbar"));
    setStatusBar(&statusbar);

    QMetaObject::connectSlotsByName(this);
}


Selector::~Selector()
{
}
