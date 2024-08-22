/*
Задание №3
На вход подается последовательность из чисел которая заканчивается -1
Задача - поменять местами первый появляющийся в последовательности наибольший и наименьший элемент
из целых неотрицательных чисел
Проверить валидность данных
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = 0;
    int count = 0;
    int max = 0, min = INT32_MAX, imax = 0, imin = 0;

    int n = 1000;
    float *arr = malloc(sizeof(float) * n);

    while (1)
    {
        float temp = 0;
        scanf("%f", &temp);
        getchar();

        if (temp == -1)
            break;
        else
            arr[count] = temp;
        if (temp > max && temp > 0 && temp - (int)temp == 0)
        {
            max = temp;
            imax = count;
        }
        if (temp < min && temp > 0 && temp - (int)temp == 0)
        {
            min = temp;
            imin = count;
        }

        count++;
        if (count > n)
        {
            n += 1000;
            arr = realloc(arr, sizeof(float) * n);
        }
    }

    int bufer = 0;
    bufer = arr[imax];
    arr[imax] = arr[imin];
    arr[imin] = bufer;

    for (int i = 0; i < count; i++)
    {
        printf("%f", arr[i]);
        if (i < count - 1)
            printf(" ");
    }

    free(arr);
    return 0;
}