#include "settings_tool.h"

SettingsTool::SettingsTool(QWidget* pParent) : QDialog(pParent)
{
  #ifndef QT_NO_DEBUG
  setObjectName(QString::fromUtf8("SettingsTool"));
  #endif

  pSettings = new QSettings(this);
  pSettings->beginGroup("Settings");

  setMinimumSize(QSize(400, 400));
  //resize(640, 480);

  //QSizePolicy szPolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
  //szPolicy.setHorizontalStretch(0);
  //szPolicy.setVerticalStretch(0);
  //szPolicy.setHeightForWidth(sizePolicy().hasHeightForWidth());
  //setSizePolicy(szPolicy);
  //setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.5, fx:0.5, fy:0.5, stop:0 rgba(190, 200, 210, 255), stop:1 rgba(160, 200, 190, 223));"));

  #ifndef QT_NO_DEBUG
  mainLayout.setObjectName(QString::fromUtf8("settingstool_mainlayout"));
  #endif
  setLayout(&mainLayout);
  mainLayout.addWidget(&Splitter);
  mainLayout.addWidget(&btnBox);

  #ifndef QT_NO_DEBUG
  Splitter.setObjectName(QString::fromUtf8("settingstool_splitter"));
  #endif
  Splitter.setOrientation(Qt::Horizontal);
  Splitter.setHandleWidth(5);
  Splitter.addWidget(&twSettingPages);
  Splitter.setStretchFactor(0, 1);
  Splitter.addWidget(&rightWidget);
  Splitter.setStretchFactor(1, 2);

  // Tree widget
  #ifndef QT_NO_DEBUG
  twSettingPages.setObjectName(QString::fromUtf8("settingstool_settingpages"));
  #endif
  twSettingPages.setHeaderHidden(true);
  twiDatabase = new QTreeWidgetItem(twSettingPages.invisibleRootItem(), ITM_TYPE_GROUP);
  twiDatabase->setIcon(0, QPixmap(":/icons/folder.png"));
  twiDatabase->setFlags(Qt::ItemIsEnabled);
  twiDatabase->setExpanded(true);
  twiEnvironment = new QTreeWidgetItem(twSettingPages.invisibleRootItem(), ITM_TYPE_GROUP);
  twiEnvironment->setIcon(0, QPixmap(":/icons/folder.png"));
  twiEnvironment->setFlags(Qt::ItemIsEnabled);
  twiEnvironment->setExpanded(true);
  twiWindowTypes = new QTreeWidgetItem(twSettingPages.invisibleRootItem(), ITM_TYPE_GROUP);
  twiWindowTypes->setIcon(0, QPixmap(":/icons/folder.png"));
  twiWindowTypes->setFlags(Qt::ItemIsEnabled);
  twiWindowTypes->setExpanded(true);
  twiTools = new QTreeWidgetItem(twSettingPages.invisibleRootItem(), ITM_TYPE_GROUP);
  twiTools->setIcon(0, QPixmap(":/icons/folder.png"));
  twiTools->setFlags(Qt::ItemIsEnabled);
  twiTools->setExpanded(true);
  twiFiles = new QTreeWidgetItem(twSettingPages.invisibleRootItem(), ITM_TYPE_GROUP);
  twiFiles->setIcon(0, QPixmap(":/icons/folder.png"));
  twiFiles->setFlags(Qt::ItemIsEnabled);
  twiFiles->setExpanded(true);
  twiOther = new QTreeWidgetItem(twSettingPages.invisibleRootItem(), ITM_TYPE_GROUP);
  twiOther->setIcon(0, QPixmap(":/icons/folder.png"));
  twiOther->setFlags(Qt::ItemIsEnabled);
  twiOther->setExpanded(true);


  // rightWidget
  //Right Widget Layout setup
  rightWidget.setLayout(&vlRightWidget);
  #ifndef QT_NO_DEBUG
  vlRightWidget.setObjectName(QString::fromUtf8("settingstool_rightwidgetlayout"));
  #endif
  vlRightWidget.setContentsMargins(5, 5, 0, 5);
  vlRightWidget.setSpacing(5);

  vlRightWidget.addLayout(&hlProfile);
  //vlRightWidget.setAlignment(&hlProfile, Qt::AlignHCenter);
  pageWidget = new QWidget(&rightWidget); // Temporary create an empty widget
  vlRightWidget.addWidget(pageWidget);

  //Profile Layout setup
  #ifndef QT_NO_DEBUG
  hlProfile.setObjectName(QString::fromUtf8("settingstool_profilelayout"));
  #endif
  hlProfile.setContentsMargins(5, 5, 0, 5);
  hlProfile.setSpacing(5);
  hlProfile.addWidget(&lblProfile);
  hlProfile.addWidget(&cboxProfile);
  hlProfile.addWidget(&btnProfileSettings);
  pSpacer = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum); // Do not delete it in destructor
  hlProfile.addItem(pSpacer);

  #ifndef QT_NO_DEBUG
  lblProfile.setObjectName(QString::fromUtf8("settingstool_lblprofile"));
  cboxProfile.setObjectName(QString::fromUtf8("settingstool_cboxprofile"));
  btnProfileSettings.setObjectName(QString::fromUtf8("settingstool_btnprofilesettings"));
  #endif
  lblProfile.setBuddy(&cboxProfile);
  //cboxProfile.setSizePolicy(QSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed));
  cboxProfile.addItem(QString::fromUtf8("Default"));
  cboxProfile.addItem(QString::fromUtf8("Custom"));
  cboxProfile.setCurrentText(pSettings->value("Profile", "Default").toString());


  #ifndef QT_NO_DEBUG
  btnBox.setObjectName(QString::fromUtf8("settingstool_btnbox"));
  #endif
  btnBox.setOrientation(Qt::Horizontal);
  btnBox.setStandardButtons(QDialogButtonBox::Ok | QDialogButtonBox::Cancel);
  pOkButton = btnBox.button(QDialogButtonBox::Ok);
  pCancelButton = btnBox.button(QDialogButtonBox::Cancel);
  pOkButton->setDefault(true);

  PageToggledFirst = true;

  translateGUI(true);
  mapSS();
}

