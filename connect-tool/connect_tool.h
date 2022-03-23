#ifndef CONNECTTOOL_H
#define CONNECTTOOL_H

#include <QDialog>
#include <QVBoxLayout>
#include <QSplitter>
#include <QTreeWidget>
#include <QToolBar>
#include <QAction>
#include <QGroupBox>
#include <QLabel>
#include <QComboBox>
#include <QLineEdit>
#include <QSpacerItem>
#include <QDialogButtonBox>
#include <QPushButton>
//#include <QtCore/QVariant>
#include <QApplication>
#include <QSettings>
//#include <QtWidgets/QDialog>
//#include <QtWidgets/QHeaderView>
#include <QDebug>
#include "dboracle.h"

#define  ITM_TYPE_GROUP 0
#define  ITM_TYPE_CONNECTION 1

class ConnectTool : public QDialog
{
  Q_OBJECT

  private:
    QVBoxLayout      Layout;
    QSplitter          Splitter;
    QWidget              LeftWidget;
    QVBoxLayout          VLayout_LeftWidget;
    QToolBar             ToolBar;
    QAction              act_add_cnnctn;
    QAction              act_add_grp;
    QAction              act_del;
    QTreeWidget          twLogonHist;

    QGroupBox            GroupBox;
    QVBoxLayout            VLayout_GroupBox;
    QLabel                   lblSrvType;
    QComboBox                cboxSrvType;
    QLabel                   lblDatabase;
    QLineEdit                leDatabase;
    QLabel                   lblUsername;
    QLineEdit                leUsername;
    QLabel                   lblPassword;
    QLineEdit                lePassword;
    QLabel                   lblConnAs;
    QComboBox                cboxConnAs;
    QSpacerItem*             pSpacer;
    QDialogButtonBox   btnBox;
    QPushButton*       pSaveButton;
    QPushButton*       pConnectButton;

    DBOracle*        pDB;
    QSettings*       pSettings; // ~/.config/Country Tech/Selector.conf

  public:
    explicit ConnectTool(QWidget *parent = nullptr);
    ~ConnectTool();
    void translateGUI(bool init = false);
    void mapSS();

  public slots:
    void slotConnect();
    void slotSaveConnection();
    void slotAddConnection();
    void slotAddConnectionGroup();
    void slotDel();

};

#endif // CONNECTTOOL_H
