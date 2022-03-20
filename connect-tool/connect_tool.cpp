#include "connect_tool.h"

ConnectTool::ConnectTool(QWidget *parent) : QDialog(parent)
{

    setObjectName(QString::fromUtf8("ConnectTool"));
    setMinimumSize(QSize(400, 400));
    //resize(640, 480);

    //QSizePolicy szPolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    //szPolicy.setHorizontalStretch(0);
    //szPolicy.setVerticalStretch(0);
    //szPolicy.setHeightForWidth(sizePolicy().hasHeightForWidth());
    //setSizePolicy(szPolicy);
    //setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.5, fx:0.5, fy:0.5, stop:0 rgba(190, 200, 210, 255), stop:1 rgba(160, 200, 190, 223));"));

    Layout.setObjectName(QString::fromUtf8("connecttool_mainlayout"));
    setLayout(&Layout);
    Layout.addWidget(&Splitter);
    Layout.addWidget(&btnBox);

    Splitter.setObjectName(QString::fromUtf8("connecttool_splitter"));
    Splitter.setOrientation(Qt::Horizontal);
    Splitter.setHandleWidth(5);
    Splitter.addWidget(&LeftWidget);
    Splitter.addWidget(&GroupBox);
    Splitter.setStretchFactor(1, 1.618);

    // Create a tree widget with logon history

    // Add connection button
    act_add_cnnctn.setObjectName(QString::fromUtf8("connecttool_act_add_cnnctn"));
    act_add_cnnctn.setIcon(QPixmap(":/icons/insert_record.png"));

    // Delete connection button
    act_del_cnnctn.setObjectName(QString::fromUtf8("connecttool_act_del_cnnctn"));
    act_del_cnnctn.setIcon(QPixmap(":/icons/delete_record.png"));

    // Add folder button
    act_add_grp.setObjectName(QString::fromUtf8("connecttool_act_add_grp"));
    act_add_grp.setIcon(QPixmap(":/icons/open_file.png"));

    ToolBar.setObjectName(QString::fromUtf8("connecttool_toolbar"));
    ToolBar.setIconSize(QSize(24, 24));
    ToolBar.addAction(&act_add_cnnctn);
    ToolBar.addAction(&act_del_cnnctn);
    ToolBar.addAction(&act_add_grp);

    // Tree widget
    twLogonHist.setObjectName(QString::fromUtf8("connecttool_twlogonhist"));
    twLogonHist.setHeaderHidden(true);

    //Layout setup
    VLayout_LeftWidget.setObjectName(QString::fromUtf8("connecttool_leftwidgetlayout"));
    VLayout_LeftWidget.setContentsMargins(5, 5, 0, 5);
    VLayout_LeftWidget.setSpacing(5);
    VLayout_LeftWidget.addWidget(&ToolBar);
    //VLayout_LeftWidget.setAlignment(&ToolBar, Qt::AlignHCenter);
    VLayout_LeftWidget.addWidget(&twLogonHist);
    LeftWidget.setLayout(&VLayout_LeftWidget);

    // Create a group box with connect parameters
    GroupBox.setObjectName(QString::fromUtf8("connecttool_groupbox"));
    lblSrvType.setObjectName(QString::fromUtf8("connecttool_lblsrvtype"));
    lblSrvType.setVisible(false);
    cboxSrvType.setObjectName(QString::fromUtf8("connecttool_cboxsrvtype"));
    lblSrvType.setBuddy(&cboxSrvType);
    //cboxSrvType.setSizePolicy(QSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed));
    cboxSrvType.addItem(QString::fromUtf8("Oracle"));
    cboxSrvType.addItem(QString::fromUtf8("Postgre"));
    cboxSrvType.addItem(QString::fromUtf8("MySQL"));
    cboxSrvType.setVisible(false);
    lblDatabase.setObjectName(QString::fromUtf8("connecttool_lbldatabase"));
    cboxDatabase.setObjectName(QString::fromUtf8("connecttool_cboxdatabase"));
    lblDatabase.setBuddy(&cboxDatabase);
    cboxDatabase.setEditable(true);
    lblUsername.setObjectName(QString::fromUtf8("connecttool_lblusername"));
    leUsername.setObjectName(QString::fromUtf8("connecttool_leusername"));
    lblUsername.setBuddy(&leUsername);
    leUsername.setMaxLength(32);
    leUsername.setClearButtonEnabled(true);
    lblPassword.setObjectName(QString::fromUtf8("connecttool_lblpassword"));
    lePassword.setObjectName(QString::fromUtf8("connecttool_lepassword"));
    lblPassword.setBuddy(&lePassword);
    lePassword.setEchoMode(QLineEdit::Password);
    lePassword.setClearButtonEnabled(true);
    lblConnAs.setObjectName(QString::fromUtf8("connecttool_lblconnas"));
    cboxConnAs.setObjectName(QString::fromUtf8("connecttool_cboxconnas"));
    lblConnAs.setBuddy(&cboxConnAs);
    cboxConnAs.addItem(QString::fromUtf8("Normal"));
    cboxConnAs.addItem(QString::fromUtf8("SYSDBA"));
    cboxConnAs.addItem(QString::fromUtf8("SYSOPER"));
    pSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    VLayout_GroupBox.setSpacing(5);
    VLayout_GroupBox.setObjectName(QString::fromUtf8("connecttool_vlayout_groupbox"));
    VLayout_GroupBox.setContentsMargins(10, 10, 10, 10);

    VLayout_GroupBox.addWidget(&lblSrvType);
    VLayout_GroupBox.addWidget(&cboxSrvType);
    VLayout_GroupBox.addWidget(&lblDatabase);
    VLayout_GroupBox.addWidget(&cboxDatabase);
    VLayout_GroupBox.addWidget(&lblUsername);
    VLayout_GroupBox.addWidget(&leUsername);
    VLayout_GroupBox.addWidget(&lblPassword);
    VLayout_GroupBox.addWidget(&lePassword);
    VLayout_GroupBox.addWidget(&lblConnAs);
    VLayout_GroupBox.addWidget(&cboxConnAs);
    VLayout_GroupBox.addItem(pSpacer);

    GroupBox.setLayout(&VLayout_GroupBox);

    btnBox.setObjectName(QString::fromUtf8("connecttool_btnbox"));
    btnBox.setOrientation(Qt::Horizontal);
    pSaveButton = btnBox.addButton("Save", QDialogButtonBox::ActionRole);
    btnBox.setStandardButtons(QDialogButtonBox::Cancel);
    pConnectButton = btnBox.addButton("Connect", QDialogButtonBox::AcceptRole);
    pConnectButton->setDefault(true);
    pSaveButton->setVisible(false);

    translateGUI(true);
    mapSS();

    // Initialize database (remove it in inherited code. We will set up databale on upper level and use a pointer)
    pDB = new DBOracle();
}

