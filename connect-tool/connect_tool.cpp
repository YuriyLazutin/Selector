#include "connect_tool.h"

ConnectTool::ConnectTool(QWidget* pParent) : QDialog(pParent)
{
  #ifndef QT_NO_DEBUG
  setObjectName(QString::fromUtf8("ConnectTool"));
  #endif
  pSettings = new QSettings(this);
  pSettings->beginGroup("Settings/ConnectTool");

  setMinimumSize(QSize(400, 400));
  //resize(640, 480);

  //QSizePolicy szPolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
  //szPolicy.setHorizontalStretch(0);
  //szPolicy.setVerticalStretch(0);
  //szPolicy.setHeightForWidth(sizePolicy().hasHeightForWidth());
  //setSizePolicy(szPolicy);
  //setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.5, fx:0.5, fy:0.5, stop:0 rgba(190, 200, 210, 255), stop:1 rgba(160, 200, 190, 223));"));

  #ifndef QT_NO_DEBUG
  Layout.setObjectName(QString::fromUtf8("connecttool_mainlayout"));
  #endif
  setLayout(&Layout);
  Layout.addWidget(&Splitter);
  Layout.addWidget(&btnBox);

  #ifndef QT_NO_DEBUG
  Splitter.setObjectName(QString::fromUtf8("connecttool_splitter"));
  #endif
  Splitter.setOrientation(Qt::Horizontal);
  Splitter.setHandleWidth(5);
  Splitter.addWidget(&LeftWidget);
  Splitter.setStretchFactor(0, 1);
  Splitter.addWidget(&GroupBox);
  Splitter.setStretchFactor(1, 1.618);

  // Create a tree widget with logon history

  // "Add connection" button
  #ifndef QT_NO_DEBUG
  act_add_cnnctn.setObjectName(QString::fromUtf8("connecttool_act_add_cnnctn"));
  #endif
  act_add_cnnctn.setIcon(QPixmap(":/icons/insert_record.png"));

  // "Add group" button
  #ifndef QT_NO_DEBUG
  act_add_grp.setObjectName(QString::fromUtf8("connecttool_act_add_grp"));
  #endif
  act_add_grp.setIcon(QPixmap(":/icons/add_group.png"));

  // "Delete" button
  #ifndef QT_NO_DEBUG
  act_del.setObjectName(QString::fromUtf8("connecttool_act_del"));
  #endif
  act_del.setIcon(QPixmap(":/icons/recycle_bin_full.png"));

  #ifndef QT_NO_DEBUG
  ToolBar.setObjectName(QString::fromUtf8("connecttool_toolbar"));
  #endif
  ToolBar.setIconSize(QSize(24, 24));
  ToolBar.addAction(&act_add_cnnctn);
  ToolBar.addAction(&act_add_grp);
  ToolBar.addAction(&act_del);

  // Tree widget
  #ifndef QT_NO_DEBUG
  twLogonHist.setObjectName(QString::fromUtf8("connecttool_twlogonhist"));
  #endif
  twLogonHist.setHeaderHidden(true);

  //Layout setup
  #ifndef QT_NO_DEBUG
  VLayout_LeftWidget.setObjectName(QString::fromUtf8("connecttool_leftwidgetlayout"));
  #endif
  VLayout_LeftWidget.setContentsMargins(5, 5, 0, 5);
  VLayout_LeftWidget.setSpacing(5);
  VLayout_LeftWidget.addWidget(&ToolBar);
  //VLayout_LeftWidget.setAlignment(&ToolBar, Qt::AlignHCenter);
  VLayout_LeftWidget.addWidget(&twLogonHist);
  LeftWidget.setLayout(&VLayout_LeftWidget);

  // Create a group box with connect parameters
  #ifndef QT_NO_DEBUG
  GroupBox.setObjectName(QString::fromUtf8("connecttool_groupbox"));
  lblSrvType.setObjectName(QString::fromUtf8("connecttool_lblsrvtype"));
  cboxSrvType.setObjectName(QString::fromUtf8("connecttool_cboxsrvtype"));
  #endif
  lblSrvType.setVisible(false);
  lblSrvType.setBuddy(&cboxSrvType);
  //cboxSrvType.setSizePolicy(QSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed));
  cboxSrvType.addItem(QString::fromUtf8("Oracle"));
  cboxSrvType.addItem(QString::fromUtf8("Postgre"));
  cboxSrvType.addItem(QString::fromUtf8("MySQL"));
  cboxSrvType.setCurrentText(pSettings->value("Server Type", "Oracle").toString());
  cboxSrvType.setVisible(false);
  #ifndef QT_NO_DEBUG
  lblDatabase.setObjectName(QString::fromUtf8("connecttool_lbldatabase"));
  leDatabase.setObjectName(QString::fromUtf8("connecttool_ledatabase"));
  #endif
  lblDatabase.setBuddy(&leDatabase);
  leDatabase.setText(pSettings->value("Database", "").toString());
  leDatabase.setEnabled(false);
  //leDatabase.setReadOnly(true);
  #ifndef QT_NO_DEBUG
  lblUsername.setObjectName(QString::fromUtf8("connecttool_lblusername"));
  leUsername.setObjectName(QString::fromUtf8("connecttool_leusername"));
  #endif
  lblUsername.setBuddy(&leUsername);
  leUsername.setMaxLength(32);
  leUsername.setClearButtonEnabled(true);
  leUsername.setText(pSettings->value("Username", "").toString());
  #ifndef QT_NO_DEBUG
  lblPassword.setObjectName(QString::fromUtf8("connecttool_lblpassword"));
  lePassword.setObjectName(QString::fromUtf8("connecttool_lepassword"));
  #endif
  lblPassword.setBuddy(&lePassword);
  lePassword.setEchoMode(QLineEdit::Password);
  lePassword.setClearButtonEnabled(true);
  #ifndef QT_NO_DEBUG
  lblRole.setObjectName(QString::fromUtf8("connecttool_lblrole"));
  cboxRole.setObjectName(QString::fromUtf8("connecttool_cboxrole"));
  #endif
  lblRole.setBuddy(&cboxRole);
  cboxRole.addItem(QString::fromUtf8("Normal"));
  cboxRole.addItem(QString::fromUtf8("SYSDBA"));
  cboxRole.addItem(QString::fromUtf8("SYSOPER"));
  cboxRole.setCurrentText(pSettings->value("Connect As", "Normal").toString());
  pSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding); // Do not delete it in destructor

  #ifndef QT_NO_DEBUG
  VLayout_GroupBox.setObjectName(QString::fromUtf8("connecttool_vlayout_groupbox"));
  #endif
  VLayout_GroupBox.setSpacing(5);
  VLayout_GroupBox.setContentsMargins(10, 10, 10, 10);
  VLayout_GroupBox.addWidget(&lblSrvType);
  VLayout_GroupBox.addWidget(&cboxSrvType);
  VLayout_GroupBox.addWidget(&lblDatabase);
  VLayout_GroupBox.addWidget(&leDatabase);
  VLayout_GroupBox.addWidget(&lblUsername);
  VLayout_GroupBox.addWidget(&leUsername);
  VLayout_GroupBox.addWidget(&lblPassword);
  VLayout_GroupBox.addWidget(&lePassword);
  VLayout_GroupBox.addWidget(&lblRole);
  VLayout_GroupBox.addWidget(&cboxRole);
  VLayout_GroupBox.addItem(pSpacer);
  GroupBox.setLayout(&VLayout_GroupBox);

  #ifndef QT_NO_DEBUG
  btnBox.setObjectName(QString::fromUtf8("connecttool_btnbox"));
  #endif
  btnBox.setOrientation(Qt::Horizontal);
  pSaveButton = btnBox.addButton("Save", QDialogButtonBox::ActionRole);
  btnBox.setStandardButtons(QDialogButtonBox::Cancel);
  pConnectButton = btnBox.addButton("Connect", QDialogButtonBox::AcceptRole);
  pConnectButton->setDefault(true);
  pSaveButton->setVisible(false);

  ConnectionToggledFirst = true;
  LoadConnections();
  translateGUI(true);
  mapSS();

  // Initialize database (remove it in inherited code. We will set up databale on upper level and use a pointer)
  pDB = new DBOracle();
}

