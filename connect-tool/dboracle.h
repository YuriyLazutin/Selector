#ifndef DBORACLE_H
#define DBORACLE_H

#include <QString>
#include <QDebug>
#include <occi.h>

using namespace oracle::occi;
using namespace std;

class DBOracle
{
  public:
    explicit DBOracle();
    ~DBOracle();

    void Connect2Srv(QString user, QString passwd, QString db);

 private:
    Environment  *env;
    Connection   *conn;
    Statement    *stmt;
    ResultSet    *rs;
};

#endif // DBORACLE_H
