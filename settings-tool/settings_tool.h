#ifndef SETTINGS_TOOL_H
#define SETTINGS_TOOL_H

#include <QDialog>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QSplitter>
#include <QTreeWidget>
#include <QLabel>
#include <QComboBox>
#include <QSpacerItem>
#include <QDialogButtonBox>
#include <QPushButton>
#include <QApplication>
#include <QSettings>
#include <QDebug>

#define  ITM_TYPE_GROUP 1000 // The minimum value for custom types. Values below UserType are reserved by Qt.
#define  ITM_TYPE_PAGE  1001

class SettingsTool : public QDialog
{
  Q_OBJECT

  private:
    QVBoxLayout      mainLayout;
    QSplitter          Splitter;
    QTreeWidget          twSettingPages;
    QTreeWidgetItem*       twiDatabase;
    QTreeWidgetItem*       twiEnvironment;
    QTreeWidgetItem*       twiWindowTypes;
    QTreeWidgetItem*       twiTools;
    QTreeWidgetItem*       twiFiles;
    QTreeWidgetItem*       twiOther;
    QWidget              rightWidget;
    QVBoxLayout            vlRightWidget;
    QHBoxLayout              hlProfile;
    QLabel                     lblProfile;
    QComboBox                  cboxProfile;
    QPushButton                btnProfileSettings;
    QSpacerItem*               pSpacer;
    QWidget*                 pageWidget;
    QDialogButtonBox   btnBox;
    QPushButton*         pOkButton;
    QPushButton*         pCancelButton;
    QSettings*       pSettings; // ~/.config/Country Tech/Selector.conf
    bool             PageToggledFirst;
    
  public:
    explicit SettingsTool(QWidget* pParent = nullptr);
    ~SettingsTool();
    void translateGUI(bool init = false);
    void mapSS();

  public slots:
    void slotOk();
    void slotPageToggled(QTreeWidgetItem* pCurItm, QTreeWidgetItem* pPrevItm);
    void slotProfileChanged(const QString &);
    void slotProfileSettingsClicked();
};

#endif // SETTINGS_TOOL_H