ConnectTool::~ConnectTool()
{
  pSettings->endGroup();
  delete pDB;
  delete pSettings;
}

void ConnectTool::translateGUI(bool init)
{
  // Main window
  setWindowTitle(QCoreApplication::translate("ConnectTool", "Connect to Database", "ConnectTool window title"));


  // Tree widget with logon history

  // Toolbar
  act_add_cnnctn.setText(QCoreApplication::translate("ConnectTool", "Add connection", "Action title"));
  #ifndef QT_NO_TOOLTIP
  act_add_cnnctn.setToolTip(QCoreApplication::translate("ConnectTool", "Add new connection", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  #ifndef QT_NO_STATUSTIP
  act_add_cnnctn.setStatusTip(QCoreApplication::translate("ConnectTool", "Add new connection", "Status Tip item"));
  #endif // QT_NO_STATUSTIP
  #ifndef QT_NO_WHATSTHIS
  act_add_cnnctn.setWhatsThis(QCoreApplication::translate("ConnectTool", "Add new connection", "Whats This item"));
  #endif // QT_NO_WHATSTHIS

  act_del.setText(QCoreApplication::translate("ConnectTool", "Delete connection or group", "Action title"));
  #ifndef QT_NO_TOOLTIP
  act_del.setToolTip(QCoreApplication::translate("ConnectTool", "Delete connection or group from list", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  #ifndef QT_NO_STATUSTIP
  act_del.setStatusTip(QCoreApplication::translate("ConnectTool", "Delete connection or group from list", "Status Tip item"));
  #endif // QT_NO_STATUSTIP
  #ifndef QT_NO_WHATSTHIS
  act_del.setWhatsThis(QCoreApplication::translate("ConnectTool", "Delete connection or group from list", "Whats This item"));
  #endif // QT_NO_WHATSTHIS

  act_add_grp.setText(QCoreApplication::translate("ConnectTool", "Add group", "Action title"));
  #ifndef QT_NO_TOOLTIP
  act_add_grp.setToolTip(QCoreApplication::translate("ConnectTool", "Add new connection group", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  #ifndef QT_NO_STATUSTIP
  act_add_grp.setStatusTip(QCoreApplication::translate("ConnectTool", "Add new connection group", "Status Tip item"));
  #endif // QT_NO_STATUSTIP
  #ifndef QT_NO_WHATSTHIS
  act_add_grp.setWhatsThis(QCoreApplication::translate("ConnectTool", "Add new connection group", "Whats This item"));
  #endif // QT_NO_WHATSTHIS

  ToolBar.setWindowTitle(QCoreApplication::translate("ConnectTool", "Connection list toolbar", "ToolBar title"));

  twLogonHist.setHeaderLabel(QCoreApplication::translate("ConnectTool", "Connection list", "Tree header label"));
  #ifndef QT_NO_TOOLTIP
  twLogonHist.setToolTip(QCoreApplication::translate("ConnectTool", "List with saved connections", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  #ifndef QT_NO_STATUSTIP
  twLogonHist.setStatusTip(QCoreApplication::translate("ConnectTool", "List with saved connections", "Status Tip item"));
  #endif // QT_NO_STATUSTIP
  #ifndef QT_NO_WHATSTHIS
  twLogonHist.setWhatsThis(QCoreApplication::translate("ConnectTool", "List with saved connections", "Whats This item"));
  #endif // QT_NO_WHATSTHIS


  // Group box with connect parameters
  GroupBox.setTitle(QCoreApplication::translate("ConnectTool", "Database logon parameters:", "Group Box title"));
  lblSrvType.setText(QCoreApplication::translate("ConnectTool", "Server Type:", "DB server type or manufacturer (Oracle, Postgre, MySQL and so on)"));
  #ifndef QT_NO_TOOLTIP
  cboxSrvType.setToolTip(QCoreApplication::translate("ConnectTool", "Allow you to select server type", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  #ifndef QT_NO_STATUSTIP
  cboxSrvType.setStatusTip(QCoreApplication::translate("ConnectTool", "Allow you to select server type", "Status Tip item"));
  #endif // QT_NO_STATUSTIP
  #ifndef QT_NO_WHATSTHIS
  cboxSrvType.setWhatsThis(QCoreApplication::translate("ConnectTool", "Allow you to select server type", "Whats This item"));
  #endif // QT_NO_WHATSTHIS

  lblDatabase.setText(QCoreApplication::translate("ConnectTool", "Database:", "Database name, SID or service name"));
  #ifndef QT_NO_TOOLTIP
  leDatabase.setToolTip(QCoreApplication::translate(
     "ConnectTool"
    ,"The Database parameter specify connect string to database server and database itself.<br>"
     "Connect string can be specified in the following formats:<br>"
     "<b>Host-based form:</b><br>"
     "<i>//host:[port][/service_name]</i><br>"
     "for example:<br>"
     "<i>//myserver.net:1521/mydbase</i><br>"
     "<b>TNS-based form (As an entry in the tnsnames.ora file):</b><br>"
     "<i>tns_entry_name</i><br>"
     "for example:<br>"
     "<i>mydbase</i><br>"
     "Environment variables TNS_ADMIN or ORACLE_HOME should be set. "
     "In case of TNS_ADMIN is set the tnsnames.ora will be find in this path. "
     "Overwise if ORACLE_HOME is set the tnsnames.ora will be find in $ORACLE_HOME/network/admin.<br>"
     "<b>Oracle Net keyword-value pair form:</b><br>"
     "for example:<br>"
     "<i>(DESCRIPTION=(ADDRESS=(PROTOCOL=TCP)(HOST=myserver.net)(PORT=1521))(CONNECT_DATA=(SERVICE_NAME=mydbase)))</i>"
    ,"Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  #ifndef QT_NO_STATUSTIP
  leDatabase.setStatusTip(QCoreApplication::translate("ConnectTool", "Allow you to select database, SID and so on", "Status Tip item"));
  #endif // QT_NO_STATUSTIP
  #ifndef QT_NO_WHATSTHIS
  leDatabase.setWhatsThis(QCoreApplication::translate("ConnectTool", "Allow you to select database, SID and so on", "Whats This item"));
  #endif // QT_NO_WHATSTHIS

  lblUsername.setText(QCoreApplication::translate("ConnectTool", "Username:", "Autorization parameter will be used to connect with database"));
  #ifndef QT_NO_TOOLTIP
  leUsername.setToolTip(QCoreApplication::translate("ConnectTool", "This username will be used to connect with database", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  #ifndef QT_NO_STATUSTIP
  leUsername.setStatusTip(QCoreApplication::translate("ConnectTool", "This username will be used to connect with database", "Status Tip item"));
  #endif // QT_NO_STATUSTIP
  #ifndef QT_NO_WHATSTHIS
  leUsername.setWhatsThis(QCoreApplication::translate("ConnectTool", "This username will be used to connect with database", "Whats This item"));
  #endif // QT_NO_WHATSTHIS

  lblPassword.setText(QCoreApplication::translate("ConnectTool", "Password:", "Autorization parameter will be used to connect with database"));
  #ifndef QT_NO_TOOLTIP
  lePassword.setToolTip(QCoreApplication::translate("ConnectTool", "This password will be used to connect with database", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  #ifndef QT_NO_STATUSTIP
  lePassword.setStatusTip(QCoreApplication::translate("ConnectTool", "This password will be used to connect with database", "Status Tip item"));
  #endif // QT_NO_STATUSTIP
  #ifndef QT_NO_WHATSTHIS
  lePassword.setWhatsThis(QCoreApplication::translate("ConnectTool", "This password will be used to connect with database", "Whats This item"));
  #endif // QT_NO_WHATSTHIS

  lblRole.setText(QCoreApplication::translate("ConnectTool", "Connect as:", "Connection mode. This value is used in some servers to connect as administrator or other roles."));
  #ifndef QT_NO_TOOLTIP
  cboxRole.setToolTip(QCoreApplication::translate("ConnectTool", "Set the connection mode", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  #ifndef QT_NO_STATUSTIP
  cboxRole.setStatusTip(QCoreApplication::translate("ConnectTool", "Set the connection mode", "Status Tip item"));
  #endif // QT_NO_STATUSTIP
  #ifndef QT_NO_WHATSTHIS
  cboxRole.setWhatsThis(QCoreApplication::translate("ConnectTool", "Set the connection mode", "Whats This item"));
  #endif // QT_NO_WHATSTHIS

  pSaveButton->setText(QCoreApplication::translate("ConnectTool", "Save", "Save connection button label"));
  #ifndef QT_NO_TOOLTIP
  pSaveButton->setToolTip(QCoreApplication::translate("ConnectTool", "Save connection parameters", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  #ifndef QT_NO_STATUSTIP
  pSaveButton->setStatusTip(QCoreApplication::translate("ConnectTool", "Save connection parameters", "Status Tip item"));
  #endif // QT_NO_STATUSTIP
  #ifndef QT_NO_WHATSTHIS
  pSaveButton->setWhatsThis(QCoreApplication::translate("ConnectTool", "Save connection parameters", "Whats This item"));
  #endif // QT_NO_WHATSTHIS

  QPushButton* pCancelButton = btnBox.button(QDialogButtonBox::Cancel);

  pCancelButton->setText(QCoreApplication::translate("ConnectTool", "Cancel", "Close connection tool without connection"));
  #ifndef QT_NO_TOOLTIP
  pCancelButton->setToolTip(QCoreApplication::translate("ConnectTool", "Close connection tool without connection", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  #ifndef QT_NO_STATUSTIP
  pCancelButton->setStatusTip(QCoreApplication::translate("ConnectTool", "Close connection tool without connection", "Status Tip item"));
  #endif // QT_NO_STATUSTIP
  #ifndef QT_NO_WHATSTHIS
  pCancelButton->setWhatsThis(QCoreApplication::translate("ConnectTool", "Close connection tool without connection", "Whats This item"));
  #endif // QT_NO_WHATSTHIS

  pConnectButton->setText(QCoreApplication::translate("ConnectTool", "Connect", "Close connection tool and connect to database"));
  #ifndef QT_NO_TOOLTIP
  pConnectButton->setToolTip(QCoreApplication::translate("ConnectTool", "Close connection tool and connect to database", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  #ifndef QT_NO_STATUSTIP
  pConnectButton->setStatusTip(QCoreApplication::translate("ConnectTool", "Close connection tool and connect to database", "Status Tip item"));
  #endif // QT_NO_STATUSTIP
  #ifndef QT_NO_WHATSTHIS
  pConnectButton->setWhatsThis(QCoreApplication::translate("ConnectTool", "Close connection tool and connect to database", "Whats This item"));
  #endif // QT_NO_WHATSTHIS


  if (!init)
  {
  } // End of if (!init)
}

void ConnectTool::mapSS()
{
  QObject::connect(&btnBox, SIGNAL(rejected()), SLOT(reject()));
  QObject::connect(&btnBox, SIGNAL(accepted()), SLOT(slotConnect()));
  QObject::connect(pSaveButton, SIGNAL(clicked()), SLOT(slotSaveConnection()));
  QObject::connect(&act_add_cnnctn, SIGNAL(triggered()), SLOT(slotAddConnection()));
  QObject::connect(&act_add_grp, SIGNAL(triggered()), SLOT(slotAddConnectionGroup()));
  QObject::connect(&act_del, SIGNAL(triggered()), SLOT(slotDel()));
  QObject::connect(&leDatabase, SIGNAL(editingFinished()), SLOT(slotConnectionDataChanged()));
  QObject::connect(&leUsername, SIGNAL(editingFinished()), SLOT(slotConnectionDataChanged()));
  QObject::connect(&cboxRole, SIGNAL(currentTextChanged(const QString &)), SLOT(slotConnectionDataChanged()));
  QObject::connect(&twLogonHist, SIGNAL(currentItemChanged(QTreeWidgetItem *, QTreeWidgetItem *)), SLOT(slotConnectionToggled(QTreeWidgetItem *, QTreeWidgetItem *)));

  QMetaObject::connectSlotsByName(this);
}

void ConnectTool::slotConnect()
{
  #ifndef QT_NO_DEBUG
  qDebug() << "Connect pressed!" << endl;
  #endif

  if (leDatabase.text().isEmpty() || leUsername.text().isEmpty() || lePassword.text().isEmpty())
  {
    QMessageBox::critical(
       nullptr  // pParent
      ,QCoreApplication::translate("ConnectTool", "Mandatory parameter missed!", "Message box title")
      ,QCoreApplication::translate("ConnectTool", "This parameters mandatory and should be populated:<br><br>", "Message box text")
       + (leDatabase.text().isEmpty() ? "&nbsp;&nbsp;<i>" + lblDatabase.text() + "</i><br>" : "")
       + (leUsername.text().isEmpty() ? "&nbsp;&nbsp;<i>" + lblUsername.text() + "</i><br>" : "")
       + (lePassword.text().isEmpty() ? "&nbsp;&nbsp;<i>" + lblPassword.text() + "</i><br>" : "")
    );
    return;
  }

  pDB->Connect2Srv(leUsername.text(), lePassword.text(), leDatabase.text());
  pDB->SelectExample();

  // Save last connection
  pSettings->setValue("Server Type", cboxSrvType.currentText());
  pSettings->setValue("Database", leDatabase.text());
  pSettings->setValue("Username", leUsername.text());
  pSettings->setValue("Connect As", cboxRole.currentText());

  accept();
}

void ConnectTool::LoadConnections()
{
  twLogonHist.clear();

  int cnt, i, j, k;  // counters
  QTreeWidgetItem* pItm;          // current tree item
  QTreeWidgetItem* pParentItem;   // parent item
  QTreeWidgetItem* pRootItem = twLogonHist.invisibleRootItem();  // Root item
  bool bFound;
  QString
     ConnStr         // connection string from connection item itself
//    ,ConnStrUsr      // substring which contains information about user
//    ,ConnStrDb       // substring which contains information about database
    ,ConnStrRole     // substring which contains information about role
  ;

  // Load groups
  cnt = pSettings->beginReadArray("Groups");

  #ifndef QT_NO_DEBUG
  qDebug() << cnt << " groups detected." << endl;
  #endif

  for (i = 0; i < cnt; i++)
  {
      pSettings->setArrayIndex(i);
      #ifndef QT_NO_DEBUG
      qDebug() << "Current group: " << pSettings->value("Group").toString() << endl;
      #endif
      QStringList GroupNames = pSettings->value("Group").toString().split(QLatin1Char('/'));
      pParentItem = pRootItem;

      #ifndef QT_NO_DEBUG
      qDebug() << "Loop for group tree." << endl;
      #endif
      for (j = 0; j < GroupNames.size(); j++)
      {
        #ifndef QT_NO_DEBUG
        qDebug() << "Analyzing subgroup: " << GroupNames.at(j) << endl;
        #endif

        // Try to find existing group
        bFound = false;

        #ifndef QT_NO_DEBUG
        qDebug() << "Parent item has " << pParentItem->childCount() << " childs" << endl;
        #endif

        for (k = 0; k < pParentItem->childCount(); k++)
        {
          pItm = pParentItem->child(k);

          #ifndef QT_NO_DEBUG
            qDebug() << "Current child item is: " << pItm->text(0) << endl;
            qDebug() << "Item type is: ";
            if (pItm->type() == ITM_TYPE_GROUP)
              qDebug() << "ITM_TYPE_GROUP" << endl;
            else if (pItm->type() == ITM_TYPE_CONNECTION)
              qDebug() << "ITM_TYPE_CONNECTION" << endl;
          #endif

          if ( pItm->text(0) == GroupNames.at(j) && pItm->type() == ITM_TYPE_GROUP)
          {
            bFound = true;
            break;
          }
        }

        // If group was not found we must create it
        if (!bFound)
        {
          pItm = new QTreeWidgetItem(pParentItem, ITM_TYPE_GROUP);
          pItm->setText(0, GroupNames.at(j));
          pItm->setIcon(0, QPixmap(":/icons/folder.png"));
          pItm->setFlags(Qt::ItemIsEditable | Qt::ItemIsSelectable | Qt::ItemIsDragEnabled | Qt::ItemIsDropEnabled | Qt::ItemIsEnabled);

          /*
          if (pParentItem == nullptr)
            twLogonHist.addTopLevelItem(pItem);
          else
            pParentItem->setExpanded(true);
          */
        }

        pParentItem = pItm;
      }
  }
  pSettings->endArray();

  // Load connections
  cnt = pSettings->beginReadArray("Connections");

  #ifndef QT_NO_DEBUG
  qDebug() << cnt << " connections detected." << endl;
  #endif

  for (i = 0; i < cnt; i++)
  {
    pSettings->setArrayIndex(i);
    pParentItem = pRootItem;

    #ifndef QT_NO_DEBUG
    qDebug() << "Current group: " << pSettings->value("Group").toString() << endl;
    #endif

    if (!pSettings->value("Group").toString().isEmpty())
    {
      QStringList GroupNames = pSettings->value("Group").toString().split(QLatin1Char('/'));

      #ifndef QT_NO_DEBUG
      qDebug() << "Loop for group tree." << endl;
      #endif
      for (j = 0; j < GroupNames.size(); j++)
      {
        #ifndef QT_NO_DEBUG
        qDebug() << "Analyzing subgroup: " << GroupNames.at(j) << endl;
        #endif

        // Try to find existing group
        #ifndef QT_NO_DEBUG
        qDebug() << "Parent item has " << pParentItem->childCount() << " childs" << endl;
        #endif

        for (k = 0; k < pParentItem->childCount(); k++)
        {
          pItm = pParentItem->child(k);

          #ifndef QT_NO_DEBUG
            qDebug() << "Current child item is: " << pItm->text(0) << endl;
            qDebug() << "Item type is: ";
            if (pItm->type() == ITM_TYPE_GROUP)
              qDebug() << "ITM_TYPE_GROUP" << endl;
            else if (pItm->type() == ITM_TYPE_CONNECTION)
              qDebug() << "ITM_TYPE_CONNECTION" << endl;
          #endif

          if ( pItm->text(0) == GroupNames.at(j) && pItm->type() == ITM_TYPE_GROUP)
          {
            pParentItem = pItm;
            break;
          }
        }

      }
    }

    // Create connection
    pItm = new QTreeWidgetItem(pParentItem, ITM_TYPE_CONNECTION);

    ConnStr.clear();
    ConnStr.append(pSettings->value("Username").toString());
    ConnStrRole = pSettings->value("Connect As", "Normal").toString();

    if (ConnStrRole != "Normal")
    {
      ConnStrRole.prepend(" AS ");
      ConnStr.append(ConnStrRole);
    }

    ConnStr.append("//");
    ConnStr.append(pSettings->value("Database").toString());

    pItm->setText(0, ConnStr);
    //pItm->setIcon(0, QPixmap(":/icons/folder.png"));

    /*
    if (pParentItem == nullptr)
      twLogonHist.addTopLevelItem(pItem);
    else
      pParentItem->setExpanded(true);
    */
  }
  pSettings->endArray();
}

void ConnectTool::slotSaveConnection()
{
  #ifndef QT_NO_DEBUG
  qDebug() << "Save pressed!" << endl;
  qDebug() << "Organization Name: " + pSettings->organizationName() << endl;
  qDebug() << "Application Name: " + pSettings->applicationName() << endl;
  qDebug() << "Settings Group: " + pSettings->group() << endl;
  #endif

  lblSrvType.setVisible(false);
  cboxSrvType.setVisible(false);
  leDatabase.setEnabled(false);
  //leDatabase.setReadOnly(true);
  pSaveButton->setVisible(false);

  // Save all groups and connections
  QTreeWidgetItemIterator
    gr(&twLogonHist, QTreeWidgetItemIterator::Editable)     // connection group items
   ,it(&twLogonHist, QTreeWidgetItemIterator::NotEditable)  // connection itself items
  ;
  QTreeWidgetItem* pItm;   // current tree item
  QString
     GroupPath       // full path to group including it name
    ,ConnStr         // connection string from connection item itself
    ,ConnStrUsr        // substring of connection string which contains information about user
    ,ConnStrDb         // substring of connection string which contains information about database
    ,ConnStrRole       // substring of connection string which contains information about role
  ;
  int i;  // groups and connections counter

  // Save groups
  i = 0;
  pSettings->beginWriteArray("Groups");
  while (*gr)
  {
    pItm = *gr;

    #ifndef QT_NO_DEBUG
      qDebug() << "Current item is: " << pItm->text(0) << endl;
      qDebug() << "Item type is: ";
      if (pItm->type() == ITM_TYPE_GROUP)
        qDebug() << "ITM_TYPE_GROUP" << endl;
      else if (pItm->type() == ITM_TYPE_CONNECTION)
        qDebug() << "ITM_TYPE_CONNECTION" << endl;
    #endif

    if (pItm->type() == ITM_TYPE_GROUP)
    {
      GroupPath.clear();

      while (pItm)
      {
        if (GroupPath.isEmpty())
          GroupPath.append(pItm->text(0));
        else
          GroupPath.prepend(pItm->text(0) + "/");
        pItm = pItm->parent();
      }

      pSettings->setArrayIndex(i);
      i++;
      pSettings->setValue("Group", GroupPath);
    }
    gr++;
  }
  pSettings->endArray();

  // Save connections
  i = 0;
  pSettings->beginWriteArray("Connections");
  while (*it)
  {
    pItm = *it;

    #ifndef QT_NO_DEBUG
      qDebug() << "Current item is: " << pItm->text(0) << endl;
      qDebug() << "Item type is: ";
      if (pItm->type() == ITM_TYPE_GROUP)
        qDebug() << "ITM_TYPE_GROUP" << endl;
      else if (pItm->type() == ITM_TYPE_CONNECTION)
        qDebug() << "ITM_TYPE_CONNECTION" << endl;
    #endif

    if (pItm->type() == ITM_TYPE_CONNECTION)
    {
      GroupPath.clear();
      ConnStr = pItm->text(0);
      pItm = pItm->parent();

      while (pItm && pItm->type() == ITM_TYPE_GROUP)
      {
        if (GroupPath.isEmpty())
          GroupPath.append(pItm->text(0));
        else
          GroupPath.prepend(pItm->text(0) + "/");
        pItm = pItm->parent();
      }

      pSettings->setArrayIndex(i);
      i++;
      pSettings->setValue("Group", GroupPath);

      ParseConnectionName(ConnStr, &ConnStrDb, &ConnStrUsr, &ConnStrRole);

      pSettings->setValue("Database", ConnStrDb);
      pSettings->setValue("Username", ConnStrUsr);
      pSettings->setValue("Connect As", ConnStrRole);

    }
    it++;
  }
  pSettings->endArray();

}

void ConnectTool::slotAddConnection()
{
  #ifndef QT_NO_DEBUG
  qDebug() << "Add connection pressed!" << endl;
  #endif

  QTreeWidgetItem* pParentItem = FindParentGroup(twLogonHist.currentItem());
  QTreeWidgetItem* pItem = new QTreeWidgetItem(pParentItem, ITM_TYPE_CONNECTION);
  pItem->setText(0, CreateConnectionName());
  //pItem->setIcon(0, QPixmap(":/icons/folder.png"));

  if (pParentItem == nullptr)
    twLogonHist.addTopLevelItem(pItem);
  else
  {
    pParentItem->setExpanded(true);
    twLogonHist.setCurrentItem(pItem);
  }

  lblSrvType.setVisible(true);
  cboxSrvType.setVisible(true);
  leDatabase.setEnabled(true);
//  leDatabase.setReadOnly(false);
  pSaveButton->setVisible(true);
}

void ConnectTool::slotAddConnectionGroup()
{
  #ifndef QT_NO_DEBUG
  qDebug() << "Add connection group pressed!" << endl;
  #endif

  QTreeWidgetItem* pParentItem = FindParentGroup(twLogonHist.currentItem());
  QTreeWidgetItem* pItem = new QTreeWidgetItem(pParentItem, ITM_TYPE_GROUP);
  pItem->setText(0, QCoreApplication::translate("ConnectTool", "New group", "Default new group name in tree widget"));
  pItem->setIcon(0, QPixmap(":/icons/folder.png"));
  pItem->setFlags(Qt::ItemIsEditable | Qt::ItemIsSelectable | Qt::ItemIsDragEnabled | Qt::ItemIsDropEnabled | Qt::ItemIsEnabled);

  if (pParentItem == nullptr)
    twLogonHist.addTopLevelItem(pItem);
  else
    pParentItem->setExpanded(true);

  pSaveButton->setVisible(true);
}

void ConnectTool::slotDel()
{
  #ifndef QT_NO_DEBUG
  qDebug() << "Delete connection pressed!" << endl;
  #endif

  QTreeWidgetItem* pItem = twLogonHist.currentItem();
  if (pItem)
  {
    delete pItem;
    pSaveButton->setVisible(true);
  }
}

QString ConnectTool::CreateConnectionName()
{
  if (leUsername.text().isEmpty() && leDatabase.text().isEmpty())
    return "";

  if (cboxRole.currentText() == "Normal")
    return leUsername.text() + "//" + leDatabase.text();

  return leUsername.text() + " AS " + cboxRole.currentText() + "//" + leDatabase.text();
}

void ConnectTool::ParseConnectionName(const QString& srcStr, QString* pDatabase, QString* pUsername, QString* pRole)
{
  if (srcStr.isEmpty())
  {
    *pDatabase = "";
    *pUsername = "";
    *pRole = "Normal";
    return;
  }

  *pDatabase = srcStr.mid(srcStr.indexOf("//") + 2);
  QString StrUsr = srcStr.mid(0, srcStr.indexOf("//"));

  bool bFound = false;
  for (int j=0; j < cboxRole.count(); j++)
  {
    if (cboxRole.itemText(j) == "Normal")
      continue;
    else
      if (StrUsr.contains(" AS " + cboxRole.itemText(j)))
      {
        *pUsername = StrUsr.left(StrUsr.indexOf(" AS " + cboxRole.itemText(j)));
        *pRole = cboxRole.itemText(j);
        bFound = true;
        break;
      }
  }

  if (!bFound)
  {
    *pUsername = StrUsr;
    *pRole = "Normal";
  }
}

QTreeWidgetItem* ConnectTool::FindParentGroup(QTreeWidgetItem* pItm)
{
  QTreeWidgetItem* pParentItm = pItm;
  while (pParentItm != nullptr && pParentItm->type() != ITM_TYPE_GROUP)
    pParentItm = pParentItm->parent();
  return pParentItm;
}

void ConnectTool::slotConnectionDataChanged()
{
  #ifndef QT_NO_DEBUG
  qDebug() << "Connection Data Changed" << endl;
  #endif

  QTreeWidgetItem* pItem = twLogonHist.currentItem();
  if (pItem && pItem->type() == ITM_TYPE_CONNECTION)
  {
    pItem->setText(0, CreateConnectionName());
    pSaveButton->setVisible(true);
  }
}

void ConnectTool::slotConnectionToggled(QTreeWidgetItem* pCurItm, QTreeWidgetItem* pPrevItm)
{
  #ifndef QT_NO_DEBUG
  qDebug() << "Connection Toggled" << endl;

  QString msg;
  msg.clear();
  if (pPrevItm == nullptr)
    msg.append("Prev = NULL");
  else
  {
    msg.append("Prev = " + pPrevItm->text(0));
    if (pPrevItm->type() == ITM_TYPE_GROUP)
      msg.append(" (group)");
    else if (pPrevItm->type() == ITM_TYPE_CONNECTION)
      msg.append(" (connection)");
    else
      msg.append(" (unknown)");
  }
  qDebug() << msg << endl;

  msg.clear();
  if (pCurItm == nullptr)
    msg.append("Cur  = NULL");
  else
  {
    msg.append("Cur  = " + pCurItm->text(0));
    if (pCurItm->type() == ITM_TYPE_GROUP)
      msg.append(" (group)");
    else if (pCurItm->type() == ITM_TYPE_CONNECTION)
      msg.append(" (connection)");
    else
      msg.append(" (unknown)");
  }

  qDebug() << msg << endl;
  #endif

  if (ConnectionToggledFirst)
  {
    ConnectionToggledFirst = false;
    return;
  }

  if (pCurItm && pCurItm->type() == ITM_TYPE_CONNECTION)
  {
    QString StrDb, StrUsr, StrRole;
    ParseConnectionName(pCurItm->text(0), &StrDb, &StrUsr, &StrRole);
    leDatabase.setText(StrDb);
    leUsername.setText(StrUsr);
    cboxRole.setCurrentText(StrRole);
  }
}
