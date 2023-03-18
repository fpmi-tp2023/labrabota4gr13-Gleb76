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
char* insert_sql = "INSERT INTO patient (last_name, first_name, middle_name, gender, nationality, height, weight, birth_year, birth_month, birth_day, phone_number, postal_code, country, region, district, city, street, house, apartment, medical_card_number, diagnosis, blood_type, department) \
                    VALUES ('Иванов', 'Иван', 'Иванович', 'мужской', 'русская', 170, 70, 1990, 8, 12, '8-800-555-35-35', '123456', 'Россия', 'Московская область', 'Подольск', 'Подольск', 'Ленина', '15', '35', '1234567890', 'ОРВИ', '2+', 'терапевтическое');";
char *insert_sql2 = "INSERT INTO patient (last_name, first_name, middle_name, gender, nationality, height, weight, birth_year, birth_month, birth_day, phone_number, postal_code, country, region, district, city, street, house, apartment, medical_card_number, diagnosis, blood_type, department) \
                    VALUES ('Петров', 'Петр', 'Петрович', 'мужской', 'украинская', 175, 80, 1985, 5, 2, '8-800-555-35-36', '654321', 'Украина', 'Киевская область', 'Киев', 'Киев', 'Пушкинская', '17', '23', '0987654321', 'Грипп', '1-', 'терапевтическое');";
char *insert_sql3 = "INSERT INTO patient (last_name, first_name, middle_name, gender, nationality, height, weight, birth_year, birth_month, birth_day, phone_number, postal_code, country, region, district, city, street, house, apartment, medical_card_number, diagnosis, blood_type, department) \
                    VALUES ('Сидорова', 'Анна', 'Ивановна', 'женский', 'русская', 165, 55, 1995, 2, 18, '8-800-555-35-37', '567890', 'Россия', 'Московская область', 'Дмитров', 'Дмитров', 'Советская', '25', '5', '2345678901', 'Гастрит', '3+', 'терапевтическое');";
char *insert_sql4 = "INSERT INTO patient (last_name, first_name, middle_name, gender, nationality, height, weight, birth_year, birth_month, birth_day, phone_number, postal_code, country, region, district, city, street, house, apartment, medical_card_number, diagnosis, blood_type, department) \
                    VALUES ('Кузнецов', 'Игорь', 'Сергеевич', 'мужской', 'белорусская', 180, 90, 1980, 11, 26, '8-800-555-35-38', '098765', 'Беларусь', 'Минская область', 'Минск', 'Минск', 'Маяковского', '12', '9', '3456789012', 'Аритмия', '2-', 'кардиологическое');";
char *insert_sql5 = "INSERT INTO patient (last_name, first_name, middle_name, gender, nationality, height, weight, birth_year, birth_month, birth_day, phone_number, postal_code, country, region, district, city, street, house, apartment, medical_card_number, diagnosis, blood_type, department));";
rc = sqlite3_exec(db, insert_sql, callback, 0, &zErrMsg);

if (rc != SQLITE_OK ){
    fprintf(stderr, "SQL error: %s\n", zErrMsg);
} else{
    fprintf(stdout, "Data inserted successfully\n");

}  sqlite3_close(db);
    return 0;

}
