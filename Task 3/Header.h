#pragma once
typedef struct {
    char title[100];
    char date[20];
    int hour;
    int minute;
    int duration;
    char genre[50];
    int budget;
} Film_t;

//запись структуры в файл
int writefile(char* fname, Film_t Film);
//вывод структуры в командной строке
int print_struct(Film_t film);
//Ввод данных в структуру
Film_t input_struct();
//проверка данных
int check_struct(Film_t Film_t);