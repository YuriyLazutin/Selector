#ifndef SETTINGS_TOOL_H
#define SETTINGS_TOOL_H

#include <QDialog>

class settings_tool : public QDialog
{
    Q_OBJECT

  public:
    settings_tool(QWidget *parent = nullptr);
    ~settings_tool();
};
#endif // SETTINGS_TOOL_H
