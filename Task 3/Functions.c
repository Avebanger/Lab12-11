#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include "Header.h"

int writefile(char* fname, Film_t Film) {
    FILE* out;

        if ((out = fopen(fname, "at")) == NULL)
        {
            if ((out = fopen(fname, "wt")) == NULL)
            {
                return 0;
            }
        }



        print_struct(Film);
        fprintf(out, " Имя:%20s ; Жанр:%20s ; Дата:%20s ; Время:%2d:%2d ; Бюджет:%d\n", Film.title, Film.genre, Film.date, Film.hour, Film.minute, Film.budget);
        fclose(out);
        return 1;
}

int print_struct(Film_t film) {
        if (check_struct(film) == 1) {
            printf("\n--- Подходящий фильм ---\n");
            printf("Название: %s\n", film.title);
            printf("Дата и время: %s, %02d:%02d\n", film.date, film.hour, film.minute);
            printf("Продолжительность: %d мин.\n", film.duration);
            printf("Жанр: %s\n", film.genre);
            printf("Бюджет: %d\n", film.budget);
        }
        else printf("фильм начинается до 18:00 или длится меньше 1 часа 40 минут.\n");
        return 0;
    }

Film_t input_struct() {
    Film_t m;
        printf("Название: ");
        scanf(" %99[^\n]", m.title);

        printf("Дата: ");
        scanf(" %19[^\n]", m.date);

        printf("Час начала: ");
        scanf("%d", &m.hour);

        printf("Минуты начала: ");
        scanf("%d", &m.minute);

        printf("Продолжительность (мин): ");
        scanf("%d", &m.duration);

        printf("Жанр: ");
        scanf(" %49[^\n]", m.genre);

        printf("Бюджет: ");
        scanf("%d", &m.budget);
    return m;
}

int check_struct(Film_t Films) {
    if ((Films.hour > 18 || (Films.hour == 18 && Films.minute > 0)) && Films.duration > 100) {
        return 1;
    }
    else
        return 0;
}