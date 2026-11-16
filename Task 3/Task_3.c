#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include "Header.h"

int main() {
    setlocale(LC_ALL, "RUS");
    int n;
    printf("введите кол-во фильмов: ");
    scanf("%d", &n);
    char a[20] = "Film.txt";

    for (int i = 0; i < n; i++)
    {
       writefile(a, input_struct());
       printf("\n");
       continue;
    }
    return 0;
}
