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
    float number = 0;
    char c = '0';
    int flag = 0, count = 0, result = 1;
    while (1)
    {
        if (scanf("%f", &number) == 1 && (int)number == number)
        {
            if ((int)number % 2 != 0)
            {
                result *= number;
            }
            count++;
        }
        else
            flag = 1;
        if ((c = getchar()) == '\n' || flag)
            break;
    }
    if (flag)
        printf("n/a");
    else
    {
        if (count == 2)
            printf("0");
        else
            printf("%d", result < 0 ? -result : result);
    }
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int number = 0;
//     int count = 0;
//     int result = 1;
//     char c = '\n';
//     while (1)
//     {
//         scanf("%d%c", &number, &c);
//         if (number % 2 != 0)
//         {
//             count++;
//             result *= number;
//         }
//         if (c == '\n')
//         {
//             break;
//         }
//     }
//     if (count == 1)
//     {
//         if (number < 0)
//         {
//             number *= -1;
//         }
//         printf("%d", number);
//     }
//     else if (count == 0)
//     {
//         printf("0");
//     }
//     else
//     {
//         printf("%d", result);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int arr[10000] = {0};
//     float number = 0;
//     int flag = 0, i = 0;
//     int result = 1;
//     char c = '0';

//     while (1)
//     {
//         if (scanf("%f%c", &number, &c) == 2 && (int)number == number && (c == ' ' || c == '\n'))
//         {
//             if (number != -1)
//             {
//                 arr[i] = (int)number;
//                 if ((int)number % 2 != 0)
//                     result *= (int)number;
//                 i++;
//             }
//         }
//         else
//             flag = 1;
//         if (c == '\n' || flag)
//             break;
//     }
//     if (flag)
//         printf("n/a");
//     else
//     {
//         if (i == 2)
//             printf("0");
//         else if (i == 1)
//         {
//             if (arr[0] < 0)
//                 arr[0] *= -1;
//             printf("%d", arr[0]);
//         }
//         else
//         {
//             printf("%d", result);
//         }
//     }

//     return 0;
// }
