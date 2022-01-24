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
  bottomDock.setWindowTitle("&Search Bar");
  bottomDock.setAllowedAreas(Qt::BottomDockWidgetArea | Qt::TopDockWidgetArea);
  bottomDockLabel.setText("Test Label");
  //(bottomDock.titleBarWidget())->hide();
  //(bottomDock.titleBarWidget())->setVisible(true);
  //action_edit_search_bar = bottomDock.toggleViewAction();
  bottomDock.setWidget(&bottomDockLabel);
  //bottomDock.setWidget(&findTemplate);
  addDockWidget(Qt::BottomDockWidgetArea, &bottomDock);

  leftDockBrowser.setObjectName(QString::fromUtf8("leftDockBrowser"));
  leftDockBrowser.setWindowTitle("Browser");
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
  toolBarMain.addAction(act_sesn.lon);
  toolBarMain.addSeparator();
  toolBarMain.addAction(menu_file_new.menuAction());
  toolBarMain.addAction(menu_file_open.menuAction());
  toolBarMain.addAction(act_file.save);
  toolBarMain.addSeparator();
  toolBarMain.addAction(act_edit.undo);
  toolBarMain.addAction(act_edit.redo);
  toolBarMain.addSeparator();
  toolBarMain.addAction(act_sesn.exe);
  toolBarMain.addAction(act_sesn.brk);
  toolBarMain.addAction(act_sesn.cmmt);
  toolBarMain.addAction(act_sesn.rllbck);
  toolBarMain.addSeparator();
  addToolBar(Qt::TopToolBarArea, &toolBarMain);

  // Create "DML operations" Toolbar
  toolBarDML.setObjectName(QString::fromUtf8("toolBarDML"));
  toolBarDML.setStyleSheet(QString::fromUtf8("background-color: rgb(163, 179, 186);"));
  toolBarDML.setWindowTitle("DML operations");
  toolBarDML.addAction(act_sesn.exe); // ToDo: replace with correct buttons
  toolBarDML.addAction(act_sesn.brk); // ToDo: replace with correct buttons
  toolBarDML.addAction(act_sesn.cmmt); // ToDo: replace with correct buttons
  toolBarDML.addAction(act_sesn.rllbck); // ToDo: replace with correct buttons
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
      menu_edit.addAction(act_edit.undo);                        // Edit->Undo
      connect(act_edit.undo, SIGNAL(triggered()), SLOT(slotNoImpl()));
      menu_edit.addAction(act_edit.redo);                        // Edit->Redo
      connect(act_edit.redo, SIGNAL(triggered()), SLOT(slotNoImpl()));
      menu_edit.addSeparator();                                  // Edit->-------
      menu_edit.addAction(act_edit.beautifier);                  // Edit->Beautifier
      menu_edit.addAction(act_edit.beautifier_optns);            // Edit->Beautifier Options
      menu_edit.addSeparator();                                  // Edit->-------
      menu_edit.addAction(act_edit.cut);                         // Edit->Cut
      menu_edit.addAction(act_edit.copy);                        // Edit->Copy
      menu_edit.addAction(act_edit.paste);                       // Edit->Paste
      menu_edit.addAction(act_edit.append);                      // Edit->Append
      menu_edit.addAction(act_edit.clear);                       // Edit->Clear
      menu_edit.addAction(act_edit.select_all);                  // Edit->Select All
      menu_edit.addAction(act_edit.recall);                      // Edit->Recall Statement
      // Edit->Special Copy
      menu_edit_scpy.setObjectName(QString::fromUtf8("menu_edit_scpy"));
      menu_edit_scpy.setTitle(QApplication::translate("Selector", "Special Copy", nullptr));
      menu_edit.addAction(menu_edit_scpy.menuAction());
        menu_edit_scpy.addAction(act_edit.scpy_cpp);                // Edit->Special Copy->C++
        menu_edit_scpy.addAction(act_edit.scpy_delphi);             // Edit->Special Copy->Delphi
        menu_edit_scpy.addAction(act_edit.scpy_java);               // Edit->Special Copy->Java
        menu_edit_scpy.addAction(act_edit.scpy_plsql);              // Edit->Special Copy->PL/SQL
        menu_edit_scpy.addAction(act_edit.scpy_basic);              // Edit->Special Copy->Visual Basic
      // Edit->Selection
      menu_edit_selection.setObjectName(QString::fromUtf8("menu_edit_selection"));
      menu_edit_selection.setTitle(QApplication::translate("Selector", "&Selection", nullptr));
      menu_edit.addAction(menu_edit_selection.menuAction());
        menu_edit_selection.addAction(act_edit.slctn_indent);       // Edit->Selection->Indent
        menu_edit_selection.addAction(act_edit.slctn_unindent);     // Edit->Selection->Unindent
        menu_edit_selection.addAction(act_edit.slctn_uppercase);    // Edit->Selection->Uppercase
        menu_edit_selection.addAction(act_edit.slctn_lowercase);    // Edit->Selection->Lowercase
        menu_edit_selection.addAction(act_edit.slctn_comment);      // Edit->Selection->Comment
        menu_edit_selection.addAction(act_edit.slctn_uncomment);    // Edit->Selection->Uncomment
        menu_edit_selection.addAction(act_edit.slctn_aplsyncase);   // Edit->Selection->Apply Syntax Case
        menu_edit_selection.addAction(act_edit.slctn_sort);         // Edit->Selection->Sort
        menu_edit_selection.addAction(act_edit.slctn_mark);         // Edit->Selection->Color Mark
      // Edit->To-Do Items
      menu_edit_todo.setObjectName(QString::fromUtf8("menu_edit_todo"));
      menu_edit_todo.setTitle(QApplication::translate("Selector", "To-&Do Items", nullptr));
      menu_edit.addAction(menu_edit_todo.menuAction());
          menu_edit_todo.addAction(act_edit.todo_list);             // Edit->To-Do Items->Show List...
          menu_edit_todo.addAction(act_edit.todo_add);              // Edit->To-Do Items->Add Item...
          menu_edit_todo.addAction(act_edit.todo_edit);             // Edit->To-Do Items->Edit Item...
          menu_edit_todo.addAction(act_edit.todo_close);            // Edit->To-Do Items->Close Item
          menu_edit_todo.addAction(act_edit.todo_del);              // Edit->To-Do Items->Delete Item
      // Edit->-------
      menu_edit.addSeparator();
      menu_edit.addAction(act_edit.find);                              // Edit->Find
      menu_edit.addAction(act_edit.repeat_find);                       // Edit->Repeat Last Find
      menu_edit.addAction(act_edit.replace);                           // Edit->Replace
      menu_edit.addAction(bottomDock.toggleViewAction());              // Edit->Search Bar
      menu_edit.addAction(act_edit.find_matches);                      // Edit->Find Matches
      menu_edit.addAction(act_edit.show_spec);                         // Edit->Show Special Characters
      menu_edit.addAction(act_edit.code_folding);                      // Edit->Code Folding
      menu_edit.addAction(act_edit.bookmark_set);                      // Edit->Set Bookmark
      // Edit->Go to Bookmark
      menu_edit_bookmark_goto.setObjectName(QString::fromUtf8("menu_edit_bookmark_goto"));
      menu_edit_bookmark_goto.setTitle(QApplication::translate("Selector", "Go to Boo&kmark", nullptr));
      #ifndef QT_NO_SHORTCUT
      menu_edit_bookmark_goto.menuAction()->setShortcut(QApplication::translate("Selector", "Ctrl+Q", nullptr));
      #endif // QT_NO_SHORTCUT
      menu_edit.addAction(menu_edit_bookmark_goto.menuAction());
        menu_edit_bookmark_goto.addAction(act_edit.bookmark_goto_next);   // Edit->Go to Bookmark->Next
        menu_edit_bookmark_goto.addAction(act_edit.bookmark_goto_prev);   // Edit->Go to Bookmark->Previous
      menu_edit.addAction(act_edit.bookmark_list);                        // Edit->Bookmark List
      menu_edit.addAction(act_edit.go_to);                                // Edit->Go to Line
      menu_edit.addSeparator();                                           // Edit->-------
      menu_edit.addAction(act_edit.next_tab);                             // Edit->Next Tab Page
      menu_edit.addAction(act_edit.prev_tab);                             // Edit->Previous Tab Page
    p_menu_bar->addAction(menu_edit.menuAction());

    // Session
    menu_session.setObjectName(QString::fromUtf8("menu_session"));
    menu_session.setTitle(QApplication::translate("Selector", "&Session", nullptr));
      menu_session.addAction(act_sesn.lon);                              // Session->Log on
      connect(act_sesn.lon, SIGNAL(triggered()), SLOT(slotNoImpl()));
      menu_session.addAction(act_sesn.loff);                             // Session->Log off
      menu_session.addSeparator();                                       // Session->-------
      menu_session.addAction(act_sesn.exe);                              // Session->Execute
      connect(act_sesn.exe, SIGNAL(triggered()), SLOT(slotNoImpl()));
      menu_session.addAction(act_sesn.brk);                              // Session->Break
      connect(act_sesn.brk, SIGNAL(triggered()), SLOT(slotNoImpl()));
      menu_session.addAction(act_sesn.kll);                              // Session->Kill
      menu_session.addAction(act_sesn.cmmt);                             // Session->Commit
      connect(act_sesn.cmmt, SIGNAL(triggered()), SLOT(slotNoImpl()));
      menu_session.addAction(act_sesn.rllbck);                            // Session->Rollback
      connect(act_sesn.rllbck, SIGNAL(triggered()), SLOT(slotNoImpl()));
      menu_session.addAction(act_sesn.trce);                             // Session->SQL Trace
    p_menu_bar->addAction(menu_session.menuAction());

    // Debug
    menu_debug.setObjectName(QString::fromUtf8("menu_debug"));
    menu_debug.setTitle(QApplication::translate("Selector", "&Debug", nullptr));

      menu_debug.addAction(act_debg.breakpoint);                         // Debug->Toggle Breakpoint
      menu_debug.addAction(act_debg.mod_brkpnts);                        // Debug->Modify Breakpoints...
      menu_debug.addAction(act_debg.start);                              // Debug->Start
      menu_debug.addSeparator();                                         // Debug->-------
      menu_debug.addAction(act_debg.run);                                // Debug->Run
      menu_debug.addAction(act_debg.step_into);                          // Debug->Step Into
      menu_debug.addAction(act_debg.step_over);                          // Debug->Step Over
      menu_debug.addAction(act_debg.step_out);                           // Debug->Step Out
      menu_debug.addAction(act_debg.cont);                               // Debug->Run to Exception
      menu_debug.addSeparator();                                         // Debug->-------
      menu_debug.addAction(act_debg.set_var);                            // Debug->Set Variable...
    p_menu_bar->addAction(menu_debug.menuAction());

    // Tools
    menu_tools.setObjectName(QString::fromUtf8("menu_tools"));
    menu_tools.setTitle(QApplication::translate("Selector", "&Tools", nullptr));
      menu_tools.addAction(act_tols.pref);                               // Tools->Preferences...
      menu_tools.addSeparator();                                         // Tools->-------
      menu_tools.addAction(act_tols.cfgplgns);                           // Tools->Configure Plug-Ins...
      menu_tools.addAction(act_tols.cfgtools);                           // Tools->Configure Tools...
      menu_tools.addAction(act_tols.cfgdocs);                            // Tools->Configure Documents...
      menu_tools.addAction(act_tols.cfgreps);                            // Tools->Configure Reports...
      // Tools->Macro
      menu_tools_macro.setObjectName(QString::fromUtf8("menu_tools_macro"));
      menu_tools_macro.setTitle(QApplication::translate("Selector", "&Macro", nullptr));
      menu_tools.addAction(menu_tools_macro.menuAction());
        menu_tools_macro.addAction(act_tols.macro_rec);                  // Tools->Macro->Record
        menu_tools_macro.addAction(act_tols.macro_play);                 // Tools->Macro->Playback
        menu_tools_macro.addAction(act_tols.macro_lib);                  // Tools->Macro->Library...
      menu_tools.addSeparator();                                         // Tools->-------
      menu_tools.addAction(leftDockBrowser.toggleViewAction());          // Tools->Browser
      menu_tools.addAction(act_tols.brodir);                             // Tools->Browser Folders...
      menu_tools.addAction(act_tols.brofil);                             // Tools->Browser Filters...
      menu_tools.addAction(act_tols.tmpl);                               // Tools->Template List
      menu_tools.addAction(DockWindowList.toggleViewAction());           // Tools->Window List
      menu_tools.addAction(act_tols.tlbr);                               // Tools->Toolbar
      menu_tools.addSeparator();                                         // Tools->-------
      menu_tools.addAction(act_tols.expln);                              // Tools->Explain Plan
      menu_tools.addAction(act_tols.astnt);                              // Tools->Code Assistant
      menu_tools.addAction(act_tols.cntnts);                             // Tools->Code Contents
      menu_tools.addAction(act_tols.shnts);                              // Tools->Show Compiler Hints
      menu_tools.addAction(act_tols.qbldr);                              // Tools->Query Builder...
      menu_tools.addSeparator();                                         // Tools->-------
      menu_tools.addAction(act_tols.fdbo);                               // Tools->Find Database Objects...
      menu_tools.addAction(act_tols.cpinv);                              // Tools->Compile Invalide Objects...
      menu_tools.addAction(act_tols.expobj);                             // Tools->Export User Objects...
      menu_tools.addAction(act_tols.cmpobj);                             // Tools->Compare User Objects...
      menu_tools.addAction(act_tols.emon);                               // Tools->Event Monitor...
      menu_tools.addAction(act_tols.sessns);                             // Tools->Sessions...
      menu_tools.addAction(act_tols.tstmngr);                            // Tools->Test Manager...
      menu_tools.addSeparator();                                         // Tools->-------
      menu_tools.addAction(act_tols.exptbls);                            // Tools->Export Tables...
      menu_tools.addAction(act_tols.imptbls);                            // Tools->Import Tables...
      menu_tools.addAction(act_tols.cmptbld);                            // Tools->Compare Table Data...
      menu_tools.addAction(act_tols.imptxt);                             // Tools->Text Importer...
      menu_tools.addAction(act_tols.impODBC);                            // Tools->ODBC Importer...
      menu_tools.addAction(act_tols.gendat);                             // Tools->Data Generator...
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
