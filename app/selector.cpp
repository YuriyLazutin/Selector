#include "selector.h"
#include "sqlform.h"
#include <QApplication>
#include <QMenuBar>
#include <QToolBox>
#include <QBrush>
#include <QMdiSubWindow>

Selector::Selector(QWidget *parent) : QMainWindow(parent)
{

    setObjectName(QString::fromUtf8("Selector"));
    setWindowTitle(QApplication::translate("Selector", "Selector", nullptr));
    setWindowIcon(QIcon(":/icons/selector.png"));
    setMinimumSize(QSize(300, 120));
    QSizePolicy szPolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    szPolicy.setHorizontalStretch(0);
    szPolicy.setVerticalStretch(0);
    szPolicy.setHeightForWidth(sizePolicy().hasHeightForWidth());
    setSizePolicy(szPolicy);
    setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.5, fx:0.5, fy:0.5, stop:0 rgba(190, 200, 210, 255), stop:1 rgba(160, 200, 190, 223));"));

    resize(800, 600);

    CreateMenu();
    CreateToolBars();
    CreateDocks();

    // Create central widget
    MDIArea.setObjectName(QString::fromUtf8("centralwidgetMDI"));
    MDIArea.setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    MDIArea.setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    MDIArea.setBackground(QBrush(QColor(148, 167, 167)));

    // ToDo: This mode should be switch on/off via View menu
    // // MDIArea.setViewMode(QMdiArea::SubWindowView); // Default
    // MDIArea.setViewMode(QMdiArea::TabbedView);
    // MDIArea.setTabsMovable(true);
    // MDIArea.setTabsClosable (true);
    // // MDIArea.setTabShape(QTabWidget::Rounded); // Default
    // MDIArea.setTabShape(QTabWidget::Triangular);
    // // MDIArea.setDocumentMode(true); // ???
    // //MDIArea.setOption(QMdiArea::DontMaximizeSubWindowOnActivation);

    setCentralWidget(&MDIArea);
    //p_SigMapper = new QSignalMapper(this);
    //connect(p_SigMapper, SIGNAL(mapped(QWidget*)), this, SLOT(slotSetActiveSubWindow(QWidget*)));

    CreateStatusBar();

    QMetaObject::connectSlotsByName(this);
}


Selector::~Selector()
{
}

void Selector::CreateDocks()
{
  bottomDock.setObjectName(QString::fromUtf8("bottomDock"));
  bottomDock.setWindowTitle("Bottom Dock (Find Panel)");
  bottomDock.setAllowedAreas(Qt::BottomDockWidgetArea | Qt::TopDockWidgetArea);
  bottomDockLabel.setText("Test Label");
  //(bottomDock.titleBarWidget())->hide();
  //(bottomDock.titleBarWidget())->setVisible(true);
  //action_edit_search_bar = bottomDock.toggleViewAction();
  bottomDock.setWidget(&bottomDockLabel);
  //bottomDock.setWidget(&findTemplate);
  addDockWidget(Qt::BottomDockWidgetArea, &bottomDock);

  leftDockBrowser.setObjectName(QString::fromUtf8("leftDockBrowser"));
  leftDockBrowser.setWindowTitle("Left Dock (Browser)");
  leftDockBrowser.setWidget(&findTemplate);
  addDockWidget(Qt::LeftDockWidgetArea, &leftDockBrowser);

  DockWindowList.setObjectName(QString::fromUtf8("DockWindowList"));
  DockWindowList.setWindowTitle("Window List");
  QToolBox*     p_window_list;
  p_window_list = new QToolBox(&DockWindowList);
  p_window_list->addItem(new QLabel(p_window_list), QPixmap(":/icons/new-plsql.png"), "Slot for file 1");
  p_window_list->addItem(new QLabel(p_window_list), QPixmap(":/icons/new-plsql.png"), "Slot for file 2");
  p_window_list->addItem(new QLabel(p_window_list), QPixmap(":/icons/new-plsql.png"), "Slot for file 3");
  p_window_list->addItem(new QLabel(p_window_list), QPixmap(":/icons/new-plsql.png"), "Slot for file 4");
  p_window_list->addItem(new QLabel(p_window_list), QPixmap(":/icons/new-plsql.png"), "Slot for file 5");

  DockWindowList.setWidget(p_window_list);
  addDockWidget(Qt::LeftDockWidgetArea, &DockWindowList);
}

void Selector::CreateToolBars()
{
  // Create "Main operations" Toolbar
  toolBarMain.setObjectName(QString::fromUtf8("toolBarMain"));
  toolBarMain.setStyleSheet(QString::fromUtf8("background-color: rgb(163, 179, 186);"));
  toolBarMain.setWindowTitle("Main operations");
  toolBarMain.addAction(&action_session_logon);
  toolBarMain.addSeparator();
  toolBarMain.addAction(menu_file_new.menuAction());
  toolBarMain.addAction(menu_file_open.menuAction());
  toolBarMain.addAction(act_file.save);
  toolBarMain.addSeparator();
  toolBarMain.addAction(&action_edit_undo);
  toolBarMain.addAction(&action_edit_redo);
  toolBarMain.addSeparator();
  toolBarMain.addAction(&action_session_execute);
  toolBarMain.addAction(&action_session_break);
  toolBarMain.addAction(&action_session_commit);
  toolBarMain.addAction(&action_session_rollback);
  toolBarMain.addSeparator();
  addToolBar(Qt::TopToolBarArea, &toolBarMain);

  // Create "DML operations" Toolbar
  toolBarDML.setObjectName(QString::fromUtf8("toolBarDML"));
  toolBarDML.setStyleSheet(QString::fromUtf8("background-color: rgb(163, 179, 186);"));
  toolBarDML.setWindowTitle("DML operations");
  toolBarDML.addAction(&action_session_execute); // ToDo: replace with correct buttons
  toolBarDML.addAction(&action_session_break); // ToDo: replace with correct buttons
  toolBarDML.addAction(&action_session_commit); // ToDo: replace with correct buttons
  toolBarDML.addAction(&action_session_rollback); // ToDo: replace with correct buttons
  toolBarDML.addSeparator();
  addToolBar(Qt::TopToolBarArea, &toolBarDML);
}

