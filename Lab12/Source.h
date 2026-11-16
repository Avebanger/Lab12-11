typedef struct {
    char title[100];
    char date[20];
    int hour;
    int minute;
    int duration;
    char genre[50];
    float budget;
} Film_t;

//запись структуры в файл
int writefile(char* fname, Film_t* Film_t, int size);
//вывод структуры в командной строке
int print_struct();
//Ввод данных в структуру
int input_struct();
//проверка данных
int check_struct(Film_t Film_t);