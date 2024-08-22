/*
Задание №4 На вход подается два инта - размер матрицы m x n
Задача повернуть матрицу на 90 градусов
2 3 1 1 1 2  2 2  3 3 3    output  1 2 3 1 2 3 1 2 3
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0, m = 0, flag = 0;
    ;
    char c = '0';
    if (scanf("%d%d%c", &n, &m, &c))
    {
        if (n < 0 && m < 0)
            printf("n/a");
        else
        {
            flag = 1;
        }
    }
    else
        printf("n/a");
    if (flag)
    {
        int **matrix = malloc(sizeof(int *) * n);
        for (int i = 0; i < n; i++)
            matrix[i] = malloc(sizeof(int) * m);

        int **result = malloc(sizeof(int *) * m);
        for (int i = 0; i < m; i++)
            result[i] = malloc(sizeof(int) * n);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%d", &matrix[i][j]);
            }
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                result[i][j] = matrix[j][i];
            }
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d", result[i][j]);
                if (j < n - 1)
                    printf(" ");
            }
            if (i < m - 1)
                printf("\n");
        }

        for (int i = 0; i < n; i++)
            free(matrix[i]);
        free(matrix);

        for (int i = 0; i < m; i++)
            free(result[i]);
        free(result);
    }

    return 0;
}