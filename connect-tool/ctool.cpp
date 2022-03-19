#include "ctool.h"
#include "ui_ctool.h"

ctool::ctool(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::ctool)
{
  ui->setupUi(this);
}

ctool::~ctool()
{
  delete ui;
}