ConnectTool::~ConnectTool()
{
  delete pDB;
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

  act_del_cnnctn.setText(QCoreApplication::translate("ConnectTool", "Delete connection", "Action title"));
  #ifndef QT_NO_TOOLTIP
  act_del_cnnctn.setToolTip(QCoreApplication::translate("ConnectTool", "Delete connection from list", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  #ifndef QT_NO_STATUSTIP
  act_del_cnnctn.setStatusTip(QCoreApplication::translate("ConnectTool", "Delete connection from list", "Status Tip item"));
  #endif // QT_NO_STATUSTIP
  #ifndef QT_NO_WHATSTHIS
  act_del_cnnctn.setWhatsThis(QCoreApplication::translate("ConnectTool", "Delete connection from list", "Whats This item"));
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

  ToolBar.setWindowTitle(QCoreApplication::translate("ConnectTool", "Connection history toolbar", "ToolBar title"));

  twLogonHist.setHeaderLabel(QCoreApplication::translate("ConnectTool", "Connection history", "Tree header label"));
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
  cboxDatabase.setToolTip(QCoreApplication::translate("ConnectTool", "Allow you to select database, SID and so on", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  #ifndef QT_NO_STATUSTIP
  cboxDatabase.setStatusTip(QCoreApplication::translate("ConnectTool", "Allow you to select database, SID and so on", "Status Tip item"));
  #endif // QT_NO_STATUSTIP
  #ifndef QT_NO_WHATSTHIS
  cboxDatabase.setWhatsThis(QCoreApplication::translate("ConnectTool", "Allow you to select database, SID and so on", "Whats This item"));
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

  lblConnAs.setText(QCoreApplication::translate("ConnectTool", "Connect as:", "Connection mode. This value is used in some servers to connect as administrator or other roles."));
  #ifndef QT_NO_TOOLTIP
  cboxConnAs.setToolTip(QCoreApplication::translate("ConnectTool", "Set the connection mode", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  #ifndef QT_NO_STATUSTIP
  cboxConnAs.setStatusTip(QCoreApplication::translate("ConnectTool", "Set the connection mode", "Status Tip item"));
  #endif // QT_NO_STATUSTIP
  #ifndef QT_NO_WHATSTHIS
  cboxConnAs.setWhatsThis(QCoreApplication::translate("ConnectTool", "Set the connection mode", "Whats This item"));
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
  QObject::connect(&act_del_cnnctn, SIGNAL(triggered()), SLOT(slotDelConnection()));
  QObject::connect(&act_add_grp, SIGNAL(triggered()), SLOT(slotAddConnectionGroup()));

  QMetaObject::connectSlotsByName(this);
}

void ConnectTool::slotConnect()
{
  #ifndef QT_NO_DEBUG
  qDebug() << "Connect pressed!" << endl;
  #endif

  pDB->Connect2Srv(leUsername.text(), lePassword.text(), cboxDatabase.currentText());
  accept();
}

void ConnectTool::slotSaveConnection()
{
  #ifndef QT_NO_DEBUG
  qDebug() << "Save pressed!" << endl;
  #endif
  pSaveButton->setVisible(false);
}

void ConnectTool::slotAddConnection()
{
  #ifndef QT_NO_DEBUG
  qDebug() << "Add connection pressed!" << endl;
  #endif
  lblSrvType.setVisible(true);
  cboxSrvType.setVisible(true);
  pSaveButton->setVisible(true);
}

void ConnectTool::slotDelConnection()
{
  #ifndef QT_NO_DEBUG
  qDebug() << "Delete connection pressed!" << endl;
  #endif
}

void ConnectTool::slotAddConnectionGroup()
{
  #ifndef QT_NO_DEBUG
  qDebug() << "Add connection group pressed!" << endl;
  #endif
}
