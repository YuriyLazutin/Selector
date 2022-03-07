#include "browser.h"

Browser::Browser(QWidget *parent) : QWidget(parent)
{
  //setMinimumSize(QSize(300, 120));

  // Refresh data
  refresh = new QAction;
  refresh->setObjectName(QString::fromUtf8("action_browser_refresh"));
  refresh->setText(QCoreApplication::translate("Selector", "Refresh Data", nullptr));
  refresh->setToolTip(QCoreApplication::translate("Selector", "Refresh data", nullptr));
  refresh->setStatusTip(QCoreApplication::translate("Selector", "Refresh data", nullptr));
  refresh->setWhatsThis(QCoreApplication::translate("Selector", "Refresh data", nullptr));
  refresh->setIcon(QPixmap(":/icons/refresh.png"));
  //refresh->setEnabled(false);

  // Expand all
  expand_all = new QAction;
  expand_all->setObjectName(QString::fromUtf8("action_browser_expand_all"));
  expand_all->setText(QCoreApplication::translate("Selector", "Expand All", nullptr));
  expand_all->setToolTip(QCoreApplication::translate("Selector", "Expand all folders in browser", nullptr));
  expand_all->setStatusTip(QCoreApplication::translate("Selector", "Expand all folders in browser", nullptr));
  expand_all->setWhatsThis(QCoreApplication::translate("Selector", "Expand all folders in browser", nullptr));
  expand_all->setIcon(QPixmap(":/icons/expand_all.png"));
  //expand_all->setEnabled(false);

  // Collapse all
  collapse_all = new QAction;
  collapse_all->setObjectName(QString::fromUtf8("action_browser_collapse_all"));
  collapse_all->setText(QCoreApplication::translate("Selector", "Collapse All", nullptr));
  collapse_all->setToolTip(QCoreApplication::translate("Selector", "Collapse all folders in browser", nullptr));
  collapse_all->setStatusTip(QCoreApplication::translate("Selector", "Collapse all folders in browser", nullptr));
  collapse_all->setWhatsThis(QCoreApplication::translate("Selector", "Collapse all folders in browser", nullptr));
  collapse_all->setIcon(QPixmap(":/icons/collapse_all.png"));
  //collapse_all->setEnabled(false);

  // Find Database Objects...
  find_dbo = new QAction;
  find_dbo->setObjectName(QString::fromUtf8("action_browser_find_dbo"));
  find_dbo->setText(QCoreApplication::translate("Selector", "Find Database Objects...", nullptr));
  find_dbo->setToolTip(QCoreApplication::translate("Selector", "Allow you to find database objects in database", nullptr));
  find_dbo->setStatusTip(QCoreApplication::translate("Selector", "Allow you to find database objects in database", nullptr));
  find_dbo->setWhatsThis(QCoreApplication::translate("Selector", "Allow you to find database objects in database", nullptr));
  find_dbo->setIcon(QPixmap(":/icons/find_dbo.png"));
  //find_dbo->setEnabled(false);

  // Filters
  filters = new QAction;
  filters->setObjectName(QString::fromUtf8("action_browser_filters"));
  filters->setText(QCoreApplication::translate("Selector", "Filters...", nullptr));
  filters->setToolTip(QCoreApplication::translate("Selector", "Allow you to customize filter setups", nullptr));
  filters->setStatusTip(QCoreApplication::translate("Selector", "Allow you to customize filter setups", nullptr));
  filters->setWhatsThis(QCoreApplication::translate("Selector", "Allow you to customize filter setups", nullptr));
  filters->setIcon(QPixmap(":/icons/filter-settings.png"));
  //filters->setEnabled(false);

  // Folders
  folders = new QAction;
  folders->setObjectName(QString::fromUtf8("action_browser_folders"));
  folders->setText(QCoreApplication::translate("Selector", "Folders...", nullptr));
  folders->setToolTip(QCoreApplication::translate("Selector", "Allow you to customize folders setups", nullptr));
  folders->setStatusTip(QCoreApplication::translate("Selector", "Allow you to customize folders setups", nullptr));
  folders->setWhatsThis(QCoreApplication::translate("Selector", "Allow you to customize folders setups", nullptr));
  folders->setIcon(QPixmap(":/icons/folder_settings.png"));
  //folders->setEnabled(false);

  // Create ToolBar
  ToolBar.setObjectName(QString::fromUtf8("browser_toolbar"));
  //ToolBar.setStyleSheet(QString::fromUtf8("background-color: rgb(163, 179, 186);"));
  ToolBar.setWindowTitle(QCoreApplication::translate("Selector", "Browser operations", nullptr));
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
  Filter.addItem(QCoreApplication::translate("Selector", "My objects", nullptr));
  Filter.addItem(QCoreApplication::translate("Selector", "My invalid objects", nullptr));
  Filter.addItem(QCoreApplication::translate("Selector", "All objects", nullptr));
  Filter.addItem(QCoreApplication::translate("Selector", "All system objects", nullptr));
  Filter.addItem(QCoreApplication::translate("Selector", "All non-system objects", nullptr));
  Filter.addItem(QCoreApplication::translate("Selector", "All objects modified today", nullptr));
  //Filter.setCurrentIndex(0);

  // Populate Folders Tree
  Tree.setObjectName(QString::fromUtf8("browser_folders_tree"));
  Tree.setHeaderLabel(QCoreApplication::translate("Selector", "DB Objects", nullptr));
  //Tree.setStyleSheet(QString::fromUtf8("background-color: rgb(223, 239, 246);"));
  Tree.headerItem()->setHidden(true);
  QTreeWidgetItem* pItem = new QTreeWidgetItem();
  pItem->setText(0, QCoreApplication::translate("Selector", "Resent objects", nullptr));
  pItem->setIcon(0, QPixmap(":/icons/open_file.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);
  //pItem->setDisabled(true);
  //pItem->setHidden(true);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, QCoreApplication::translate("Selector", "Recycle bin", nullptr));
  pItem->setIcon(0, QPixmap(":/icons/open_file.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, QCoreApplication::translate("Selector", "Functions", nullptr));
  pItem->setIcon(0, QPixmap(":/icons/open_file.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, QCoreApplication::translate("Selector", "Procedures", nullptr));
  pItem->setIcon(0, QPixmap(":/icons/open_file.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, QCoreApplication::translate("Selector", "Packages", nullptr));
  pItem->setIcon(0, QPixmap(":/icons/open_file.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, QCoreApplication::translate("Selector", "Package bodies", nullptr));
  pItem->setIcon(0, QPixmap(":/icons/open_file.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, QCoreApplication::translate("Selector", "Types", nullptr));
  pItem->setIcon(0, QPixmap(":/icons/open_file.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, QCoreApplication::translate("Selector", "Type bodies", nullptr));
  pItem->setIcon(0, QPixmap(":/icons/open_file.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, QCoreApplication::translate("Selector", "Triggers", nullptr));
  pItem->setIcon(0, QPixmap(":/icons/open_file.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, QCoreApplication::translate("Selector", "Java sources", nullptr));
  pItem->setIcon(0, QPixmap(":/icons/open_file.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, QCoreApplication::translate("Selector", "Jobs", nullptr));
  pItem->setIcon(0, QPixmap(":/icons/open_file.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, QCoreApplication::translate("Selector", "Queues", nullptr));
  pItem->setIcon(0, QPixmap(":/icons/open_file.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, QCoreApplication::translate("Selector", "Queue tables", nullptr));
  pItem->setIcon(0, QPixmap(":/icons/open_file.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, QCoreApplication::translate("Selector", "Libraries", nullptr));
  pItem->setIcon(0, QPixmap(":/icons/open_file.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, QCoreApplication::translate("Selector", "Directories", nullptr));
  pItem->setIcon(0, QPixmap(":/icons/open_file.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, QCoreApplication::translate("Selector", "Tables", nullptr));
  pItem->setIcon(0, QPixmap(":/icons/open_file.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, QCoreApplication::translate("Selector", "Views", nullptr));
  pItem->setIcon(0, QPixmap(":/icons/open_file.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, QCoreApplication::translate("Selector", "Materialized views", nullptr));
  pItem->setIcon(0, QPixmap(":/icons/open_file.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, QCoreApplication::translate("Selector", "Sequences", nullptr));
  pItem->setIcon(0, QPixmap(":/icons/open_file.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, QCoreApplication::translate("Selector", "Users", nullptr));
  pItem->setIcon(0, QPixmap(":/icons/open_file.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, QCoreApplication::translate("Selector", "Profiles", nullptr));
  pItem->setIcon(0, QPixmap(":/icons/open_file.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, QCoreApplication::translate("Selector", "Roles", nullptr));
  pItem->setIcon(0, QPixmap(":/icons/open_file.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, QCoreApplication::translate("Selector", "Synonyms", nullptr));
  pItem->setIcon(0, QPixmap(":/icons/open_file.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, QCoreApplication::translate("Selector", "Database links", nullptr));
  pItem->setIcon(0, QPixmap(":/icons/open_file.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, QCoreApplication::translate("Selector", "Tablespaces", nullptr));
  pItem->setIcon(0, QPixmap(":/icons/open_file.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, QCoreApplication::translate("Selector", "Clusters", nullptr));
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
