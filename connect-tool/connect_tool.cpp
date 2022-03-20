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
    Splitter.addWidget(&twLogonHist);
    Splitter.addWidget(&GroupBox);
    Splitter.setStretchFactor(1, 1.618);

    // Create a tree widget with logon history
    twLogonHist.setObjectName(QString::fromUtf8("connecttool_twlogonhist"));
    twLogonHist.setHeaderHidden(true);

    // Create a group box with connect parameters
    GroupBox.setObjectName(QString::fromUtf8("connecttool_groupbox"));
    lblSrvType.setObjectName(QString::fromUtf8("connecttool_lblsrvtype"));
    //lblSrvType.setVisible(false);
    cboxSrvType.setObjectName(QString::fromUtf8("connecttool_cboxsrvtype"));
    lblSrvType.setBuddy(&cboxSrvType);
    //cboxSrvType.setSizePolicy(QSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed));
    cboxSrvType.addItem(QString::fromUtf8("Oracle"));
    cboxSrvType.addItem(QString::fromUtf8("Postgre"));
    cboxSrvType.addItem(QString::fromUtf8("MySQL"));
    //cboxSrvType.setVisible(false);
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
    btnBox.setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Ok);

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
  //toolBarMain.setWindowTitle(QCoreApplication::translate("Selector", "Main operations", "Tool bar name"));
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

  if (!init)
  {
  } // End of if (!init)
}

void ConnectTool::mapSS()
{
  QObject::connect(&btnBox, SIGNAL(rejected()), SLOT(reject()));
  QObject::connect(&btnBox, SIGNAL(accepted()), SLOT(slotConnect()));

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
