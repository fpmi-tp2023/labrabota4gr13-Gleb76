#include<stdio.h>
#include<stdlib.h>
#include<sqlite3.h>

static int callback(void *data, int argc, char **argv, char **azColName){  
    int i;
    fprintf(stderr," %s: ", (const char*)data);
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
    const char *data = "Callback function called";

    rc = sqlite3_open("test.db", &db);
    
    if (rc) {
        fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
        return(0);
    }
    else {
        fprintf(stdout, "Opened database successfully\n");
    }
sql ="Delete from patient WHERE id = 1;" \
      "Select * from patient";
rc = sqlite3_exec(db, sql, callback, (void*)data, &zErrMsg);
if (rc != SQLITE_OK ){
    fprintf(stderr, "SQL error: %s\n", zErrMsg);
    sqlite3_free(zErrMsg);
} else{
    fprintf(stdout, "Data inserted successfully\n");
}
    sqlite3_close(db);
    return 0;

}

