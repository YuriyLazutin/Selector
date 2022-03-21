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
  try
  {
    conn = env->createConnection(user.toStdString(), passwd.toStdString(), db.toStdString());
  }
  catch (SQLException ex)
  {
    cout << ex.getMessage() << endl;
  }
}
