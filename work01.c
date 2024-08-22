/*
Задание №2
Найти массу шара. Радиус шара вводиться в консоль ( радиус имеет тип double).
Плотность шара = 21500 кг/м^3
Даны формулы:
V = (4/3) * pi * R^3
P = m / V
Вывести массу округлив ее до целого числа математически верно.
Примечание:
Использовать константу M_PI, и функцию double round(double) из библиотеки math.h
Вывод должен выглядеть так:
printf("%.0lf", result) ;
*/

#include <stdio.h>
#include <math.h>

int main()
{
    double r = 0;
    double m = 21500;
    char c = '\n';
    scanf("%lf", &r);
    c = getchar();
    if (c != '\n')
    {
        printf("n/a");
    }
    else
    {
        double V = (4 / 3) * M_PI * r * r * r;
        double P = m / V;
        double result = round(P);
        printf("%.0lf", result);
    }
    return 0;
}