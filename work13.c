/*
Задание №5Змейка с прошлого экзамена.
На вход дается n, вывести матрицу n*n заполненную по спирали
(там есть вариант заполнения от 1 до n
и есть вариант заполнения от 0 до n*n)
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    float n = 0;
    int number = 1;
    if (scanf("%f", &n) == 1 && (int)n == n && n > 0)
    {
        int **matrix = calloc(n, sizeof(int *));
        for (int i = 0; i < n; i++)
            matrix[i] = calloc(n, sizeof(int));

        for (int k = 0; k < n / 2; k++)
        {
            // right
            for (int i = k; i < n - 1 - k; i++)
            {
                matrix[k][i] = number;
                number++;
            }
            // down
            for (int i = k; i < n - 1 - k; i++)
            {
                matrix[i][(int)n - 1 - k] = number;
                number++;
            }
            // left
            for (int i = n - 1 - k; i > k; i--)
            {
                matrix[(int)n - 1 - k][i] = number;
                number++;
            }
            // up
            for (int i = n - 1 - k; i > k; i--)
            {
                matrix[i][k] = number;
                number++;
            }
        }
        if ((int)n % 2 != 0)
            matrix[(int)n / 2][(int)n / 2] = number;

        // print
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d", matrix[i][j]);
                if (j < n - 1)
                    printf(" ");
            }
            if (i < n - 1)
                printf("\n");
        }

        for (int i = 0; i < n; i++)
            free(matrix[i]);
        free(matrix);
    }
    else
        printf("n/a");

    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int n = 0;
//     char c = '\n';
//     if (scanf("%d%c", &n, &c) == 2 && n > 0 && c == '\n')
//     {
//         int num = 1;
//         int center = n / 2;
//         if (n % 2 != 0)
//             center += 1;
//         int **matrix = malloc(sizeof(int *) * n);
//         for (int i = 0; i < n; i++)
//             matrix[i] = malloc(sizeof(int) * n);
//         for (int k = 0; k < center; k++)
//         { // вправо и вниз
//             for (int i = 0 + k; i < n - 1 - k; i++)
//             {
//                 if (i == 0 + k)
//                 {
//                     for (int j = 0 + k; j < n - 1 - k; j++)
//                     {
//                         matrix[i][j] = num;
//                         num += 1;
//                     }
//                 }
//                 matrix[i][n - 1 - k] = num;
//                 num += 1;
//             }
//             // влево и вверх
//             for (int i = n - 1 - k; i > 0 + k; i--)
//             {
//                 if (i == n - 1 - k)
//                 {
//                     for (int j = n - 1 - k; j > 0 + k; j--)
//                     {
//                         matrix[i][j] = num;
//                         num += 1;
//                     }
//                 }
//                 matrix[i][0 + k] = num;
//                 num += 1;
//             }
//         }
//         if (n % 2 != 0)
//             matrix[n / 2][n / 2] = num;
//         // print matrix
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 printf("%d", matrix[i][j]);
//                 if (j < n - 1)
//                     printf(" ");
//             }
//             if (i < n - 1)
//                 printf("\n");
//         }
//         for (int i = 0; i < n; i++)
//             free(matrix[i]);
//         free(matrix);
//     }
//     else
//         printf("n/a");
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     float n = 0;
//     if ((scanf("%f", &n) == 1) && n > 0 && (int)n == n)
//     {
//         int number = 1;
//         int k = 0;
//         int **matrix = calloc(n, sizeof(int *));
//         for (int i = 0; i < n; i++)
//             matrix[i] = calloc(n, sizeof(int));
//         while (k <= n / 2)
//         {
//             // right
//             for (int j = 0 + k; j < n - 1 - k; j++)
//             {
//                 matrix[k][j] = number;
//                 number++;
//             }
//             // down
//             for (int i = 0 + k; i < n - 1 - k; i++)
//             {
//                 matrix[i][(int)n - 1 - k] = number;
//                 number++;
//             }
//             // left
//             for (int j = n - 1 - k; j > 0 + k; j--)
//             {
//                 matrix[(int)n - 1 - k][j] = number;
//                 number++;
//             }
//             // up
//             for (int i = n - 1 - k; i > 0 + k; i--)
//             {
//                 matrix[i][k] = number;
//                 number++;
//             }
//             k++;
//         }
//         if ((int)n % 2 != 0)
//             matrix[(int)n / 2][(int)n / 2] = number;
//         // print
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 printf("%d", matrix[i][j]);
//                 if (j < n - 1)
//                     printf(" ");
//             }
//             if (i < n - 1)
//                 printf("\n");
//         }
//         for (int i = 0; i < n; i++)
//             free(matrix[i]);
//         free(matrix);
//     }
//     else
//         printf("n/a");
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     float n = 0;
//     if (scanf("%f", &n) == 1 && n > 0 && (int)n == n)
//     {
//         int number = 1;
//         int **matrix = calloc(n, sizeof(int *));
//         for (int i = 0; i < n; i++)
//             matrix[i] = calloc(n, sizeof(int));

//         for (int k = 0; k < n / 2; k++)
//         {
//             // right
//             for (int i = k; i < n - 1 - k; i++)
//             {
//                 matrix[k][i] = number;
//                 number++;
//             }
//             // down
//             for (int i = k; i < n - 1 - k; i++)
//             {
//                 matrix[i][(int)n - 1 - k] = number;
//                 number++;
//             }
//             // left
//             for (int i = n - 1 - k; i > k; i--)
//             {
//                 matrix[(int)n - 1 - k][i] = number;
//                 number++;
//             }
//             // up
//             for (int i = (int)n - 1 - k; i > k; i--)
//             {
//                 matrix[i][k] = number;
//                 number++;
//             }
//         }
//         if ((int)n % 2 != 0)
//             matrix[(int)n / 2][(int)n / 2] = number;

//         // print
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 printf("%d", matrix[i][j]);
//                 if (j < n - 1)
//                     printf(" ");
//             }
//             if (i < n - 1)
//                 printf("\n");
//         }

//         for (int i = 0; i < n; i++)
//             free(matrix[i]);
//         free(matrix);
//     }
//     else
//         printf("n/a");
//     return 0;
// }
