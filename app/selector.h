#ifndef SELECTOR_H
#define SELECTOR_H

#include <QtWidgets>
#include "actions.h"
#include "browser.h"

class Selector : public QMainWindow
{
  Q_OBJECT

  private:
    // Actions
    file_actions          act_file;
    edit_actions          act_edit;
    session_actions       act_sesn;
    debug_actions         act_debg;
    tools_actions         act_tols;
    report_actions        act_rpt;
    window_actions        act_wnd;
    help_actions          act_hlp;
    transaction_actions   act_trns;

    // Menus
    QMenu menu_file;
    QMenu menu_file_new;
    QMenu menu_file_new_prog_wnd;
    QMenu menu_file_open;
    QMenu menu_file_reopen;
    QMenu menu_edit;
    QMenu menu_edit_scpy;
    QMenu menu_edit_selection;
    QMenu menu_edit_todo;
    QMenu menu_edit_bookmark_goto;
    QMenu menu_session;
    QMenu menu_debug;
    QMenu menu_tools;
    QMenu menu_tools_macro;
    QMenu menu_macro;
    QMenu menu_docs;
    QMenu menu_reps;
    QMenu menu_reps_dba;
    QMenu menu_reps_objects;
    QMenu menu_reps_plsql;
    QMenu menu_reps_user;
    QMenu menu_window;
    QMenu menu_help;
    void CreateMenu();

    // Central widget
    QMdiArea MDIArea;

    // ToolBars
    QToolBar toolBarMain;
    QToolBar toolBarDML;
    void CreateToolBars();

    // Docks
    QDockWidget   dbBrowser;
    Browser       BrowserTree;
    QDockWidget   windowList;
    QDockWidget   findPanel;
    QLabel        findPanelLabel;
    QLineEdit     findTemplate;
    void CreateDocks();

    // Status bar
    void CreateStatusBar();

    // Other variables
    unsigned int dirty_files_cnt;

  public:
    explicit Selector(QWidget *parent = nullptr);
             ~Selector();
    void translateGUI(bool init = false);

  private slots:
    void slotNoImpl() { QMessageBox::information(0, "Message", "Feature Not implemented!"); }
    void slotFileWasChanged();
    void slotFileWasUnChanged();
    void slotFileEmpty();
    void slotFileNotEmpty();
    void slotNewSql();
    void slotOpenSql();
    void slotFileSave();
    void slotFileSaveAs();
    void slotFileSaveAll();
    void slotNewPkg();
    void slotNewPkgBdy();
    void slotNewPkgSpc();
    void slotOpenPkg();
    void slotSetActiveSubWindow(QMdiSubWindow*);
    void slotExecute();

};

#endif // SELECTOR_H
