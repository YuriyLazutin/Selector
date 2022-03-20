#include "dboracle.h"
#include <iostream>

DBOracle::DBOracle()
{
  env = Environment::createEnvironment (Environment::DEFAULT);
  conn = nullptr;
}

DBOracle::~DBOracle()
{
  if (conn)
  {
    #ifndef QT_NO_DEBUG
    qDebug() << "Connection is not nullptr. Try to disconnect!" << endl;
    #endif
    env->terminateConnection(conn);
  }

  Environment::terminateEnvironment(env);
}

void DBOracle::Connect2Srv(QString user, QString passwd, QString db)
{
 // std::string u = user.toStdString().c_str();
 // std::string p = passwd.toStdString();
//  std::string d = db.toStdString();
  string usr = user.toStdString();
  string pswd = passwd.toStdString();
  string dbo = db.toStdString();

  cout << usr << " " << usr.size() << endl;
  cout << pswd << " " << pswd.size() << endl;
  cout << dbo << " " << dbo.size() << endl;

//  try
//  {
    //conn = env->createConnection(usr, pswd, dbo);
    conn = env->createConnection("usr", "pswd", "dbo");
//  }
//  catch (SQLException ex)
//  {
//    cout << "Exception catched!" << endl;
    //cout << ex.getMessage() << endl;
//  }
}
