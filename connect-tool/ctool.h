#ifndef CTOOL_H
#define CTOOL_H

#include <QDialog>

namespace Ui {
class ctool;
}

class ctool : public QDialog
{
    Q_OBJECT

  public:
    explicit ctool(QWidget *parent = nullptr);
    ~ctool();

  private:
    Ui::ctool *ui;
};

#endif // CTOOL_H
