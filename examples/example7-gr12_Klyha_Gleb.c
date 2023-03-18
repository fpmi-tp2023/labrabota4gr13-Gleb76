#include<stdio.h>
#include<stdlib.h>
#include<sqlite3.h>

int main(void){
    sqlite3 * db;
    char *err_msg = 0;
    int  rc = sqlite3_open("test.db", &db);
    
    if (rc != SQLITE_OK) {
        fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
        sqlite3_close(db);
        return 1;
    }
   char *sql ="DROP TABLE IF EXISTS PIGS;"
               "BEGIN TRANSACTION;"
                "CREEATE TABLE PIGS(ID INTEGER PRIMARY KEY, Name TEXT);"
                "INSERT INTO PIGS(NAME) VALUES('TOM');"
                "INSERT INTO PIGS(NAME) VALUES('TIM');"
                "INSERT INTO PIGS(NAME) VALUES('TOMOT');"
                "INSERT INTO PIGS(NAME) VALUES('TOMIU');"
                "COMMIT';";
    rc = sqlite3_exec(db, sql, 0, 0, &err_msg);
    if (rc != SQLITE_OK ){
         fprintf(stderr, "Failed to execite statment: %s\n", err_msg);
        sqlite3_finalize(err_msg);
        sqlite3_close(db);
        return 1;
    }
    sqlite3_close(db);

    return 0;
}


