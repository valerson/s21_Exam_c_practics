/*
Задание №4
На вход подается два инта - размер матрицы m x n
Задача повернуть матрицу на 90 градусов
2 3
1 1 1 2 2 2 3 3 3  output 1 2 3 1 2 3 1 2 3
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n = 0, m = 0;
    char c1 = '0', c2 = '0';
    int number = 0;
    if (scanf("%f%c%f%c", &n, &c1, &m, &c2) == 4 && (int)n == n && (int)m == m && c1 == ' ' && c2 == '\n')
    {
        int **matrix = calloc(n, sizeof(int *));
        for (int i = 0; i < n; i++)
            matrix[i] = calloc(m, sizeof(int));

        int **result = calloc(m, sizeof(int *));
        for (int i = 0; i < m; i++)
            result[i] = calloc(n, sizeof(int));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%d", &number);
                matrix[i][j] = number;
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                result[j][i] = matrix[i][j];
            }
        }

        // print

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                printf("%d", matrix[i][j]);
                if (j < m - 1)
                    printf(" ");
            }
            if (i < n - 1)
                printf("\n");
        }
        printf("\n");
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
    else
        printf("n/a");
    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int n = 0, m = 0, flag = 0;
//     ;
//     char c = '0';
//     if (scanf("%d%d%c", &n, &m, &c))
//     {
//         if (n < 0 && m < 0)
//             printf("n/a");
//         else
//         {
//             flag = 1;
//         }
//     }
//     else
//         printf("n/a");
//     if (flag)
//     {
//         int **matrix = malloc(sizeof(int *) * n);
//         for (int i = 0; i < n; i++)
//             matrix[i] = malloc(sizeof(int) * m);
//         int **result = malloc(sizeof(int *) * m);
//         for (int i = 0; i < m; i++)
//             result[i] = malloc(sizeof(int) * n);
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < m; j++)
//             {
//                 scanf("%d", &matrix[i][j]);
//             }
//         }
//         for (int i = 0; i < m; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 result[i][j] = matrix[j][i];
//             }
//         }
//         for (int i = 0; i < m; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 printf("%d", result[i][j]);
//                 if (j < n - 1)
//                     printf(" ");
//             }
//             if (i < m - 1)
//                 printf("\n");
//         }
//         for (int i = 0; i < n; i++)
//             free(matrix[i]);
//         free(matrix);
//         for (int i = 0; i < m; i++)
//             free(result[i]);
//         free(result);
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     float n = 0, m = 0;
//     int flag = 0, temp = 0;

//     if (scanf("%f%f", &n, &m) == 2 && n > 0 && m > 0 && (int)n == n && (int)m == m)
//     {
//         int **matrix = calloc(n, sizeof(int *));
//         for (int i = 0; i < n; i++)
//             matrix[i] = calloc(m, sizeof(int));

//         int **result = calloc(m, sizeof(int *));
//         for (int i = 0; i < m; i++)
//             result[i] = calloc(n, sizeof(int));

//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < m; j++)
//             {
//                 if (scanf("%d", &temp) == 1)
//                 {
//                     matrix[i][j] = temp;
//                 }
//                 else
//                     flag = 1;
//             }
//         }

//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < m; j++)
//             {
//                 result[j][i] = matrix[i][j];
//             }
//         }

//         if (!flag)
//         {
//             // print
//             for (int i = 0; i < m; i++)
//             {
//                 for (int j = 0; j < n; j++)
//                 {
//                     // printf("%d", matrix[i][j]);
//                     printf("%d", result[i][j]);
//                     if (j < n - 1)
//                         printf(" ");
//                 }
//                 if (i < m - 1)
//                     printf("\n");
//             }
//         }
//         else
//             printf("n/a");

//         for (int i = 0; i < n; i++)
//             free(matrix[i]);
//         free(matrix);

//         for (int i = 0; i < m; i++)
//             free(result[i]);
//         free(result);
//     }
//     else
//         printf("n/a");

//     return 0;
// }