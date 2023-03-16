#include<stdio.h>
#include<stdlib.h>
#include<sqlite3.h>

static int callback(void *NotUsed, int argc, char **argv, char **azColName){  int i;
  for (i = 0; i <argc; i++){
      printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
  }
  printf("\n");
  return 0;
}

int main(int argc, char* argv[]){
    sqlite3 * db;
    char *zErrMsg = 0;
    int rc;
    char *sql;

    rc = sqlite3_open("test.db", &db);
    
    if (rc) {
        fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
        return(0);
    }
    else {
        fprintf(stdout, "Opened database successfully\n");
    }
    sql = "CREATE TABLE patient ("
                "id INTEGER PRIMARY KEY,"
                "last_name TEXT,"
                "first_name TEXT,"
                "middle_name TEXT,"
                "gender TEXT,"
                "nationality TEXT,"
                "height REAL,"
                "weight REAL,"
                "birth_year INTEGER,"
                "birth_month INTEGER,"
                "birth_day INTEGER,"
                "phone_number TEXT,"
                "postal_code TEXT,"
                "country TEXT,"
                "region TEXT,"
                "district TEXT,"
                "city TEXT,"
                "street TEXT,"
                "house TEXT,"
                "apartment TEXT,"
                "medical_card_number TEXT,"
                "diagnosis TEXT,"
                "blood_type TEXT,"
                "department TEXT);";
   rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);

   if (rc != SQLITE_OK ){
       fprintf(stderr, "SQL error: %s\n", zErrMsg);
   } else{
       fprintf(stdout, "Table created successfully\n");
   }
}
