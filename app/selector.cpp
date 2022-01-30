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
  BrowserTree.setHeaderLabel("DB Objects");
  BrowserTree.headerItem()->setHidden(true);
  QTreeWidgetItem* pItem = new QTreeWidgetItem();
  pItem->setText(0, "Resent objects");
  pItem->setIcon(0, QPixmap(":/icons/open-sql.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  BrowserTree.addTopLevelItem(pItem);
  //pItem->setDisabled(true);
  //pItem->setHidden(true);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, "Recycle bin");
  pItem->setIcon(0, QPixmap(":/icons/open-sql.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  BrowserTree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, "Functions");
  pItem->setIcon(0, QPixmap(":/icons/open-sql.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  BrowserTree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, "Procedures");
  pItem->setIcon(0, QPixmap(":/icons/open-sql.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  BrowserTree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, "Packages");
  pItem->setIcon(0, QPixmap(":/icons/open-sql.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  BrowserTree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, "Package bodies");
  pItem->setIcon(0, QPixmap(":/icons/open-sql.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  BrowserTree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, "Types");
  pItem->setIcon(0, QPixmap(":/icons/open-sql.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  BrowserTree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, "Type bodies");
  pItem->setIcon(0, QPixmap(":/icons/open-sql.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  BrowserTree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, "Triggers");
  pItem->setIcon(0, QPixmap(":/icons/open-sql.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  BrowserTree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, "Java sources");
  pItem->setIcon(0, QPixmap(":/icons/open-sql.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  BrowserTree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, "Jobs");
  pItem->setIcon(0, QPixmap(":/icons/open-sql.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  BrowserTree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, "Queues");
  pItem->setIcon(0, QPixmap(":/icons/open-sql.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  BrowserTree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, "Queue tables");
  pItem->setIcon(0, QPixmap(":/icons/open-sql.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  BrowserTree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, "Libraries");
  pItem->setIcon(0, QPixmap(":/icons/open-sql.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  BrowserTree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, "Directories");
  pItem->setIcon(0, QPixmap(":/icons/open-sql.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  BrowserTree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, "Tables");
  pItem->setIcon(0, QPixmap(":/icons/open-sql.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  BrowserTree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, "Views");
  pItem->setIcon(0, QPixmap(":/icons/open-sql.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  BrowserTree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, "Materialized views");
  pItem->setIcon(0, QPixmap(":/icons/open-sql.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  BrowserTree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, "Sequences");
  pItem->setIcon(0, QPixmap(":/icons/open-sql.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  BrowserTree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, "Users");
  pItem->setIcon(0, QPixmap(":/icons/open-sql.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  BrowserTree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, "Profiles");
  pItem->setIcon(0, QPixmap(":/icons/open-sql.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  BrowserTree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, "Roles");
  pItem->setIcon(0, QPixmap(":/icons/open-sql.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  BrowserTree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, "Synonyms");
  pItem->setIcon(0, QPixmap(":/icons/open-sql.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  BrowserTree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, "Database links");
  pItem->setIcon(0, QPixmap(":/icons/open-sql.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  BrowserTree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, "Tablespaces");
  pItem->setIcon(0, QPixmap(":/icons/open-sql.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  BrowserTree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, "Clusters");
  pItem->setIcon(0, QPixmap(":/icons/open-sql.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  BrowserTree.addTopLevelItem(pItem);

  leftDockBrowser.setWidget(&BrowserTree);
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
        menu_reps_dba.addAction(act_rpt.dba_initpar);                // Reports->DBA->Initialization Parameters
        menu_reps_dba.addAction(act_rpt.dba_nlspar);                 // Reports->DBA->NLS Database Parameters
        menu_reps_dba.addAction(act_rpt.dba_rolprv);                 // Reports->DBA->Role Privileges
        menu_reps_dba.addAction(act_rpt.dba_rol);                    // Reports->DBA->Roles
        menu_reps_dba.addAction(act_rpt.dba_rlbseg);                 // Reports->DBA->Rollback Segments
        menu_reps_dba.addAction(act_rpt.dba_srvcom);                 // Reports->DBA->Server Components
        menu_reps_dba.addAction(act_rpt.dba_sysprv);                 // Reports->DBA->System Priveleges
        menu_reps_dba.addAction(act_rpt.dba_tblspcs);                // Reports->DBA->Tablespaces
        menu_reps_dba.addAction(act_rpt.dba_tfs);                    // Reports->DBA->Total Free Space
        menu_reps_dba.addAction(act_rpt.dba_usrs);                   // Reports->DBA->Users

      // Reports->Objects
      menu_reps_objects.setObjectName(QString::fromUtf8("menu_reps_objects"));
      menu_reps_objects.setTitle(QApplication::translate("Selector", "Objects", nullptr));
      menu_reps.addAction(menu_reps_objects.menuAction());
        menu_reps_objects.addAction(act_rpt.objects_all);            // Reports->Objects->All Objects
        menu_reps_objects.addAction(act_rpt.objects_idx);            // Reports->Objects->Indexes
        menu_reps_objects.addAction(act_rpt.objects_seq);            // Reports->Objects->Sequences
        menu_reps_objects.addAction(act_rpt.objects_syn);            // Reports->Objects->Synonyms
        menu_reps_objects.addAction(act_rpt.objects_tbs);            // Reports->Objects->Tables
        menu_reps_objects.addAction(act_rpt.objects_trg);            // Reports->Objects->Triggers
        menu_reps_objects.addAction(act_rpt.objects_tps);            // Reports->Objects->Types
        menu_reps_objects.addAction(act_rpt.objects_views);          // Reports->Objects->Views

      // Reports->PL/SQL
      menu_reps_plsql.setObjectName(QString::fromUtf8("menu_reps_plsql"));
      menu_reps_plsql.setTitle(QApplication::translate("Selector", "PL/SQL", nullptr));
      menu_reps.addAction(menu_reps_plsql.menuAction());
        menu_reps_plsql.addAction(act_rpt.plsql_cperrs);            // Reports->Objects->Compilation Errors

      // Reports->User
      menu_reps_user.setObjectName(QString::fromUtf8("menu_reps_user"));
      menu_reps_user.setTitle(QApplication::translate("Selector", "User", nullptr));
      menu_reps.addAction(menu_reps_user.menuAction());
        menu_reps_user.addAction(act_rpt.user_grrol);              // Reports->Objects->Granted Roles
        menu_reps_user.addAction(act_rpt.user_grsysprv);           // Reports->Objects->Granted System Privileges
        menu_reps_user.addAction(act_rpt.user_nlssespar);          // Reports->Objects->NLS Session Parameters
        menu_reps_user.addAction(act_rpt.user_objprvmde);          // Reports->Objects->Object Privileges Made
        menu_reps_user.addAction(act_rpt.user_objprvrcvd);         // Reports->Objects->Object Privileges Received
    p_menu_bar->addAction(menu_reps.menuAction());

    // Window
    menu_window.setObjectName(QString::fromUtf8("menu_window"));
    menu_window.setTitle(QApplication::translate("Selector", "&Window", nullptr));
      menu_window.addAction(act_wnd.tile);                         // Window->Tile
      menu_window.addAction(act_wnd.cascade);                      // Window->Cascade
      menu_window.addAction(act_wnd.arrall);                       // Window->Arrange All
      menu_window.addSeparator();                                  // Window->-------
      menu_window.addAction(act_wnd.savelo);                       // Window->Save Layout
    p_menu_bar->addAction(menu_window.menuAction());

    // Help
    menu_help.setObjectName(QString::fromUtf8("menu_help"));
    menu_help.setTitle(QApplication::translate("Selector", "&Help", nullptr));
      menu_help.addAction(act_hlp.help);                          // Help->Help
      menu_help.addAction(act_hlp.donate);                        // Help->Donates & Thanksgiving...
      menu_help.addAction(act_hlp.suprt);                         // Help->Support Info...
      menu_help.addSeparator();                                   // Help->-------
      menu_help.addAction(act_hlp.about);                         // Help->About Selector...
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
