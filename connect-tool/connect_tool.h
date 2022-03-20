#ifndef CONNECTTOOL_H
#define CONNECTTOOL_H

#include <QDialog>
#include <QVBoxLayout>
#include <QSplitter>
#include <QTreeWidget>
#include <QGroupBox>
#include <QLabel>
#include <QComboBox>
#include <QLineEdit>
#include <QSpacerItem>
#include <QDialogButtonBox>
//#include <QtCore/QVariant>
#include <QApplication>
//#include <QtWidgets/QDialog>
//#include <QtWidgets/QHeaderView>
#include <QDebug>
#include "dboracle.h"

class ConnectTool : public QDialog
{
  Q_OBJECT

  private:
    QVBoxLayout      Layout;
    QSplitter          Splitter;
    QTreeWidget          twLogonHist;

    QGroupBox            GroupBox;
    QVBoxLayout            VLayout_GroupBox;
    QLabel                   lblSrvType;
    QComboBox                cboxSrvType;
    QLabel                   lblDatabase;
    QComboBox                cboxDatabase;
    QLabel                   lblUsername;
    QLineEdit                leUsername;
    QLabel                   lblPassword;
    QLineEdit                lePassword;
    QLabel                   lblConnAs;
    QComboBox                cboxConnAs;
    QSpacerItem*             pSpacer;
    QDialogButtonBox   btnBox;

    DBOracle*        pDB;

  public:
    explicit ConnectTool(QWidget *parent = nullptr);
    ~ConnectTool();
    void translateGUI(bool init = false);
    void mapSS();

  public slots:
    void slotConnect();
};
#endif // CONNECTTOOL_H