SettingsTool::~SettingsTool()
{
  pSettings->endGroup();
  delete pSettings;
}

void SettingsTool::translateGUI(bool init)
{
  // Main window
  setWindowTitle(QCoreApplication::translate("SettingsTool", "Preferences and settings", "SettingsTool main window title"));

  // Tree widget
  twSettingPages.setHeaderLabel(QCoreApplication::translate("SettingsTool", "Setting groups", "Tree header label"));
  #ifndef QT_NO_TOOLTIP
  twSettingPages.setToolTip(QCoreApplication::translate("SettingsTool", "List with setting groups", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  #ifndef QT_NO_STATUSTIP
  twSettingPages.setStatusTip(QCoreApplication::translate("SettingsTool", "List with setting groups", "Status Tip item"));
  #endif // QT_NO_STATUSTIP
  #ifndef QT_NO_WHATSTHIS
  twSettingPages.setWhatsThis(QCoreApplication::translate("SettingsTool", "List with setting groups", "Whats This item"));
  #endif // QT_NO_WHATSTHIS

  twiDatabase->setText(0, QCoreApplication::translate("SettingsTool", "Database", "Settings group name"));
  twiEnvironment->setText(0, QCoreApplication::translate("SettingsTool", "Environment", "Settings group name"));
  twiWindowTypes->setText(0, QCoreApplication::translate("SettingsTool", "Window Types", "Settings group name"));
  twiTools->setText(0, QCoreApplication::translate("SettingsTool", "Tools", "Settings group name"));
  twiFiles->setText(0, QCoreApplication::translate("SettingsTool", "Files", "Settings group name"));
  twiOther->setText(0, QCoreApplication::translate("SettingsTool", "Other", "Settings group name"));


  // Profile
  lblProfile.setText(QCoreApplication::translate("SettingsTool", "Profile:", "Label text for combobox"));
  #ifndef QT_NO_TOOLTIP
  cboxProfile.setToolTip(QCoreApplication::translate("SettingsTool", "Allow you to select profile settings", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  #ifndef QT_NO_STATUSTIP
  cboxProfile.setStatusTip(QCoreApplication::translate("SettingsTool", "Allow you to select profile settings", "Status Tip item"));
  #endif // QT_NO_STATUSTIP
  #ifndef QT_NO_WHATSTHIS
  cboxProfile.setWhatsThis(QCoreApplication::translate("SettingsTool", "Allow you to select profile settings", "Whats This item"));
  #endif // QT_NO_WHATSTHIS
  btnProfileSettings.setText(QCoreApplication::translate("SettingsTool", "Profile managment", "Change profile settings"));
  #ifndef QT_NO_TOOLTIP
  btnProfileSettings.setToolTip(QCoreApplication::translate("SettingsTool", "Allow you to add, remove or change profiles", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  #ifndef QT_NO_STATUSTIP
  btnProfileSettings.setStatusTip(QCoreApplication::translate("SettingsTool", "Allow you to add, remove or change profiles", "Status Tip item"));
  #endif // QT_NO_STATUSTIP
  #ifndef QT_NO_WHATSTHIS
  btnProfileSettings.setWhatsThis(QCoreApplication::translate("SettingsTool", "Allow you to add, remove or change profiles", "Whats This item"));
  #endif // QT_NO_WHATSTHIS


  pOkButton->setText(QCoreApplication::translate("SettingsTool", "Ok", "Label on Ok button (save and apply settings)"));
  #ifndef QT_NO_TOOLTIP
  pOkButton->setToolTip(QCoreApplication::translate("SettingsTool", "Save settings and close settings tool", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  #ifndef QT_NO_STATUSTIP
  pOkButton->setStatusTip(QCoreApplication::translate("SettingsTool", "Save settings and close settings tool", "Status Tip item"));
  #endif // QT_NO_STATUSTIP
  #ifndef QT_NO_WHATSTHIS
  pOkButton->setWhatsThis(QCoreApplication::translate("SettingsTool", "Save settings and close settings tool", "Whats This item"));
  #endif // QT_NO_WHATSTHIS

  pCancelButton->setText(QCoreApplication::translate("SettingsTool", "Cancel", "Label on Cancel button (reject settings modification)"));
  #ifndef QT_NO_TOOLTIP
  pCancelButton->setToolTip(QCoreApplication::translate("SettingsTool", "Close settings tool without modifications", "Tool Tip item"));
  #endif // QT_NO_TOOLTIP
  #ifndef QT_NO_STATUSTIP
  pCancelButton->setStatusTip(QCoreApplication::translate("SettingsTool", "Close settings tool without modifications", "Status Tip item"));
  #endif // QT_NO_STATUSTIP
  #ifndef QT_NO_WHATSTHIS
  pCancelButton->setWhatsThis(QCoreApplication::translate("SettingsTool", "Close settings tool without modifications", "Whats This item"));
  #endif // QT_NO_WHATSTHIS


  if (!init)
  {
  } // End of if (!init)
}

void SettingsTool::mapSS()
{
  QObject::connect(&btnBox, SIGNAL(rejected()), SLOT(reject()));
  QObject::connect(&btnBox, SIGNAL(accepted()), SLOT(slotOk()));
  QObject::connect(&twSettingPages, SIGNAL(currentItemChanged(QTreeWidgetItem*, QTreeWidgetItem*)), SLOT(slotPageToggled(QTreeWidgetItem*, QTreeWidgetItem*)));
  QObject::connect(&cboxProfile, SIGNAL(currentTextChanged(const QString&)), SLOT(slotProfileChanged(const QString&)));
  QObject::connect(&btnProfileSettings, SIGNAL(clicked()), SLOT(slotProfileSettingsClicked()));
  QMetaObject::connectSlotsByName(this);
}

void SettingsTool::slotOk()
{
  #ifndef QT_NO_DEBUG
  qDebug() << "Ok pressed!" << endl;
  qDebug() << "Organization Name: " + pSettings->organizationName() << endl;
  qDebug() << "Application Name: " + pSettings->applicationName() << endl;
  qDebug() << "Settings Group: " + pSettings->group() << endl;
  #endif

  // Save settings
  pSettings->setValue("Profile", cboxProfile.currentText());

  // Save profiles
  pSettings->beginWriteArray("Profiles");
  for (int i = 0; i < cboxProfile.count(); i++)
  {
    #ifndef QT_NO_DEBUG
      qDebug() << "Current item is: " << cboxProfile.itemText(i) << endl;
    #endif

    pSettings->setArrayIndex(i);
    pSettings->setValue("Profile name", cboxProfile.itemText(i));
  }
  pSettings->endArray();

  // Save current profile
  pSettings->beginGroup(cboxProfile.currentText());
  QTreeWidgetItemIterator it(&twSettingPages);

  while (*it)
  {
    #ifndef QT_NO_DEBUG
      qDebug() << "Current item is: " << (*it)->text(0) << endl;
      qDebug() << "Item type is: ";
      if ((*it)->type() == ITM_TYPE_GROUP)
        qDebug() << "ITM_TYPE_GROUP" << endl;
      else if ((*it)->type() == ITM_TYPE_PAGE)
        qDebug() << "ITM_TYPE_PAGE" << endl;
    #endif

    if ((*it)->type() == ITM_TYPE_PAGE)
    {
      // Detect group and save parameters here...
    }
    it++;
  }

  pSettings->endGroup();

  accept();
}

void SettingsTool::slotPageToggled(QTreeWidgetItem* pCurItm, QTreeWidgetItem* pPrevItm)
{
  #ifndef QT_NO_DEBUG
  qDebug() << "Page Toggled" << endl;

  QString msg;
  msg.clear();
  if (pPrevItm == nullptr)
    msg.append("Prev = NULL");
  else
  {
    msg.append("Prev = " + pPrevItm->text(0));
    if (pPrevItm->type() == ITM_TYPE_GROUP)
      msg.append(" (group)");
    else if (pPrevItm->type() == ITM_TYPE_PAGE)
      msg.append(" (page)");
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
    else if (pCurItm->type() == ITM_TYPE_PAGE)
      msg.append(" (page)");
    else
      msg.append(" (unknown)");
  }

  qDebug() << msg << endl;
  #endif

  if (PageToggledFirst)
  {
    PageToggledFirst = false;
    return;
  }

  if (pCurItm && pCurItm->type() == ITM_TYPE_PAGE)
  {
    // Load new page
  }
}


void SettingsTool::slotProfileChanged(const QString& newProfile)
{
  QTreeWidgetItem* pItem = twSettingPages.currentItem();

  if (!pItem)
    pItem = twSettingPages.invisibleRootItem();

  #ifndef QT_NO_DEBUG
    qDebug() << "Profile changed to: " << newProfile << endl;
    qDebug() << "Current item is: " << pItem->text(0) << endl;
    qDebug() << "Item type is: ";
    if (pItem->type() == ITM_TYPE_GROUP)
      qDebug() << "ITM_TYPE_GROUP" << endl;
    else if (pItem->type() == ITM_TYPE_PAGE)
      qDebug() << "ITM_TYPE_PAGE" << endl;
  #endif

  if (pItem && pItem->type() == ITM_TYPE_PAGE)
  {
    // Upload new values for current page
  }
}

void SettingsTool::slotProfileSettingsClicked()
{
  #ifndef QT_NO_DEBUG
    qDebug() << "Profile settings clicked" << endl;
  #endif
}
