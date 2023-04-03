#ifndef PROJECT6_INTERFACE_H
#define PROJECT6_INTERFACE_H

enum Menu{
    SELECT = 0,
    INSERT = 1,
    DELETE = 2,
    WHERE 3,
    END_INSERT = 21
};
enum Columns{
    ID = 4,
    SURNAME = 5,
    NAME = 6,
    PATRONYMIC = 7,
    FLOOR = 8,
    NATIONALITY = 9,
    GROWTH = 10,
    weight = 11,
    birth_date = 12 ,
    PHONE_NUMBER = 13,
    POSTCODE = 14,
    COUNTRY = 15,
    AREA = 16,
    DISTRICT = 17,
    CITY = 18,
    HOUSE = 19,
    APARTMENT = 20,
    MEDICAL_CARD = 21,
    DIAGNOSIS = 22,
    BLOOD_GROUP = 23,
    DEPARTMENT = 24,
    PATIENTS_ID= 25,
    STR_NULL = 26,
    COMMA = 27
};

char *query_parts[] = {"SELECT * Patients", "Insert Into Patients(ID,SURNAME,NAME,PATRONYMIC,FLOOR,NATIONALITY,GROWTH,weight,birth_date,PHONE_NUMBER,POSTCODE,COUNTRY,AREA,DISTRICT,CITY,HOUSE,APARTMENT,MEDICAL_CARD,DIAGNOSIS,BLOOD_GROUP,DEPARTMENT,PATIENTS_ID"}


#endif PROJECT6_INTERFACE_H