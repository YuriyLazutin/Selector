#ifndef BROWSER_H
#define BROWSER_H

#include <QWidget>
#include <QToolBar>
#include <QComboBox>
#include <QTreeWidget>
#include <QVBoxLayout>
#include <QApplication>

class Browser : public QWidget
{
  Q_OBJECT

  private:
    QToolBar      ToolBar;
      QAction*      refresh;
      QAction*      expand_all;
      QAction*      collapse_all;
      QAction*      find_dbo;
      QAction*      filters;
      QAction*      folders;
    QComboBox     Filter;
    QTreeWidget   Tree;

  public:
    explicit Browser(QWidget *parent = nullptr);
             ~Browser();
    void translateGUI(bool init = false);
};

#endif // BROWSER_H
