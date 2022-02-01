#include "browser.h"

Browser::Browser(QWidget *parent) : QWidget(parent)
{
  //setMinimumSize(QSize(300, 120));

  // Refresh data
  refresh = new QAction;
  refresh->setObjectName(QString::fromUtf8("action_browser_refresh"));
  refresh->setText(QApplication::translate("Selector", "Refresh Data", nullptr));
  refresh->setToolTip("Refresh data");
  refresh->setStatusTip("Refresh data");
  refresh->setWhatsThis("Refresh data");
  refresh->setIcon(QPixmap(":/icons/commit.png"));
  //refresh->setEnabled(false);

  // Expand all
  expand_all = new QAction;
  expand_all->setObjectName(QString::fromUtf8("action_browser_expand_all"));
  expand_all->setText(QApplication::translate("Selector", "Expand All", nullptr));
  expand_all->setToolTip("Expand all folders in browser");
  expand_all->setStatusTip("Expand all folders in browser");
  expand_all->setWhatsThis("Expand all folders in browser");
  expand_all->setIcon(QPixmap(":/icons/edit-undo.png"));
  //expand_all->setEnabled(false);

  // Collapse all
  collapse_all = new QAction;
  collapse_all->setObjectName(QString::fromUtf8("action_browser_collapse_all"));
  collapse_all->setText(QApplication::translate("Selector", "Collapse All", nullptr));
  collapse_all->setToolTip("Collapse all folders in browser");
  collapse_all->setStatusTip("Collapse all folders in browser");
  collapse_all->setWhatsThis("Collapse all folders in browser");
  collapse_all->setIcon(QPixmap(":/icons/edit-redo.png"));
  //collapse_all->setEnabled(false);

  // Find Database Objects...
  find_dbo = new QAction;
  find_dbo->setObjectName(QString::fromUtf8("action_browser_find_dbo"));
  find_dbo->setText(QApplication::translate("Selector", "Find Database Objects...", nullptr));
  find_dbo->setToolTip("Allow you to find database objects in database");
  find_dbo->setStatusTip("Allow you to find database objects in database");
  find_dbo->setWhatsThis("Allow you to find database objects in database");
  find_dbo->setIcon(QPixmap(":/icons/execute.png"));
  //find_dbo->setEnabled(false);

  // Filters
  filters = new QAction;
  filters->setObjectName(QString::fromUtf8("action_browser_filters"));
  filters->setText(QApplication::translate("Selector", "Filters...", nullptr));
  filters->setToolTip("Allow you to customize filter setups");
  filters->setStatusTip("Allow you to customize filter setups");
  filters->setWhatsThis("Allow you to customize filter setups");
  filters->setIcon(QPixmap(":/icons/rollback.png"));
  //filters->setEnabled(false);

  // Folders
  folders = new QAction;
  folders->setObjectName(QString::fromUtf8("action_browser_folders"));
  folders->setText(QApplication::translate("Selector", "Folders...", nullptr));
  folders->setToolTip("Allow you to customize folders setups");
  folders->setStatusTip("Allow you to customize folders setups");
  folders->setWhatsThis("Allow you to customize folders setups");
  folders->setIcon(QPixmap(":/icons/open-sql.png"));
  //folders->setEnabled(false);

  // Create ToolBar
  ToolBar.setObjectName(QString::fromUtf8("browser_toolbar"));
  //ToolBar.setStyleSheet(QString::fromUtf8("background-color: rgb(163, 179, 186);"));
  ToolBar.setWindowTitle("Browser operations");
  ToolBar.setIconSize(QSize(16, 16));
  ToolBar.addAction(refresh);
  ToolBar.addAction(expand_all);
  ToolBar.addAction(collapse_all);
  ToolBar.addAction(find_dbo);
  ToolBar.addAction(filters);
  ToolBar.addAction(folders);

  // Populate Filter
  Filter.setObjectName(QString::fromUtf8("browser_filterbox"));
  Filter.setStyleSheet(QString::fromUtf8("background-color: rgb(183, 199, 206);"));
  Filter.addItem("My objects");
  Filter.addItem("My invalid objects");
  Filter.addItem("All objects");
  Filter.addItem("All system objects");
  Filter.addItem("All non-system objects");
  Filter.addItem("All objects modified today");
  //Filter.setCurrentIndex(0);

  // Populate Folders Tree
  Tree.setObjectName(QString::fromUtf8("browser_folders_tree"));
  Tree.setHeaderLabel("DB Objects");
  Tree.headerItem()->setHidden(true);
  QTreeWidgetItem* pItem = new QTreeWidgetItem();
  pItem->setText(0, "Resent objects");
  pItem->setIcon(0, QPixmap(":/icons/open-sql.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);
  //pItem->setDisabled(true);
  //pItem->setHidden(true);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, "Recycle bin");
  pItem->setIcon(0, QPixmap(":/icons/open-sql.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, "Functions");
  pItem->setIcon(0, QPixmap(":/icons/open-sql.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, "Procedures");
  pItem->setIcon(0, QPixmap(":/icons/open-sql.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, "Packages");
  pItem->setIcon(0, QPixmap(":/icons/open-sql.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, "Package bodies");
  pItem->setIcon(0, QPixmap(":/icons/open-sql.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, "Types");
  pItem->setIcon(0, QPixmap(":/icons/open-sql.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, "Type bodies");
  pItem->setIcon(0, QPixmap(":/icons/open-sql.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, "Triggers");
  pItem->setIcon(0, QPixmap(":/icons/open-sql.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, "Java sources");
  pItem->setIcon(0, QPixmap(":/icons/open-sql.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, "Jobs");
  pItem->setIcon(0, QPixmap(":/icons/open-sql.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, "Queues");
  pItem->setIcon(0, QPixmap(":/icons/open-sql.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, "Queue tables");
  pItem->setIcon(0, QPixmap(":/icons/open-sql.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, "Libraries");
  pItem->setIcon(0, QPixmap(":/icons/open-sql.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, "Directories");
  pItem->setIcon(0, QPixmap(":/icons/open-sql.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, "Tables");
  pItem->setIcon(0, QPixmap(":/icons/open-sql.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, "Views");
  pItem->setIcon(0, QPixmap(":/icons/open-sql.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, "Materialized views");
  pItem->setIcon(0, QPixmap(":/icons/open-sql.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, "Sequences");
  pItem->setIcon(0, QPixmap(":/icons/open-sql.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, "Users");
  pItem->setIcon(0, QPixmap(":/icons/open-sql.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, "Profiles");
  pItem->setIcon(0, QPixmap(":/icons/open-sql.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, "Roles");
  pItem->setIcon(0, QPixmap(":/icons/open-sql.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, "Synonyms");
  pItem->setIcon(0, QPixmap(":/icons/open-sql.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, "Database links");
  pItem->setIcon(0, QPixmap(":/icons/open-sql.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, "Tablespaces");
  pItem->setIcon(0, QPixmap(":/icons/open-sql.png"));
  pItem->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);
  Tree.addTopLevelItem(pItem);

  pItem = new QTreeWidgetItem();
  pItem->setText(0, "Clusters");
  pItem->setIcon(0, QPixmap(":/icons/open-sql.png"));
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
