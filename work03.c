/*
Задание №2
ввод не ограничен количеством целых чисел
на вывод: произведение нечетных чисел, если всего 2 числа  -
выводить ноль, если одно число - вывести его (но положительным)
ввод 	  | вывод
--------------------
1 2 3 4   | 3
--------------------
2 4         | 0
--------------------
-3    	   | 3
*/

#include <stdio.h>

int main()
{
    int number = 0;
    int count = 0;
    int result = 1;
    char c = '\n';

    while (1)
    {
        scanf("%d%c", &number, &c);
        if (number % 2 != 0)
        {
            count++;
            result *= number;
        }
        if (c == '\n')
        {
            break;
        }
    }

    if (count == 1)
    {
        if (number < 0)
        {
            number *= -1;
        }
        printf("%d", number);
    }
    else if (count == 0)
    {
        printf("0");
    }
    else
    {
        printf("%d", result);
    }
    return 0;
}