void Selector::CreateMenu()
{
  QMenuBar* p_menu_bar=menuBar();
  QAction* p_menu_action;

  p_menu_bar->setObjectName(QString::fromUtf8("menubar"));
  p_menu_bar->setStyleSheet(QString::fromUtf8("background-color: rgb(163, 179, 186);"));
    // File
    menu_file.setObjectName(QString::fromUtf8("menu_file"));
    menu_file.setTitle(QApplication::translate("Selector", "&File", nullptr));
      // File->New
      menu_file_new.setObjectName(QString::fromUtf8("menu_file_new"));
      menu_file_new.setTitle(QApplication::translate("Selector", "&New", nullptr));
      p_menu_action = menu_file_new.menuAction();
      p_menu_action->setToolTip("New");
      p_menu_action->setStatusTip("Create a new program unit or database object");
      p_menu_action->setWhatsThis("Create a new program unit or database object");
      p_menu_action->setIcon(QPixmap(":/icons/new-sql.png"));
      //connect(p_menu_action, SIGNAL(triggered()), SLOT(slotNoImpl()));
      menu_file.addAction(p_menu_action);

        // File->New->Program Window
        menu_file_new_prog_wnd.setObjectName(QString::fromUtf8("menu_file_new_prog_wnd"));
        menu_file_new_prog_wnd.setTitle(QApplication::translate("Selector", "&Program Window", nullptr));
        p_menu_action = menu_file_new_prog_wnd.menuAction();
        p_menu_action->setToolTip("Create new PL/SQL program window");
        p_menu_action->setStatusTip("Create new PL/SQL program window");
        p_menu_action->setWhatsThis("Create new PL/SQL program window");
        p_menu_action->setIcon(QPixmap(":/icons/new-plsql.png"));
        //connect(p_menu_action, SIGNAL(triggered()), SLOT(slotNoImpl()));
        menu_file_new.addAction(p_menu_action);
          menu_file_new_prog_wnd.addAction(act_file.new_blank);            // File->New->Program Window->Blank
          menu_file_new_prog_wnd.addSeparator();                           // File->New->Program Window->-------
          menu_file_new_prog_wnd.addAction(act_file.new_func);             // File->New->Program Window->Function
          menu_file_new_prog_wnd.addAction(act_file.new_jsrc);             // File->New->Program Window->Java source
          menu_file_new_prog_wnd.addAction(act_file.new_pkg);              // File->New->Program Window->Package
          menu_file_new_prog_wnd.addAction(act_file.new_pkgbdy);           // File->New->Program Window->Package body
          menu_file_new_prog_wnd.addAction(act_file.new_pkgspc);           // File->New->Program Window->Package Specification
          menu_file_new_prog_wnd.addAction(act_file.new_proc);             // File->New->Program Window->Procedure
          menu_file_new_prog_wnd.addAction(act_file.new_trg);              // File->New->Program Window->Trigger
          menu_file_new_prog_wnd.addAction(act_file.new_type);             // File->New->Program Window->Type
          menu_file_new_prog_wnd.addAction(act_file.new_typebdy);          // File->New->Program Window->Type body
          menu_file_new_prog_wnd.addAction(act_file.new_typespc);          // File->New->Program Window->Type Specification
        menu_file_new.addAction(act_file.new_test);                     // File->New->Test Window
        menu_file_new.addAction(act_file.new_sql);                      // File->New->SQL Window
        connect(act_file.new_sql, SIGNAL(triggered()), SLOT(slotNewSQLForm()));
        menu_file_new.addAction(act_file.new_rpt);                      // File->New->Report Window
        connect(act_file.new_rpt, SIGNAL(triggered()), SLOT(slotNoImpl()));
        menu_file_new.addAction(act_file.new_cmd);                      // File->New->Command Window
        menu_file_new.addAction(act_file.new_explan);                   // File->New->Explain Plan Window
        menu_file_new.addAction(act_file.new_diag);                     // File->New->Diagram Window
        menu_file_new.addSeparator();                                   // File->New->-------
        menu_file_new.addAction(act_file.new_view);                     // File->New->View
        menu_file_new.addAction(act_file.new_mview);                    // File->New->Materialized View
        menu_file_new.addAction(act_file.new_tbl);                      // File->New->Table
        menu_file_new.addAction(act_file.new_seq);                      // File->New->Sequence
        menu_file_new.addAction(act_file.new_syn);                      // File->New->Synonym
        menu_file_new.addAction(act_file.new_lib);                      // File->New->Library
        menu_file_new.addAction(act_file.new_dir);                      // File->New->Directory
        menu_file_new.addAction(act_file.new_job);                      // File->New->Job
        menu_file_new.addAction(act_file.new_que);                      // File->New->Queue
        menu_file_new.addAction(act_file.new_quetbl);                   // File->New->Queue table
        menu_file_new.addSeparator();                                   // File->New->-------
        menu_file_new.addAction(act_file.new_user);                     // File->New->User
        menu_file_new.addAction(act_file.new_role);                     // File->New->Role
        menu_file_new.addAction(act_file.new_profile);                  // File->New->Profile
        menu_file_new.addSeparator();                                   // File->New->-------
        menu_file_new.addAction(act_file.new_dblink);                   // File->New->Database Link
      // File->Open
      menu_file_open.setObjectName(QString::fromUtf8("menu_file_open"));
      p_menu_action = menu_file_open.menuAction();
      p_menu_action->setToolTip("Open existing file");
      p_menu_action->setStatusTip("Open existing program file");
      p_menu_action->setWhatsThis("Open existing program file");
      p_menu_action->setIcon(QPixmap(":/icons/open-sql.png"));
      //connect(p_menu_action, SIGNAL(triggered()), SLOT(slotNoImpl()));
      menu_file.addAction(p_menu_action);
      menu_file_open.setTitle(QApplication::translate("Selector", "&Open", nullptr));
        menu_file_open.addAction(act_file.open_prog);                   // File->Open->Program File
        menu_file_open.addAction(act_file.open_test);                   // File->Open->Test Script
        menu_file_open.addAction(act_file.open_sql);                    // File->Open->SQL Script
        connect(act_file.open_sql, SIGNAL(triggered()), SLOT(slotOpenSQLForm()));
        menu_file_open.addAction(act_file.open_rpt);                    // File->Open->Report File
        connect(act_file.open_rpt, SIGNAL(triggered()), SLOT(slotNoImpl()));
        menu_file_open.addAction(act_file.open_cmd);                    // File->Open->Command File
        menu_file_open.addAction(act_file.open_diag);                   // File->Open->Diagram File
      // File->Reopen
      menu_file_reopen.setObjectName(QString::fromUtf8("menu_file_reopen"));
      menu_file.addAction(menu_file_reopen.menuAction());
      menu_file_reopen.setTitle(QApplication::translate("Selector", "&Reopen", nullptr));
      // File->-------
      menu_file.addSeparator();
      menu_file.addAction(act_file.save);                         // File->Save
      connect(act_file.save, SIGNAL(triggered()), SLOT(slotFileSave()));
      menu_file.addAction(act_file.save_as);                      // File->Save As...
      connect(act_file.save_as, SIGNAL(triggered()), SLOT(slotFileSaveAs()));
      menu_file.addAction(act_file.save_all);                     // File->Save All
      connect(act_file.save_all, SIGNAL(triggered()), SLOT(slotFileSaveAll()));
      menu_file.addSeparator();                                   // File->-------
      menu_file.addAction(act_file.email);                        // File->E-mail...
      connect(act_file.email, SIGNAL(triggered()), SLOT(slotNoImpl()));
      menu_file.addSeparator();                                   // File->-------
      menu_file.addAction(act_file.close);                        // File->Close
      connect(act_file.close, SIGNAL(triggered()), SLOT(slotNoImpl()));
      menu_file.addAction(act_file.close_all);                    // File->Close All
      connect(act_file.close_all, SIGNAL(triggered()), SLOT(slotNoImpl()));
      menu_file.addSeparator();                                   // File->-------
      menu_file.addAction(act_file.print);                        // File->Print
      connect(act_file.print, SIGNAL(triggered()), SLOT(slotNoImpl()));
      menu_file.addAction(act_file.print_setup);                  // File->Print Setup...
      connect(act_file.print_setup, SIGNAL(triggered()), SLOT(slotNoImpl()));
      menu_file.addAction(act_file.page_setup);                   // File->Page Setup...
      connect(act_file.page_setup, SIGNAL(triggered()), SLOT(slotNoImpl()));
      menu_file.addSeparator();                                   // File->-------
      menu_file.addAction(act_file.new_instance);                 // File->New Instance
      connect(act_file.new_instance, SIGNAL(triggered()), SLOT(slotNoImpl()));
      menu_file.addSeparator();                                   // File->-------
      menu_file.addAction(act_file.authorization);                // File->Authorization...
      connect(act_file.authorization, SIGNAL(triggered()), SLOT(slotNoImpl()));
      menu_file.addSeparator();                                   // File->-------
      menu_file.addAction(act_file.exit);                         // File->Exit
      connect(act_file.exit, SIGNAL(triggered()), qApp, SLOT(closeAllWindows()));
    p_menu_bar->addAction(menu_file.menuAction());

    // Edit
    menu_edit.setObjectName(QString::fromUtf8("menu_edit"));
    menu_edit.setTitle(QApplication::translate("Selector", "&Edit", nullptr));
      // Edit->Undo
      action_edit_undo.setObjectName(QString::fromUtf8("action_edit_undo"));
      action_edit_undo.setText(QApplication::translate("Selector", "&Undo", nullptr));
      #ifndef QT_NO_SHORTCUT
      action_edit_undo.setShortcut(QApplication::translate("Selector", "Ctrl+Z", nullptr));
      #endif // QT_NO_SHORTCUT
      action_edit_undo.setToolTip("Undo last edit operation");
      action_edit_undo.setStatusTip("Allow you to undo last edit operations");
      action_edit_undo.setWhatsThis("Allow you to undo last edit operations");
      action_edit_undo.setIcon(QPixmap(":/icons/edit-undo.png"));
      action_edit_undo.setEnabled(false);
      connect(&action_edit_undo, SIGNAL(triggered()), SLOT(slotNoImpl()));
      menu_edit.addAction(&action_edit_undo);
      // Edit->Redo
      action_edit_redo.setObjectName(QString::fromUtf8("action_edit_redo"));
      action_edit_redo.setText(QApplication::translate("Selector", "&Redo", nullptr));
      #ifndef QT_NO_SHORTCUT
      action_edit_redo.setShortcut(QApplication::translate("Selector", "Shift+Ctrl+Z", nullptr));
      #endif // QT_NO_SHORTCUT
      action_edit_redo.setToolTip("Redo last undo");
      action_edit_redo.setStatusTip("Allow you to restore last edit operations (if it was undone)");
      action_edit_redo.setWhatsThis("Allow you to restore last edit operations (if it was undone)");
      action_edit_redo.setIcon(QPixmap(":/icons/edit-redo.png"));
      action_edit_redo.setEnabled(false);
      connect(&action_edit_redo, SIGNAL(triggered()), SLOT(slotNoImpl()));
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
      action_edit_search_bar.setObjectName(QString::fromUtf8("action_edit_search_bar"));  // ToDo: Remove this if docks will implemented
      action_edit_search_bar.setText(QApplication::translate("Selector", "&Search Bar", nullptr));  // ToDo: Remove this if docks will implemented
      menu_edit.addAction(&action_edit_search_bar);  // ToDo: Remove this if docks will implemented
      menu_edit.addAction(bottomDock.toggleViewAction());
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
    p_menu_bar->addAction(menu_edit.menuAction());

    // Session
    menu_session.setObjectName(QString::fromUtf8("menu_session"));
    menu_session.setTitle(QApplication::translate("Selector", "&Session", nullptr));
      // Session->Log on
      action_session_logon.setObjectName(QString::fromUtf8("action_session_logon"));
      action_session_logon.setText(QApplication::translate("Selector", "&Log on...", nullptr));
      action_session_logon.setToolTip("Log on");
      action_session_logon.setStatusTip("Create a new connection to the remote server");
      action_session_logon.setWhatsThis("Create a new connection to the remote server");
      action_session_logon.setIcon(QPixmap(":/icons/login.png"));
      connect(&action_session_logon, SIGNAL(triggered()), SLOT(slotNoImpl()));
      menu_session.addAction(&action_session_logon);
      // Session->Log off
      action_session_logoff.setObjectName(QString::fromUtf8("action_session_logoff"));
      action_session_logoff.setText(QApplication::translate("Selector", "Log &off", nullptr));
      action_session_logoff.setEnabled(false);
      menu_session.addAction(&action_session_logoff);
      // Session->-------
      menu_session.addSeparator();
      // Session->Execute
      action_session_execute.setObjectName(QString::fromUtf8("action_session_execute"));
      action_session_execute.setText(QApplication::translate("Selector", "&Execute", nullptr));
      #ifndef QT_NO_SHORTCUT
      action_session_execute.setShortcut(QApplication::translate("Selector", "F8", nullptr));
      #endif // QT_NO_SHORTCUT
      action_session_execute.setToolTip("Execute");
      action_session_execute.setStatusTip("Execute program or script");
      action_session_execute.setWhatsThis("Execute program or script");
      action_session_execute.setIcon(QPixmap(":/icons/execute.png"));
      connect(&action_session_execute, SIGNAL(triggered()), SLOT(slotNoImpl()));
      action_session_execute.setEnabled(false);
      menu_session.addAction(&action_session_execute);
      // Session->Break
      action_session_break.setObjectName(QString::fromUtf8("action_session_break"));
      action_session_break.setText(QApplication::translate("Selector", "&Break", nullptr));
      #ifndef QT_NO_SHORTCUT
      action_session_break.setShortcut(QApplication::translate("Selector", "Shift+Esc", nullptr));
      #endif // QT_NO_SHORTCUT
      action_session_break.setToolTip("Break");
      action_session_break.setStatusTip("Break program or script execution");
      action_session_break.setWhatsThis("Break program or script execution");
      action_session_break.setIcon(QPixmap(":/icons/abort.png"));
      connect(&action_session_break, SIGNAL(triggered()), SLOT(slotNoImpl()));
      action_session_break.setEnabled(false);
      menu_session.addAction(&action_session_break);
      // Session->Kill
      action_session_kill.setObjectName(QString::fromUtf8("action_session_kill"));
      action_session_kill.setText(QApplication::translate("Selector", "&Kill", nullptr));
      action_session_kill.setEnabled(false);
      menu_session.addAction(&action_session_kill);
      // Session->Commit
      action_session_commit.setObjectName(QString::fromUtf8("action_session_commit"));
      action_session_commit.setText(QApplication::translate("Selector", "&Commit", nullptr));
      #ifndef QT_NO_SHORTCUT
      action_session_commit.setShortcut(QApplication::translate("Selector", "F10", nullptr));
      #endif // QT_NO_SHORTCUT
      action_session_commit.setToolTip("Commit");
      action_session_commit.setStatusTip("Commit current transaction");
      action_session_commit.setWhatsThis("Commit current transaction");
      action_session_commit.setIcon(QPixmap(":/icons/commit.png"));
      connect(&action_session_commit, SIGNAL(triggered()), SLOT(slotNoImpl()));
      action_session_commit.setEnabled(false);
      menu_session.addAction(&action_session_commit);
      // Session->Rollback
      action_session_rollback.setObjectName(QString::fromUtf8("action_session_rollback"));
      action_session_rollback.setText(QApplication::translate("Selector", "&Rollback", nullptr));
      #ifndef QT_NO_SHORTCUT
      action_session_rollback.setShortcut(QApplication::translate("Selector", "Shift+F10", nullptr));
      #endif // QT_NO_SHORTCUT
      action_session_rollback.setToolTip("Rollback");
      action_session_rollback.setStatusTip("Rollback current transaction");
      action_session_rollback.setWhatsThis("Rollback current transaction");
      action_session_rollback.setIcon(QPixmap(":/icons/rollback.png"));
      connect(&action_session_rollback, SIGNAL(triggered()), SLOT(slotNoImpl()));
      action_session_rollback.setEnabled(false);
      menu_session.addAction(&action_session_rollback);
      // Session->SQL Trace
      action_session_trace.setObjectName(QString::fromUtf8("action_session_trace"));
      action_session_trace.setText(QApplication::translate("Selector", "SQL &Trace", nullptr));
      action_session_trace.setEnabled(false);
      menu_session.addAction(&action_session_trace);
    p_menu_bar->addAction(menu_session.menuAction());

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
    p_menu_bar->addAction(menu_debug.menuAction());

    // Tools
    menu_tools.setObjectName(QString::fromUtf8("menu_tools"));
    menu_tools.setTitle(QApplication::translate("Selector", "&Tools", nullptr));
      // Tools->Preferences...
      action_tools_pref.setObjectName(QString::fromUtf8("action_tools_pref"));
      action_tools_pref.setText(QApplication::translate("Selector", "&Preferences...", nullptr));
      menu_tools.addAction(&action_tools_pref);
      // Tools->-------
      menu_tools.addSeparator();
      // Tools->Configure Plug-Ins...
      action_tools_cfgplgns.setObjectName(QString::fromUtf8("action_tools_cfgplgns"));
      action_tools_cfgplgns.setText(QApplication::translate("Selector", "Configure Plug-Ins...", nullptr));
      action_tools_cfgplgns.setEnabled(false);
      menu_tools.addAction(&action_tools_cfgplgns);
      // Tools->Configure Tools...
      action_tools_cfgtools.setObjectName(QString::fromUtf8("action_tools_cfgtools"));
      action_tools_cfgtools.setText(QApplication::translate("Selector", "Configure T&ools...", nullptr));
      menu_tools.addAction(&action_tools_cfgtools);
      // Tools->Configure Documents...
      action_tools_cfgdocs.setObjectName(QString::fromUtf8("action_tools_cfgdocs"));
      action_tools_cfgdocs.setText(QApplication::translate("Selector", "Configure &Documents...", nullptr));
      menu_tools.addAction(&action_tools_cfgdocs);
      // Tools->Configure Reports...
      action_tools_cfgreps.setObjectName(QString::fromUtf8("action_tools_cfgreps"));
      action_tools_cfgreps.setText(QApplication::translate("Selector", "Configure &Reports...", nullptr));
      menu_tools.addAction(&action_tools_cfgreps);
      // Tools->Macro
      menu_tools_macro.setObjectName(QString::fromUtf8("menu_tools_macro"));
      menu_tools_macro.setTitle(QApplication::translate("Selector", "&Macro", nullptr));
      menu_tools.addAction(menu_tools_macro.menuAction());
        // Tools->Macro->Record
        action_tools_macro_rec.setObjectName(QString::fromUtf8("action_tools_macro_rec"));
        action_tools_macro_rec.setText(QApplication::translate("Selector", "&Record", nullptr));
        action_tools_macro_rec.setEnabled(false);
        #ifndef QT_NO_SHORTCUT
        action_tools_macro_rec.setShortcut(QApplication::translate("Selector", "F11", nullptr));
        #endif // QT_NO_SHORTCUT
        menu_tools_macro.addAction(&action_tools_macro_rec);
        // Tools->Macro->Playback
        action_tools_macro_play.setObjectName(QString::fromUtf8("action_tools_macro_play"));
        action_tools_macro_play.setText(QApplication::translate("Selector", "&Playback", nullptr));
        action_tools_macro_play.setEnabled(false);
        #ifndef QT_NO_SHORTCUT
        action_tools_macro_play.setShortcut(QApplication::translate("Selector", "F12", nullptr));
        #endif // QT_NO_SHORTCUT
        menu_tools_macro.addAction(&action_tools_macro_play);
        // Tools->Macro->Library...
        action_tools_macro_lib.setObjectName(QString::fromUtf8("action_tools_macro_lib"));
        action_tools_macro_lib.setText(QApplication::translate("Selector", "&Library...", nullptr));
        menu_tools_macro.addAction(&action_tools_macro_lib);
      // Tools->-------
      menu_tools.addSeparator();
      // Tools->Browser
      action_tools_bro.setObjectName(QString::fromUtf8("action_tools_bro")); // ToDo: Remove this if docks will implemented
      action_tools_bro.setText(QApplication::translate("Selector", "&Browser", nullptr)); // ToDo: Remove this if docks will implemented
      action_tools_bro.setCheckable(true); // ToDo: Remove this if docks will implemented
      action_tools_bro.setChecked(true); // ToDo: Remove this if docks will implemented
      menu_tools.addAction(&action_tools_bro); // ToDo: Remove this if docks will implemented
      menu_tools.addAction(leftDockBrowser.toggleViewAction());
      // Tools->Browser Folders...
      action_tools_brodir.setObjectName(QString::fromUtf8("action_tools_brodir"));
      action_tools_brodir.setText(QApplication::translate("Selector", "Browser &Folders...", nullptr));
      menu_tools.addAction(&action_tools_brodir);
      // Tools->Browser Filters...
      action_tools_brofil.setObjectName(QString::fromUtf8("action_tools_brofil"));
      action_tools_brofil.setText(QApplication::translate("Selector", "Browser F&ilters...", nullptr));
      menu_tools.addAction(&action_tools_brofil);
      // Tools->Template List
      action_tools_tmpl.setObjectName(QString::fromUtf8("action_tools_tmpl"));
      action_tools_tmpl.setText(QApplication::translate("Selector", "T&emplate List", nullptr));
      action_tools_tmpl.setCheckable(true);
      action_tools_tmpl.setChecked(false);
      menu_tools.addAction(&action_tools_tmpl);
      // Tools->Window List
      menu_tools.addAction(DockWindowList.toggleViewAction());
      // Tools->Toolbar
      action_tools_tlbr.setObjectName(QString::fromUtf8("action_tools_tlbr"));
      action_tools_tlbr.setText(QApplication::translate("Selector", "Toolbar", nullptr));
      action_tools_tlbr.setCheckable(true);
      action_tools_tlbr.setChecked(true);
      menu_tools.addAction(&action_tools_tlbr);
      // Tools->-------
      menu_tools.addSeparator();
      // Tools->Explain Plan
      action_tools_expln.setObjectName(QString::fromUtf8("action_tools_expln"));
      action_tools_expln.setText(QApplication::translate("Selector", "E&xplain Plan", nullptr));
      #ifndef QT_NO_SHORTCUT
      action_tools_expln.setShortcut(QApplication::translate("Selector", "F5", nullptr));
      #endif // QT_NO_SHORTCUT
      action_tools_expln.setEnabled(false);
      menu_tools.addAction(&action_tools_expln);
      // Tools->Code Assistant
      action_tools_astnt.setObjectName(QString::fromUtf8("action_tools_astnt"));
      action_tools_astnt.setText(QApplication::translate("Selector", "Code &Assistant", nullptr));
      #ifndef QT_NO_SHORTCUT
      action_tools_astnt.setShortcut(QApplication::translate("Selector", "F6", nullptr));
      #endif // QT_NO_SHORTCUT
      action_tools_astnt.setEnabled(false);
      menu_tools.addAction(&action_tools_astnt);
      // Tools->Code Contents
      action_tools_cntnts.setObjectName(QString::fromUtf8("action_tools_cntnts"));
      action_tools_cntnts.setText(QApplication::translate("Selector", "&Code Contents", nullptr));
      action_tools_cntnts.setEnabled(false);
      menu_tools.addAction(&action_tools_cntnts);
      // Tools->Show Compiler Hints
      action_tools_chnts.setObjectName(QString::fromUtf8("action_tools_chnts"));
      action_tools_chnts.setText(QApplication::translate("Selector", "Show Compiler &Hints", nullptr));
      action_tools_chnts.setEnabled(false);
      menu_tools.addAction(&action_tools_chnts);
      // Tools->Query Builder...
      action_tools_qbldr.setObjectName(QString::fromUtf8("action_tools_qbldr"));
      action_tools_qbldr.setText(QApplication::translate("Selector", "&Query Builder...", nullptr));
      action_tools_qbldr.setEnabled(false);
      menu_tools.addAction(&action_tools_qbldr);
      // Tools->-------
      menu_tools.addSeparator();
      // Tools->Find Database Objects...
      action_tools_fdbo.setObjectName(QString::fromUtf8("action_tools_fdbo"));
      action_tools_fdbo.setText(QApplication::translate("Selector", "Find &Database Objects...", nullptr));
      action_tools_fdbo.setEnabled(false);
      menu_tools.addAction(&action_tools_fdbo);
      // Tools->Compile Invalide Objects...
      action_tools_cpinv.setObjectName(QString::fromUtf8("action_tools_cpinv"));
      action_tools_cpinv.setText(QApplication::translate("Selector", "Compile I&nvalid Objects...", nullptr));
      action_tools_cpinv.setEnabled(false);
      menu_tools.addAction(&action_tools_cpinv);
      // Tools->Export User Objects...
      action_tools_expobj.setObjectName(QString::fromUtf8("action_tools_expobj"));
      action_tools_expobj.setText(QApplication::translate("Selector", "Export &User Objects...", nullptr));
      action_tools_expobj.setEnabled(false);
      menu_tools.addAction(&action_tools_expobj);
      // Tools->Compare User Objects...
      action_tools_cmpobj.setObjectName(QString::fromUtf8("action_tools_cmpobj"));
      action_tools_cmpobj.setText(QApplication::translate("Selector", "Compare User O&bjects...", nullptr));
      action_tools_cmpobj.setEnabled(false);
      menu_tools.addAction(&action_tools_cmpobj);
      // Tools->Event Monitor...
      action_tools_emon.setObjectName(QString::fromUtf8("action_tools_emon"));
      action_tools_emon.setText(QApplication::translate("Selector", "E&vent Monitor...", nullptr));
      action_tools_emon.setEnabled(false);
      menu_tools.addAction(&action_tools_emon);
      // Tools->Sessions...
      action_tools_sessns.setObjectName(QString::fromUtf8("action_tools_sessns"));
      action_tools_sessns.setText(QApplication::translate("Selector", "&Sessions...", nullptr));
      action_tools_sessns.setEnabled(false);
      menu_tools.addAction(&action_tools_sessns);
      // Tools->Test Manager...
      action_tools_tstmngr.setObjectName(QString::fromUtf8("action_tools_tstmngr"));
      action_tools_tstmngr.setText(QApplication::translate("Selector", "Test Manager...", nullptr));
      menu_tools.addAction(&action_tools_tstmngr);
      // Tools->-------
      menu_tools.addSeparator();
      // Tools->Export Tables...
      action_tools_exptbls.setObjectName(QString::fromUtf8("action_tools_exptbls"));
      action_tools_exptbls.setText(QApplication::translate("Selector", "E&xport Tables...", nullptr));
      action_tools_exptbls.setEnabled(false);
      menu_tools.addAction(&action_tools_exptbls);
      // Tools->Import Tables...
      action_tools_imptbls.setObjectName(QString::fromUtf8("action_tools_imptbls"));
      action_tools_imptbls.setText(QApplication::translate("Selector", "Import Tables...", nullptr));
      action_tools_imptbls.setEnabled(false);
      menu_tools.addAction(&action_tools_imptbls);
      // Tools->Compare Table Data...
      action_tools_cmptbld.setObjectName(QString::fromUtf8("action_tools_cmptbld"));
      action_tools_cmptbld.setText(QApplication::translate("Selector", "Compare &Table Data...", nullptr));
      menu_tools.addAction(&action_tools_cmptbld);
      // Tools->Text Importer...
      action_tools_imptxt.setObjectName(QString::fromUtf8("action_tools_imptxt"));
      action_tools_imptxt.setText(QApplication::translate("Selector", "Text Importer...", nullptr));
      menu_tools.addAction(&action_tools_imptxt);
      // Tools->ODBC Importer...
      action_tools_impODBC.setObjectName(QString::fromUtf8("action_tools_impODBC"));
      action_tools_impODBC.setText(QApplication::translate("Selector", "ODBC Importer...", nullptr));
      menu_tools.addAction(&action_tools_impODBC);
      // Tools->Data Generator...
      action_tools_gendat.setObjectName(QString::fromUtf8("action_tools_gendat"));
      action_tools_gendat.setText(QApplication::translate("Selector", "Data &Generator...", nullptr));
      menu_tools.addAction(&action_tools_gendat);

    p_menu_bar->addAction(menu_tools.menuAction());

    // Macro
    menu_macro.setObjectName(QString::fromUtf8("menu_macro"));
    menu_macro.setTitle(QApplication::translate("Selector", "&Macro", nullptr));
      // ...
    p_menu_bar->addAction(menu_macro.menuAction());

    // Documents
    menu_docs.setObjectName(QString::fromUtf8("menu_docs"));
    menu_docs.setTitle(QApplication::translate("Selector", "D&ocuments", nullptr));
      // ...
    p_menu_bar->addAction(menu_docs.menuAction());

    // Reports
    menu_reps.setObjectName(QString::fromUtf8("menu_reps"));
    menu_reps.setTitle(QApplication::translate("Selector", "&Reports", nullptr));
      // Reports->DBA
      menu_reps_dba.setObjectName(QString::fromUtf8("menu_reps_dba"));
      menu_reps_dba.setTitle(QApplication::translate("Selector", "DBA", nullptr));
      menu_reps.addAction(menu_reps_dba.menuAction());
        // Reports->DBA->Initialization Parameters
        action_reps_dba_initpar.setObjectName(QString::fromUtf8("action_reps_dba_initpar"));
        action_reps_dba_initpar.setText(QApplication::translate("Selector", "Initialization Parameters", nullptr));
        menu_reps_dba.addAction(&action_reps_dba_initpar);
        // Reports->DBA->NLS Database Parameters
        action_reps_dba_nlspar.setObjectName(QString::fromUtf8("action_reps_dba_nlspar"));
        action_reps_dba_nlspar.setText(QApplication::translate("Selector", "NLS Database Parameters", nullptr));
        menu_reps_dba.addAction(&action_reps_dba_nlspar);
        // Reports->DBA->Role Privileges
        action_reps_dba_rolprv.setObjectName(QString::fromUtf8("action_reps_dba_rolprv"));
        action_reps_dba_rolprv.setText(QApplication::translate("Selector", "Role Privileges", nullptr));
        menu_reps_dba.addAction(&action_reps_dba_rolprv);
        // Reports->DBA->Roles
        action_reps_dba_rol.setObjectName(QString::fromUtf8("action_reps_dba_rol"));
        action_reps_dba_rol.setText(QApplication::translate("Selector", "Roles", nullptr));
        menu_reps_dba.addAction(&action_reps_dba_rol);
        // Reports->DBA->Rollback Segments
        action_reps_dba_rlbseg.setObjectName(QString::fromUtf8("action_reps_dba_rlbseg"));
        action_reps_dba_rlbseg.setText(QApplication::translate("Selector", "Rollback Segments", nullptr));
        menu_reps_dba.addAction(&action_reps_dba_rlbseg);
        // Reports->DBA->Server Components
        action_reps_dba_srvcom.setObjectName(QString::fromUtf8("action_reps_dba_srvcom"));
        action_reps_dba_srvcom.setText(QApplication::translate("Selector", "Server Components", nullptr));
        menu_reps_dba.addAction(&action_reps_dba_srvcom);
        // Reports->DBA->System Priveleges
        action_reps_dba_sysprv.setObjectName(QString::fromUtf8("action_reps_dba_sysprv"));
        action_reps_dba_sysprv.setText(QApplication::translate("Selector", "System Priveleges", nullptr));
        menu_reps_dba.addAction(&action_reps_dba_sysprv);
        // Reports->DBA->Tablespaces
        action_reps_dba_tblspcs.setObjectName(QString::fromUtf8("action_reps_dba_tblspcs"));
        action_reps_dba_tblspcs.setText(QApplication::translate("Selector", "Tablespaces", nullptr));
        menu_reps_dba.addAction(&action_reps_dba_tblspcs);
        // Reports->DBA->Total Free Space
        action_reps_dba_tfs.setObjectName(QString::fromUtf8("action_reps_dba_tfs"));
        action_reps_dba_tfs.setText(QApplication::translate("Selector", "Total Free Space", nullptr));
        menu_reps_dba.addAction(&action_reps_dba_tfs);
        // Reports->DBA->Users
        action_reps_dba_usrs.setObjectName(QString::fromUtf8("action_reps_dba_usrs"));
        action_reps_dba_usrs.setText(QApplication::translate("Selector", "Users", nullptr));
        menu_reps_dba.addAction(&action_reps_dba_usrs);

      // Reports->Objects
      menu_reps_objects.setObjectName(QString::fromUtf8("menu_reps_objects"));
      menu_reps_objects.setTitle(QApplication::translate("Selector", "Objects", nullptr));
      menu_reps.addAction(menu_reps_objects.menuAction());
        // Reports->Objects->All Objects
        action_reps_objects_all.setObjectName(QString::fromUtf8("action_reps_objects_all"));
        action_reps_objects_all.setText(QApplication::translate("Selector", "All Objects", nullptr));
        menu_reps_objects.addAction(&action_reps_objects_all);
        // Reports->Objects->Indexes
        action_reps_objects_idx.setObjectName(QString::fromUtf8("action_reps_objects_idx"));
        action_reps_objects_idx.setText(QApplication::translate("Selector", "Indexes", nullptr));
        menu_reps_objects.addAction(&action_reps_objects_idx);
        // Reports->Objects->Sequences
        action_reps_objects_seq.setObjectName(QString::fromUtf8("action_reps_objects_seq"));
        action_reps_objects_seq.setText(QApplication::translate("Selector", "Sequences", nullptr));
        menu_reps_objects.addAction(&action_reps_objects_seq);
        // Reports->Objects->Synonyms
        action_reps_objects_syn.setObjectName(QString::fromUtf8("action_reps_objects_syn"));
        action_reps_objects_syn.setText(QApplication::translate("Selector", "Synonyms", nullptr));
        menu_reps_objects.addAction(&action_reps_objects_syn);
        // Reports->Objects->Tables
        action_reps_objects_tbs.setObjectName(QString::fromUtf8("action_reps_objects_tbs"));
        action_reps_objects_tbs.setText(QApplication::translate("Selector", "Tables", nullptr));
        menu_reps_objects.addAction(&action_reps_objects_tbs);
        // Reports->Objects->Triggers
        action_reps_objects_trg.setObjectName(QString::fromUtf8("action_reps_objects_trg"));
        action_reps_objects_trg.setText(QApplication::translate("Selector", "Triggers", nullptr));
        menu_reps_objects.addAction(&action_reps_objects_trg);
        // Reports->Objects->Types
        action_reps_objects_tps.setObjectName(QString::fromUtf8("action_reps_objects_tps"));
        action_reps_objects_tps.setText(QApplication::translate("Selector", "Types", nullptr));
        menu_reps_objects.addAction(&action_reps_objects_tps);
        // Reports->Objects->Views
        action_reps_objects_views.setObjectName(QString::fromUtf8("action_reps_objects_views"));
        action_reps_objects_views.setText(QApplication::translate("Selector", "Views", nullptr));
        menu_reps_objects.addAction(&action_reps_objects_views);

      // Reports->PL/SQL
      menu_reps_plsql.setObjectName(QString::fromUtf8("menu_reps_plsql"));
      menu_reps_plsql.setTitle(QApplication::translate("Selector", "PL/SQL", nullptr));
      menu_reps.addAction(menu_reps_plsql.menuAction());
        // Reports->Objects->Compilation Errors
        action_reps_plsql_cperrs.setObjectName(QString::fromUtf8("action_reps_plsql_cperrs"));
        action_reps_plsql_cperrs.setText(QApplication::translate("Selector", "Compilation Errors", nullptr));
        menu_reps_plsql.addAction(&action_reps_plsql_cperrs);

      // Reports->User
      menu_reps_user.setObjectName(QString::fromUtf8("menu_reps_user"));
      menu_reps_user.setTitle(QApplication::translate("Selector", "User", nullptr));
      menu_reps.addAction(menu_reps_user.menuAction());
        // Reports->Objects->Granted Roles
        action_reps_user_grrol.setObjectName(QString::fromUtf8("action_reps_user_grrol"));
        action_reps_user_grrol.setText(QApplication::translate("Selector", "Granted Roles", nullptr));
        menu_reps_user.addAction(&action_reps_user_grrol);
        // Reports->Objects->Granted System Privileges
        action_reps_user_grsysprv.setObjectName(QString::fromUtf8("action_reps_user_grsysprv"));
        action_reps_user_grsysprv.setText(QApplication::translate("Selector", "Granted System Privileges", nullptr));
        menu_reps_user.addAction(&action_reps_user_grsysprv);
        // Reports->Objects->NLS Session Parameters
        action_reps_user_nlssespar.setObjectName(QString::fromUtf8("action_reps_user_nlssespar"));
        action_reps_user_nlssespar.setText(QApplication::translate("Selector", "NLS Session Parameters", nullptr));
        menu_reps_user.addAction(&action_reps_user_nlssespar);
        // Reports->Objects->Object Privileges Made
        action_reps_user_objprvmde.setObjectName(QString::fromUtf8("action_reps_user_objprvmde"));
        action_reps_user_objprvmde.setText(QApplication::translate("Selector", "Object Privileges Made", nullptr));
        menu_reps_user.addAction(&action_reps_user_objprvmde);
        // Reports->Objects->Object Privileges Received
        action_reps_user_objprvrcvd.setObjectName(QString::fromUtf8("action_reps_user_objprvrcvd"));
        action_reps_user_objprvrcvd.setText(QApplication::translate("Selector", "Object Privileges Received", nullptr));
        menu_reps_user.addAction(&action_reps_user_objprvrcvd);

    p_menu_bar->addAction(menu_reps.menuAction());

    // Window
    menu_window.setObjectName(QString::fromUtf8("menu_window"));
    menu_window.setTitle(QApplication::translate("Selector", "&Window", nullptr));
      // Window->Tile
      action_window_tile.setObjectName(QString::fromUtf8("action_window_tile"));
      action_window_tile.setText(QApplication::translate("Selector", "&Tile", nullptr));
      action_window_tile.setEnabled(false);
      menu_window.addAction(&action_window_tile);
      // Window->Cascade
      action_window_cscd.setObjectName(QString::fromUtf8("action_window_cscd"));
      action_window_cscd.setText(QApplication::translate("Selector", "&Cascade", nullptr));
      action_window_cscd.setEnabled(false);
      menu_window.addAction(&action_window_cscd);
      // Window->Arrange All
      action_window_arrall.setObjectName(QString::fromUtf8("action_window_arrall"));
      action_window_arrall.setText(QApplication::translate("Selector", "&Arrange All", nullptr));
      action_window_arrall.setEnabled(false);
      menu_window.addAction(&action_window_arrall);
      // Window->-------
      menu_window.addSeparator();
      // Window->Save Layout
      action_window_savelo.setObjectName(QString::fromUtf8("action_window_savelo"));
      action_window_savelo.setText(QApplication::translate("Selector", "&Save Layout", nullptr));
      menu_window.addAction(&action_window_savelo);

    p_menu_bar->addAction(menu_window.menuAction());

    // Help
    menu_help.setObjectName(QString::fromUtf8("menu_help"));
    menu_help.setTitle(QApplication::translate("Selector", "&Help", nullptr));
      // Help->Help
      action_help_help.setObjectName(QString::fromUtf8("action_help_help"));
      action_help_help.setText(QApplication::translate("Selector", "&Help", nullptr));
      #ifndef QT_NO_SHORTCUT
      action_help_help.setShortcut(QApplication::translate("Selector", "F1", nullptr));
      #endif // QT_NO_SHORTCUT
      menu_help.addAction(&action_help_help);
      // Help->Donates & Thanksgiving...
      action_help_dnt.setObjectName(QString::fromUtf8("action_help_dnt"));
      action_help_dnt.setText(QApplication::translate("Selector", "&Donates && Thanksgiving...", nullptr));
      menu_help.addAction(&action_help_dnt);
      // Help->Support Info...
      action_help_supp.setObjectName(QString::fromUtf8("action_help_supp"));
      action_help_supp.setText(QApplication::translate("Selector", "&Support Info...", nullptr));
      menu_help.addAction(&action_help_supp);
      // Help->-------
      menu_help.addSeparator();
      // Help->About Selector...
      action_help_about.setObjectName(QString::fromUtf8("action_help_about"));
      action_help_about.setText(QApplication::translate("Selector", "&About", nullptr));
      menu_help.addAction(&action_help_about);

    p_menu_bar->addAction(menu_help.menuAction());

  //setMenuBar(&menubar);
}

