#ifndef DBORACLE_H
#define DBORACLE_H

/* This macro is needed to prevent ORA-24960: the attribute  OCI_ATTR_USERNAME is greater than the maximum allowable length of 255
 * raised in Oracle instant client v11.2 function env->createConnection("user", "password", "database");
 * This macro must be included before including any library headers (it means occi.h).
 * Read more: https://gcc.gnu.org/onlinedocs/libstdc++/manual/using_dual_abi.html
 * Alternatively we can setup CXXFLAG in *.pro file to recompile all application with old ABI
 * QMAKE_CXXFLAGS += -D_GLIBCXX_USE_CXX11_ABI=0
 */
#define _GLIBCXX_USE_CXX11_ABI 0

#include <QString>
#include <QDebug>
#include <occi.h>

class DBOracle
{
  public:
    explicit DBOracle();
    ~DBOracle();

    void Connect2Srv(QString user, QString passwd, QString db);
    void SelectExample();

  private:
    oracle::occi::Environment  *env;
    oracle::occi::Connection   *conn;
    oracle::occi::Statement    *stmt;
    oracle::occi::ResultSet    *rs;
};

#endif // DBORACLE_H
