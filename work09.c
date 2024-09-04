/*
Задание №3
На вход подается последовательность из чисел которая заканчивается -1
Задача - поменять местами первый появляющийся в последовательности наибольший и наименьший элемент
из целых неотрицательных чисел
Проверить валидность данных
*/

#include <stdio.h>

int main()
{
    int arr[10000] = {0};
    int i = 0, flag = 0, imax = 0, imin = 0;
    char c = '0';
    float number = 0;
    if (scanf("%f%c", &number, &c) != 2 || (int)number != number || (number < 0 && number != -1))
        flag = 1;
    else if (number != -1)
    {
        // do
        int max = (int)number;
        int min = (int)number;
        arr[i] = (int)number;
        i++;

        while (1)
        {
            if (scanf("%f%c", &number, &c) != 2 && (int)number != number && (number < 0 && number != -1))
                flag = 1;

            if (number == -1 || flag)
                break;

            // do

            if (number > max)
            {
                max = number;
                imax = i;
            }
            if (number < min)
            {
                min = number;
                imin = i;
            }
            arr[i] = (int)number;
            i++;
        }
        if (flag)
            printf("n/a");
        else
        {
            // do
            int bufer = arr[imax];
            arr[imax] = arr[imin];
            arr[imin] = bufer;

            for (int j = 0; j < i; j++)
            {
                printf("%d", arr[j]);
                if (j < i - 1)
                    printf(" ");
            }
        }
    }

    if (flag)
        printf("n/a");

    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int number = 0;
//     int count = 0;
//     int max = 0, min = INT32_MAX, imax = 0, imin = 0;
//     int n = 1000;
//     float *arr = malloc(sizeof(float) * n);
//     while (1)
//     {
//         float temp = 0;
//         scanf("%f", &temp);
//         getchar();
//         if (temp == -1)
//             break;
//         else
//             arr[count] = temp;
//         if (temp > max && temp > 0 && temp - (int)temp == 0)
//         {
//             max = temp;
//             imax = count;
//         }
//         if (temp < min && temp > 0 && temp - (int)temp == 0)
//         {
//             min = temp;
//             imin = count;
//         }
//         count++;
//         if (count > n)
//         {
//             n += 1000;
//             arr = realloc(arr, sizeof(float) * n);
//         }
//     }
//     int bufer = 0;
//     bufer = arr[imax];
//     arr[imax] = arr[imin];
//     arr[imin] = bufer;
//     for (int i = 0; i < count; i++)
//     {
//         printf("%f", arr[i]);
//         if (i < count - 1)
//             printf(" ");
//     }
//     free(arr);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int arr[100] = {0};
//     int number = 0;
//     int flag = 0;
//     int max = 0, min = __INT32_MAX__, imax = 0, imin = 0, i = 0;
//     while (1)
//     {
//         if (scanf("%d", &number) == 1)
//         {
//             getchar();
//             if (number < 0 && number != -1)
//                 flag = 1;
//             else
//             {
//                 arr[i] = number;
//                 if (number > max && number > 0)
//                 {
//                     max = number;
//                     imax = i;
//                 }
//                 if (number < min && number > 0)
//                 {
//                     min = number;
//                     imin = i;
//                 }
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
//     {
//         int bufer = arr[imin];
//         arr[imin] = arr[imax];
//         arr[imax] = bufer;
//         for (int j = 0; j < i - 1; j++)
//         {
//             printf("%d", arr[j]);
//             if (j < i - 1 - 1)
//                 printf(" ");
//         }
//     }
//     return 0;
// }