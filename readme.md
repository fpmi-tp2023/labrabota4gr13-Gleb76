# Overview
It is public template of assignment `"labrabota 4"` for FPMI students

# Usage
Вариант 31 
### Упражнение 2.3
«Пациент»: id; фамилия; имя; отчество; пол; национальность; рост; вес; дата рождения (год, месяц число); номер телефона; домашний адрес (почтовый индекс, страна, область, район, город, улица, дом, квартира); номер медицинской карты; диагноз; группа крови; отделение.
Добавить записи не менее чем о 10 пациентов разных отделений.
### Упражнение 2.4
Выполнить запросы:
• Вывести данные про пациентов с 14 отделения.
• Используя инструкцию alter, добавить дополнительные столбцы, один из
которых hospital_id (тип integer и содержит идентификаторы больниц).
• Создать таблицу hospital (id, hos_name, hos_description).
• Вывести данные о пациентах в форме идентификатор пациента, фамилия,
имя, дата рождения; диагноз, номер отделения, название больницы.
• подсчет количества пациентов с помощью count, если отделение =3
• средний вес пациентов с помощью average, если рост >164 см.
• максимальный и минимальный вес пациента с помощью max и min.
• Используя инструкцию inner join вывести полные сведения о пациентах и
больнице для больниц с id = 1 и 2.
## Задание 6
Используя DB Browser for SQLite или Valentina Studio, создайте и заполните БД согласно варианту для задания 2. База данных должна состоять из нескольких таблиц, одна из таблиц должна содержать поле фотография, в которое при выполнении приложений добавлять фотографию объекта согласно варианту.
Используя консольные редакторы nano/vi или Xcode (Обзор возможностей Xcode), напишите консольное приложение на языке C, которое устанавливает соединение с БД SQLite и выполняет запросы типа SELECT, INSERT, DELETE, параметризованные запросы, фотографию объекта выводит в файл. Структура проекта приложения должна соответствовать модели КИС и содержать Makefile для сборки с помощью утилиты make.
Иллюстрирует вставку данных в режиме autocommit (исполнение инструкций sqlite построчно) и транзакцией.
Требования к приложению:
• Структура проекта приложения размещается в каталоге project6, должна соответствовать модели КИС и содержать Makefile для сборки с помощью утилиты make.
• наличие меню для выбора операций с приложением;
• возможность ввода параметра для выборки;
◦ по id,
◦ по шаблону для разных полей, например фрагменту названия продукта или
фрагменту фамилии,
◦ полю, общему для нескольких строк, например в зависимости от варианта это может быть название категории товара, или специальности, или города и т.д.
• запросы должны быть описаны в коде приложения (без выполнения в консоли);
• содержит функционал для демонстрации вставки данных в режиме autocommit (исполнение инструкций sqlite построчно) и транзакцией.

# Building
Application is build using Makefile.

# Additional Notes

(https://docs.google.com/document/d/1F2E4YZB31RvbKu34K3qsBPFCuM5ZJiErF4SYcO6ABrc/edit)

