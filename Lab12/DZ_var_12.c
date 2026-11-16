#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>


int task_4()
{
	setlocale(LC_ALL, "RUS");
	char file_name[20] = "tabulation.txt";
	FILE* out;
	if ((out = fopen(file_name, "wt")) == NULL)
	{
		printf("Ошибка при открытии файла");
		return 0;
	}
	double h, y, x = 1.0, interval = 4, pogreshnost = 1.0e-13;
	printf("Введите шаг: ");
	scanf("%lf", &h);   // (i%2==0) && (i%3==0) 
	//y = log10(x) - pow((x - 2), 2); - формула функции 11 варианта интервал [1 ; 4]
	fprintf(out,"		   x			y		\n");
	fprintf(out, "-------------------------------------------------\n");
	for (int i = 0; x <= interval + pogreshnost;x += h)
	{
		y = log10(x) - pow((x - 2), 2);
		fprintf("tabulation.txt", "%20.20lf %20.4lf\n", x, y);
		fclose(out);
	}
	return 0;
}

int main()
{
	setlocale(LC_ALL, "RUS");

	char file_name[20] = "temp.txt";
	FILE* out;
	printf("создание файла\n");
	if ((out = fopen(file_name, "w")) == NULL)
	{
		printf("Ошибка при открытии файла");
		return 0;
	}
	double h, y, x = 1.0, interval = 4, pogreshnost = 1.0e-13;
	printf("Введите шаг: ");
	scanf("%lf", &h);   // (i%2==0) && (i%3==0) 
	//y = log10(x) - pow((x - 2), 2); - формула функции 11 варианта интервал [1 ; 4]
	fprintf(out, "		   x			y		\n");
	fprintf(out, "-------------------------------------------------\n");
	printf("		   x			y		\n");
	printf("-------------------------------------------------\n");
	for (int i = 0; x <= interval + pogreshnost;x += h)
	{
		y = log10(x) - pow((x - 2), 2);
		fprintf(out, "%20.20lf %20.4lf\n", x, y);
		printf("%20.20lf %20.4lf\n", x, y);
	}
	fclose(out);
	return 0;
}