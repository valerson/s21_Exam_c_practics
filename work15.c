/*
Первое задание: Вводится последовательность целых положительных чисел, заканчивающаяся -1 (не входит в последовательность).
Переставить первое максимальное с первым минимальным местами.
Проверить на ввод и в случае ошибки вывести n/a.
Пример:
Ввод: 1 2 3 4 5 6 7 8 9 -1
Вывод: 9 2 3 4 5 6 7 8 1

*/

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     float number = 0;
//     char c = '0';
//     int *arr = calloc(2048, sizeof(int));
//     int max = 0, min = INT32_MAX, imin = 0, imax = 0;
//     int flag = 0, count = 0;
//     while (1)
//     {
//         if (scanf("%f%c", &number, &c) == 2 && (c == ' ' || c == '\n') && (int)number == number)
//         {
//             if (number > 0)
//             {
//                 arr[count] = (int)number;
//                 if (arr[count] > max)
//                 {
//                     max = arr[count];
//                     imax = count;
//                 }
//                 if (arr[count] < min)
//                 {
//                     min = arr[count];
//                     imin = count;
//                 }
//                 count++;
//             }
//             else
//             {
//                 if (number != -1)
//                     flag = 1;
//             }
//         }
//         else
//             flag = 1;
//         if (number == -1)
//             break;
//         if (flag)
//         {
//             printf("n/a");
//             break;
//         }
//     }
//     if (!flag)
//     {
//         int bufer = 0;
//         bufer = arr[imax];
//         arr[imax] = arr[imin];
//         arr[imin] = bufer;
//         for (int j = 0; j < count; j++)
//         {
//             printf("%d", arr[j]);
//             if (j != count - 1)
//                 printf(" ");
//         }
//     }
//     free(arr);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     float number = 0;
//     int i = 0, flag = 0;
//     int arr[10000] = {0};
//     while (1)
//     {
//         if (scanf("%f", &number) == 1 && (int)number == number)
//         {
//             if (number < 0 && number != -1)
//                 flag = 1;
//             else
//             {
//                 if (number != -1)
//                 {
//                     arr[i] = number;
//                     i++;
//                 }
//             }
//         }
//         else
//             flag = 1;
//         if (number == -1 || flag)
//             break;
//     }
//     if (flag)
//         printf("n/a");
//     else
//     {
//         int max = arr[0], min = arr[0], imax = 0, imin = 0, bufer = 0;
//         for (int j = 0; j < i; j++)
//         {
//             if (arr[j] > max)
//             {
//                 max = arr[j];
//                 imax = j;
//             }
//             if (arr[j] < min)
//             {
//                 min = arr[j];
//                 imin = j;
//             }
//         }
//         bufer = arr[imax];
//         arr[imax] = arr[imin];
//         arr[imin] = bufer;

//         for (int j = 0; j < i; j++)
//         {
//             printf("%d", arr[j]);
//             if (j < i - 1)
//                 printf(" ");
//         }
//     }

//     return 0;
// }