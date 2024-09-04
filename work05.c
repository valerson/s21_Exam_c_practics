/*
Задание №2
Дана последовательность целых чисел Число n, Символ конца -1
Вывести x1 xn x2 xn-1 x3 xn-2 и так далее
*/

#include <stdio.h>

int main()
{
    int num = 0, count = 0;
    int arr[10000] = {0};
    while (1)
    {
        scanf("%d", &num);
        getchar();
        if (num == -1)
            break;
        arr[count] = num;
        count++;
    }
    for (int i = 0; i < count / 2; i++)
    {
        printf("%d %d", arr[i], arr[count - 1 - i]);
        if (i < count / 2 - 1)
            printf(" ");
    }
    if (count % 2 != 0)
        printf(" %d", arr[count / 2]);

    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int n = 2;
//     int *arr = malloc(n * sizeof(int));
//     int num = 0, count = 0;
//     while (1)
//     {
//         scanf("%d", &num);
//         if (num == -1)
//         {
//             break;
//         }
//         if (count > n)
//         {
//             n += 5;
//             arr = realloc(arr, n * sizeof(int));
//             arr[count] = num;
//             count++;
//         }
//         else
//         {
//             arr[count] = num;
//             count++;
//         }
//     }
//     if (count % 2 == 0)
//     {
//         for (int i = 0; i < count / 2; i++)
//         {
//             printf("%d %d", arr[i], arr[count - 1 - i]);
//             if (i < count / 2 - 1)
//             {
//                 printf(" ");
//             }
//         }
//     }
//     else
//     {
//         for (int i = 0; i < count / 2; i++)
//         {
//             printf("%d %d", arr[i], arr[count - 1 - i]);
//             if (i < count / 2 - 1)
//             {
//                 printf(" ");
//             }
//         }
//         printf(" %d", arr[count / 2]);
//     }
//     free(arr);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int arr[10000] = {0};
//     float number = 0;
//     int i = 0, flag = 0;
//     while (1)
//     {
//         if (scanf("%f", &number) == 1 && (int)number == number)
//         {
//             if (number != -1)
//             {
//                 arr[i] = number;
//                 i++;
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
//         for (int j = 0; j < i / 2; j++)
//         {
//             printf("%d %d", arr[j], arr[i - 1 - j]);
//             if (j < i / 2 - 1)
//                 printf(" ");
//         }
//     if (i % 2 != 0)
//         printf(" %d", arr[i / 2]);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int arr[10000] = {0};
//     float number = 0;
//     int i = 0, flag = 0;
//     while (1)
//     {
//         if (scanf("%f", &number) == 1 && (int)number == number)
//         {
//             if (number != -1)
//             {
//                 arr[i] = (int)number;
//                 i++;
//             }
//         }
//         else
//             flag = 1;
//         if (number == -1 || flag)
//         {
//             break;
//         }
//     }

//     printf("i=%d\n", i);
//     if (flag)
//         printf("n/a");
//     else
//     {
//         for (int j = 0; j < i / 2; j++)
//         {
//             printf("%d %d", arr[j], arr[i - 1 - j]);
//             if (j < i - 1)
//                 printf(" ");
//         }
//         if (i % 2 != 0)
//             printf("%d", arr[i / 2]);
//     }

//     return 0;
// }