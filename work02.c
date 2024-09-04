/*
Задание №2
Написать программу, осуществляющую перестановку крайних цифр в целом трехзначном числе.
Целое трёхзначное число задаётся на стандартном потоке stdin, результат перестановки выводить в виде
трёхзначного числа с учётом ведущих нулей на стандартный поток вывода stdout.

В конце ответа не должно быть переноса.
вход: 159 результат: 951
вход: 120 результат: 021
вход: -123 результат: -321
*/

#include <stdio.h>

int main()
{
    char arr[4] = {0};
    char c = '0';
    int i = 0, flag = 0;
    ;
    while (1)
    {
        c = getchar();
        if (c == '\n')
            break;
        arr[i] = c;
        i++;
    }
    if (i < 3 || (i == 4 && arr[0] != '-') || (arr[i - 1] < '0' || arr[i - 1] > '9') || (arr[i - 2] < '0' || arr[i - 2] > '9') || (arr[i - 3] < '0' || arr[i - 3] > '9'))
        flag = 1;

    if (flag)
        printf("n/a");
    else
    {
        if (arr[0] == '-')
            printf("-");
        printf("%c%c%c", arr[i - 1], arr[i - 2], arr[i - 3]);
    }
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     char array[4] = "";
//     char temp = '\n';
//     for (int i = 0; i < 4; i++)
//     {
//         temp = getchar();
//         array[i] = temp;
//     }
//     if (array[0] == '-')
//     {
//         printf("-%c%c%c", array[3], array[2], array[1]);
//     }
//     else
//     {
//         printf("%c%c%c", array[2], array[1], array[0]);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     char c = '0';
//     int flag = 0, i = 0;
//     char arr[5] = {0};
//     while (1)
//     {
//         c = getchar();
//         if ((c < '0' || c > '9') && c != '\n' && c != '-')
//             flag = 1;
//         else
//         {
//             arr[i] = c;
//             i++;
//         }
//         if (c == '\n' || flag)
//             break;
//     }
//     if (flag)
//         printf("n/a");
//     else
//     {
//         if (arr[0] == '-')
//             printf("-%c%c%c", arr[3], arr[2], arr[1]);
//         else
//             printf("%c%c%c", arr[2], arr[1], arr[0]);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     char arr[4] = {0};
//     char c = '0';
//     int i = 0, flag = 0;
//     while (1)
//     {
//         c = getchar();
//         if (c == '\n')
//             break;
//         arr[i] = c;
//         i++;
//     }
//     printf("i=%d\n", i);
//     if (i < 3 || i > 4 || (i == 4 && arr[0] != '-') || (arr[i - 3] < '0' || arr[i - 3] > '9') || (arr[i - 1] < '0' || arr[i - 1] > '9') || (arr[i - 2] < '0' || arr[i - 2] > '9'))
//         flag = 1;
//     if (!flag)
//     {
//         int start = 0;
//         if (i % 2 == 0)
//         {
//             printf("-");
//             start = 1;
//         }
//         printf("%c%c%c", arr[i - 1], arr[i - 1 - 1], arr[i - 1 - 2]);
//     }
//     else
//         printf("n/a");
//     return 0;
// }
