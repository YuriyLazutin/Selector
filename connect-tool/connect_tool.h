#ifndef CONNECTTOOL_H
#define CONNECTTOOL_H

#include <QDialog>

class ConnectTool : public QDialog
{
  Q_OBJECT

  private:

  public:
    ConnectTool(QWidget *parent = nullptr);
    ~ConnectTool();
    void translateGUI(bool init = false);
};
#endif // CONNECTTOOL_H
