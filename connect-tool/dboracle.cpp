#include "dboracle.h"
#include <iostream>

DBOracle::DBOracle()
{
  env = oracle::occi::Environment::createEnvironment(oracle::occi::Environment::DEFAULT);
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

  oracle::occi::Environment::terminateEnvironment(env);
}

void DBOracle::Connect2Srv(QString user, QString passwd, QString db)
{
  try
  {
    conn = env->createConnection(user.toStdString(), passwd.toStdString(), db.toStdString());
  }
  catch (oracle::occi::SQLException ex)
  {
    std::cout << ex.getMessage() << std::endl;
  }
}

void DBOracle::SelectExample()
{
  std::string sqlStmt = "SELECT t.tablespace_name, t.table_name, t.num_rows \
  FROM sys.all_tables t \
  WHERE t.owner = user \
  ORDER BY 1, 2";

  stmt = conn->createStatement(sqlStmt);
  oracle::occi::ResultSet *rset = stmt->executeQuery();

  try
  {
    std::cout << "Tablespace Name        Table Name     Num Rows" << std::endl;
    while (rset->next())
    {
      std::cout << rset->getString(1) << "     ";
      std::cout << rset->getString(2) << "     ";
      std::cout << rset->getInt(3) << std::endl;
    }
  }
  catch(oracle::occi::SQLException ex)
  {
    std::cout << "Exception thrown for SelectExample" << std::endl;
    std::cout << "Error number: " <<  ex.getErrorCode() << std::endl;
    std::cout << ex.getMessage() << std::endl;
  }

  stmt->closeResultSet(rset);
  conn->terminateStatement (stmt);
}