void Selector::CreateStatusBar()
{
  // statusbar = new QStatusBar(MainWindow);
  QStatusBar* p_status_bar = statusBar();
  p_status_bar->setObjectName(QString::fromUtf8("statusbar"));
  p_status_bar->setStyleSheet(QString::fromUtf8("background-color: rgb(163, 179, 186);"));
  //setStatusBar(&statusbar);
}

void Selector::slotFileWasChanged()
{
  act_file.save->setEnabled(true);
  act_file.save_as->setEnabled(true);
  act_file.save_all->setEnabled(true);
  act_file.email->setEnabled(true);
  act_file.close->setEnabled(true);
  act_file.close_all->setEnabled(true);
  act_file.print->setEnabled(true);
}

void Selector::slotFileWasUnChanged()
{
  act_file.save->setEnabled(false);
  act_file.save_as->setEnabled(false);
  act_file.save_all->setEnabled(false);
  act_file.email->setEnabled(false);
  act_file.close->setEnabled(false);
  act_file.close_all->setEnabled(false);
  act_file.print->setEnabled(false);
}

void Selector::slotNewSQLForm()
{
  // SQLForm* p_form = new SQLForm(&MDIArea); Only QMdiSubWindows can be set as children of QMdiArea !!!
  SQLForm* p_form = new SQLForm();
  QMdiSubWindow* p_sub_wnd = MDIArea.addSubWindow(p_form);
  p_sub_wnd->setAttribute(Qt::WA_DeleteOnClose);
  p_sub_wnd->setWindowTitle("New SQL Document");
  p_sub_wnd->setWindowIcon(QIcon(":/icons/new-sql.png"));

  connect(p_form, SIGNAL(fileWasChanged()), SLOT(slotFileWasChanged()));
  //connect(p_form, SIGNAL(changeMainTitle(const QString&)), SLOT(slotChangeMainTitle(const QString&))); // ???
  p_sub_wnd->show();
}

