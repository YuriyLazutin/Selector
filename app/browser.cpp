#include "browser.h"

Browser::Browser(QWidget *parent) : QWidget(parent)
{
  //setMinimumSize(QSize(300, 120));

  // Refresh data
  refresh = new QAction;
  refresh->setObjectName(QString::fromUtf8("action_browser_refresh"));
  refresh->setIcon(QPixmap(":/icons/refresh.png"));
  //refresh->setEnabled(false);

  // Expand all
  expand_all = new QAction;
  expand_all->setObjectName(QString::fromUtf8("action_browser_expand_all"));
  expand_all->setIcon(QPixmap(":/icons/expand_all.png"));
  //expand_all->setEnabled(false);

  // Collapse all
  collapse_all = new QAction;
  collapse_all->setObjectName(QString::fromUtf8("action_browser_collapse_all"));
  collapse_all->setIcon(QPixmap(":/icons/collapse_all.png"));
  //collapse_all->setEnabled(false);

  // Find Database Objects...
  find_dbo = new QAction;
  find_dbo->setObjectName(QString::fromUtf8("action_browser_find_dbo"));
  find_dbo->setIcon(QPixmap(":/icons/find_dbo.png"));
  //find_dbo->setEnabled(false);

  // Filters
  filters = new QAction;
  filters->setObjectName(QString::fromUtf8("action_browser_filters"));
  filters->setIcon(QPixmap(":/icons/filter-settings.png"));
  //filters->setEnabled(false);

  // Folders
  folders = new QAction;
  folders->setObjectName(QString::fromUtf8("action_browser_folders"));
  folders->setIcon(QPixmap(":/icons/folder_settings.png"));
  //folders->setEnabled(false);

  // Create ToolBar
  ToolBar.setObjectName(QString::fromUtf8("browser_toolbar"));
  //ToolBar.setStyleSheet(QString::fromUtf8("background-color: rgb(163, 179, 186);"));
  ToolBar.setIconSize(QSize(24, 24));
  ToolBar.addAction(refresh);
  ToolBar.addAction(expand_all);
  ToolBar.addAction(collapse_all);
  ToolBar.addAction(find_dbo);
  ToolBar.addAction(filters);
  ToolBar.addAction(folders);

  // Populate Filter
  Filter.setObjectName(QString::fromUtf8("browser_filterbox"));
  //Filter.setStyleSheet(QString::fromUtf8("background-color: rgb(183, 199, 206);"));
  Filter.addItem(QCoreApplication::translate("Selector->Browser->Filter", "My objects", "Filter item"));
  Filter.addItem(QCoreApplication::translate("Selector->Browser->Filter", "My invalid objects", "Filter item"));
  Filter.addItem(QCoreApplication::translate("Selector->Browser->Filter", "All objects", "Filter item"));
  Filter.addItem(QCoreApplication::translate("Selector->Browser->Filter", "All system objects", "Filter item"));
  Filter.addItem(QCoreApplication::translate("Selector->Browser->Filter", "All non-system objects", "Filter item"));
  Filter.addItem(QCoreApplication::translate("Selector->Browser->Filter", "All objects modified today", "Filter item"));
  //Filter.setCurrentIndex(0);

  // Populate Folders Tree
  Tree.setObjectName(QString::fromUtf8("browser_folders_tree"));
  //Tree.setStyleSheet(QString::fromUtf8("background-color: rgb(223, 239, 246);"));
  Tree.headerItem()->setHidden(true);
  QTreeWidgetItem* pItem = new QTreeWidgetItem();
  pItem->setText(0, QCoreApplication::translate("Selector->Browser->Tree", "Resent objects", "DB objects tree item"));
  pItem->setIcon(0, QPixmap(":/icons/open_file.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);
  //pItem->setDisabled(true);
  //pItem->setHidden(true);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, QCoreApplication::translate("Selector->Browser->Tree", "Recycle bin", "DB objects tree item"));
  pItem->setIcon(0, QPixmap(":/icons/open_file.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, QCoreApplication::translate("Selector->Browser->Tree", "Functions", "DB objects tree item"));
  pItem->setIcon(0, QPixmap(":/icons/open_file.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, QCoreApplication::translate("Selector->Browser->Tree", "Procedures", "DB objects tree item"));
  pItem->setIcon(0, QPixmap(":/icons/open_file.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, QCoreApplication::translate("Selector->Browser->Tree", "Packages", "DB objects tree item"));
  pItem->setIcon(0, QPixmap(":/icons/open_file.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, QCoreApplication::translate("Selector->Browser->Tree", "Package bodies", "DB objects tree item"));
  pItem->setIcon(0, QPixmap(":/icons/open_file.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, QCoreApplication::translate("Selector->Browser->Tree", "Types", "DB objects tree item"));
  pItem->setIcon(0, QPixmap(":/icons/open_file.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, QCoreApplication::translate("Selector->Browser->Tree", "Type bodies", "DB objects tree item"));
  pItem->setIcon(0, QPixmap(":/icons/open_file.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, QCoreApplication::translate("Selector->Browser->Tree", "Triggers", "DB objects tree item"));
  pItem->setIcon(0, QPixmap(":/icons/open_file.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, QCoreApplication::translate("Selector->Browser->Tree", "Java sources", "DB objects tree item"));
  pItem->setIcon(0, QPixmap(":/icons/open_file.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, QCoreApplication::translate("Selector->Browser->Tree", "Jobs", "DB objects tree item"));
  pItem->setIcon(0, QPixmap(":/icons/open_file.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, QCoreApplication::translate("Selector->Browser->Tree", "Queues", "DB objects tree item"));
  pItem->setIcon(0, QPixmap(":/icons/open_file.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, QCoreApplication::translate("Selector->Browser->Tree", "Queue tables", "DB objects tree item"));
  pItem->setIcon(0, QPixmap(":/icons/open_file.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, QCoreApplication::translate("Selector->Browser->Tree", "Libraries", "DB objects tree item"));
  pItem->setIcon(0, QPixmap(":/icons/open_file.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, QCoreApplication::translate("Selector->Browser->Tree", "Directories", "DB objects tree item"));
  pItem->setIcon(0, QPixmap(":/icons/open_file.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, QCoreApplication::translate("Selector->Browser->Tree", "Tables", "DB objects tree item"));
  pItem->setIcon(0, QPixmap(":/icons/open_file.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, QCoreApplication::translate("Selector->Browser->Tree", "Views", "DB objects tree item"));
  pItem->setIcon(0, QPixmap(":/icons/open_file.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, QCoreApplication::translate("Selector->Browser->Tree", "Materialized views", "DB objects tree item"));
  pItem->setIcon(0, QPixmap(":/icons/open_file.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, QCoreApplication::translate("Selector->Browser->Tree", "Sequences", "DB objects tree item"));
  pItem->setIcon(0, QPixmap(":/icons/open_file.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, QCoreApplication::translate("Selector->Browser->Tree", "Users", "DB objects tree item"));
  pItem->setIcon(0, QPixmap(":/icons/open_file.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, QCoreApplication::translate("Selector->Browser->Tree", "Profiles", "DB objects tree item"));
  pItem->setIcon(0, QPixmap(":/icons/open_file.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, QCoreApplication::translate("Selector->Browser->Tree", "Roles", "DB objects tree item"));
  pItem->setIcon(0, QPixmap(":/icons/open_file.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, QCoreApplication::translate("Selector->Browser->Tree", "Synonyms", "DB objects tree item"));
  pItem->setIcon(0, QPixmap(":/icons/open_file.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, QCoreApplication::translate("Selector->Browser->Tree", "Database links", "DB objects tree item"));
  pItem->setIcon(0, QPixmap(":/icons/open_file.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, QCoreApplication::translate("Selector->Browser->Tree", "Tablespaces", "DB objects tree item"));
  pItem->setIcon(0, QPixmap(":/icons/open_file.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, QCoreApplication::translate("Selector->Browser->Tree", "Clusters", "DB objects tree item"));
  pItem->setIcon(0, QPixmap(":/icons/open_file.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  //Layout setup
  QVBoxLayout* pVLayout = new QVBoxLayout;
  pVLayout->setMargin(5);
  pVLayout->setSpacing(5);
  pVLayout->addWidget(&ToolBar);
  pVLayout->addWidget(&Filter);
  pVLayout->addWidget(&Tree);
  setLayout(pVLayout);
  translateGUI(true);
}

Browser::~Browser()
{
  delete   folders;
  delete   filters;
  delete   find_dbo;
  delete   collapse_all;
  delete   expand_all;
  delete   refresh;
}

void Browser::translateGUI(bool init)
{
  refresh->setText(QCoreApplication::translate("Selector->Browser", "Refresh Data", "Action title"));
  #ifndef QT_NO_TOOLTIP
  refresh->setToolTip(QCoreApplication::translate("Selector->Browser", "Refresh data", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  refresh->setStatusTip(QCoreApplication::translate("Selector->Browser", "Refresh data", "Status Tip item"));
  refresh->setWhatsThis(QCoreApplication::translate("Selector->Browser", "Refresh data", "Whats This item"));
  expand_all->setText(QCoreApplication::translate("Selector->Browser", "Expand All", "Action title"));
  #ifndef QT_NO_TOOLTIP
  expand_all->setToolTip(QCoreApplication::translate("Selector->Browser", "Expand all folders in browser", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  expand_all->setStatusTip(QCoreApplication::translate("Selector->Browser", "Expand all folders in browser", "Status Tip item"));
  expand_all->setWhatsThis(QCoreApplication::translate("Selector->Browser", "Expand all folders in browser", "Whats This item"));
  collapse_all->setText(QCoreApplication::translate("Selector->Browser", "Collapse All", "Action title"));
  #ifndef QT_NO_TOOLTIP
  collapse_all->setToolTip(QCoreApplication::translate("Selector->Browser", "Collapse all folders in browser", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  collapse_all->setStatusTip(QCoreApplication::translate("Selector->Browser", "Collapse all folders in browser", "Status Tip item"));
  collapse_all->setWhatsThis(QCoreApplication::translate("Selector->Browser", "Collapse all folders in browser", "Whats This item"));
  find_dbo->setText(QCoreApplication::translate("Selector->Browser", "Find Database Objects...", "Action title"));
  #ifndef QT_NO_TOOLTIP
  find_dbo->setToolTip(QCoreApplication::translate("Selector->Browser", "Allow you to find database objects in database", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  find_dbo->setStatusTip(QCoreApplication::translate("Selector->Browser", "Allow you to find database objects in database", "Status Tip item"));
  find_dbo->setWhatsThis(QCoreApplication::translate("Selector->Browser", "Allow you to find database objects in database", "Whats This item"));
  filters->setText(QCoreApplication::translate("Selector->Browser", "Filters...", "Action title"));
  #ifndef QT_NO_TOOLTIP
  filters->setToolTip(QCoreApplication::translate("Selector->Browser", "Allow you to customize filter setups", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  filters->setStatusTip(QCoreApplication::translate("Selector->Browser", "Allow you to customize filter setups", "Status Tip item"));
  filters->setWhatsThis(QCoreApplication::translate("Selector->Browser", "Allow you to customize filter setups", "Whats This item"));
  folders->setText(QCoreApplication::translate("Selector->Browser", "Folders...", "Action title"));
  #ifndef QT_NO_TOOLTIP
  folders->setToolTip(QCoreApplication::translate("Selector->Browser", "Allow you to customize folders setups", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  folders->setStatusTip(QCoreApplication::translate("Selector->Browser", "Allow you to customize folders setups", "Status Tip item"));
  folders->setWhatsThis(QCoreApplication::translate("Selector->Browser", "Allow you to customize folders setups", "Whats This item"));

  ToolBar.setWindowTitle(QCoreApplication::translate("Selector->Browser", "Browser operations", "ToolBar title"));

  if (!init)
  {
    // Loop for filter items and translate
    for (int i=0; i < Filter.count(); i++)
      Filter.setItemText(i, QCoreApplication::translate("Selector->Browser->Filter", Filter.itemText(i).toLatin1().constData(), "Filter item"));
  }

  // DB objects tree
  Tree.setHeaderLabel(QCoreApplication::translate("Selector->Browser->Tree", "DB Objects", "Tree label"));

  if (!init)
  {
    // Loop for tree items and translate
    QTreeWidgetItemIterator it(&Tree);
    while (*it)
    {
      (*it)->setText(0, QCoreApplication::translate("Selector->Browser->Tree", (*it)->text(0).toLatin1().constData(), "DB objects tree item"));
      it++;
    }
  }
}
