/*
Задание №2
Дана последовательность целых чисел Число n, Символ конца -1
Вывести x1 xn x2 xn-1 x3 xn-2 и так далее
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 2;
    int *arr = malloc(n * sizeof(int));
    int num = 0, count = 0;
    while (1)
    {
        scanf("%d", &num);
        if (num == -1)
        {
            break;
        }

        if (count > n)
        {
            n += 5;
            arr = realloc(arr, n * sizeof(int));
            arr[count] = num;
            count++;
        }
        else
        {
            arr[count] = num;
            count++;
        }
    }

    if (count % 2 == 0)
    {
        for (int i = 0; i < count / 2; i++)
        {
            printf("%d %d", arr[i], arr[count - 1 - i]);
            if (i < count / 2 - 1)
            {
                printf(" ");
            }
        }
    }
    else
    {
        for (int i = 0; i < count / 2; i++)
        {
            printf("%d %d", arr[i], arr[count - 1 - i]);
            if (i < count / 2 - 1)
            {
                printf(" ");
            }
        }
        printf(" %d", arr[count / 2]);
    }

    free(arr);
    return 0;
}