void Selector::slotOpenSQLForm()
{
  SQLForm* p_form = new SQLForm;
  QMdiSubWindow* p_sub_wnd = MDIArea.addSubWindow(p_form);
  p_sub_wnd->setAttribute(Qt::WA_DeleteOnClose);
  p_sub_wnd->setWindowTitle("Open SQL Document");
  p_sub_wnd->setWindowIcon(QIcon(":/icons/new-sql.png"));
  p_form->slotFileLoad();
  connect(p_form, SIGNAL(fileWasChanged()), SLOT(slotFileWasChanged()));
  //connect(p_form, SIGNAL(changeWindowTitle(const QString&)), SLOT(slotChangeWindowTitle(const QString&)));
  p_sub_wnd->show();

}

void Selector::slotFileSave()
{
  QMdiSubWindow* p_sub_wnd = MDIArea.activeSubWindow();
  if (p_sub_wnd)
  {
    SQLForm* p_form = qobject_cast<SQLForm*>(p_sub_wnd->widget());
    if (p_form)
      p_form->slotFileSave();
  }
}

void Selector::slotFileSaveAs()
{
  QMdiSubWindow* p_sub_wnd = MDIArea.activeSubWindow();
  if (p_sub_wnd)
  {
    SQLForm* p_form = qobject_cast<SQLForm*>(p_sub_wnd->widget());
    if (p_form)
      p_form->slotFileSaveAs();
  }
}

void Selector::slotFileSaveAll()
{
  QMessageBox::information(0, "Message", "Feature Not implemented!");
}

//void Selector::slotChangeWindowTitle(const QString& new_title)
//{
//  qobject_cast<SQLForm*>(sender())->setWindowTitle(new_title);
//}

/*
void Selector::slotSetActiveSubWindow(QWidget* p_form)
{
//  if (p_form)
//    MDIArea.setActiveSubWindow(qobject_cast<QMdiSubWindow*>(p_form));

}
*/
