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
        // File->Reopen
        menu_file_reopen.setObjectName(QString::fromUtf8("menu_file_reopen"));
        menu_file.addAction(menu_file_reopen.menuAction());
        menu_file_reopen.setTitle(QApplication::translate("Selector", "&Reopen", nullptr));
        // File->-------
        menu_file.addSeparator();
        // File->Save
        action_save.setObjectName(QString::fromUtf8("action_save"));
        action_save.setText(QApplication::translate("Selector", "&Save", nullptr));
        #ifndef QT_NO_SHORTCUT
        action_save.setShortcut(QApplication::translate("Selector", "Ctrl+S", nullptr));
        #endif // QT_NO_SHORTCUT
        menu_file.addAction(&action_save);
        // File->Save As...
        action_save_as.setObjectName(QString::fromUtf8("action_save_as"));
        action_save_as.setText(QApplication::translate("Selector", "Save &As...", nullptr));
        menu_file.addAction(&action_save_as);
        // File->Save All
        action_save_all.setObjectName(QString::fromUtf8("action_save_all"));
        action_save_all.setText(QApplication::translate("Selector", "Save All", nullptr));
        menu_file.addAction(&action_save_all);
        // File->-------
        menu_file.addSeparator();
        // File->E-mail...
        action_email.setObjectName(QString::fromUtf8("action_email"));
        action_email.setText(QApplication::translate("Selector", "&E-mail...", nullptr));
        menu_file.addAction(&action_email);
        // File->-------
        menu_file.addSeparator();
        // File->Close
        action_close.setObjectName(QString::fromUtf8("action_close"));
        action_close.setText(QApplication::translate("Selector", "&Close", nullptr));
        menu_file.addAction(&action_close);
        // File->Close All
        action_close_all.setObjectName(QString::fromUtf8("action_close_all"));
        action_close_all.setText(QApplication::translate("Selector", "Clos&e All", nullptr));
        menu_file.addAction(&action_close_all);
        // File->-------
        menu_file.addSeparator();
        // File->Print
        action_print.setObjectName(QString::fromUtf8("action_print"));
        action_print.setText(QApplication::translate("Selector", "&Print", nullptr));
        menu_file.addAction(&action_print);
        // File->Print Setup...
        action_print_setup.setObjectName(QString::fromUtf8("action_print_setup"));
        action_print_setup.setText(QApplication::translate("Selector", "Print Setup...", nullptr));
        menu_file.addAction(&action_print_setup);
        // File->Page Setup...
        action_page_setup.setObjectName(QString::fromUtf8("action_page_setup"));
        action_page_setup.setText(QApplication::translate("Selector", "Page Setup...", nullptr));
        menu_file.addAction(&action_page_setup);
        // File->-------
        menu_file.addSeparator();
        // File->New Instance
        action_new_instance.setObjectName(QString::fromUtf8("action_new_instance"));
        action_new_instance.setText(QApplication::translate("Selector", "Ne&w Instance", nullptr));
        menu_file.addAction(&action_new_instance);
        // File->-------
        menu_file.addSeparator();
        // File->Authorization...
        action_authorization.setObjectName(QString::fromUtf8("action_authorization"));
        action_authorization.setText(QApplication::translate("Selector", "Authori&zation...", nullptr));
        menu_file.addAction(&action_authorization);
        // File->-------
        menu_file.addSeparator();
        // File->Exit
        action_exit.setObjectName(QString::fromUtf8("action_exit"));
        action_exit.setText(QApplication::translate("Selector", "E&xit", nullptr));
        #ifndef QT_NO_SHORTCUT
        action_exit.setShortcut(QApplication::translate("Selector", "Alt+F4", nullptr));
        #endif // QT_NO_SHORTCUT
        menu_file.addAction(&action_exit);
      menubar.addAction(menu_file.menuAction());

      // Edit
      menu_edit.setObjectName(QString::fromUtf8("menu_edit"));
      menu_edit.setTitle(QApplication::translate("Selector", "&Edit", nullptr));
        action_undo.setObjectName(QString::fromUtf8("action_undo"));
        action_undo.setText(QApplication::translate("Selector", "&Undo", nullptr));
        #ifndef QT_NO_SHORTCUT
        action_undo.setShortcut(QApplication::translate("Selector", "Ctrl+Z", nullptr));
        #endif // QT_NO_SHORTCUT
        menu_edit.addAction(&action_undo);
      menubar.addAction(menu_edit.menuAction());

    setMenuBar(&menubar);


    toolBar.setObjectName(QString::fromUtf8("toolBar"));
    toolBar.addAction(&action_authorization);
    toolBar.addSeparator();
    toolBar.addAction(&action_undo);
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
