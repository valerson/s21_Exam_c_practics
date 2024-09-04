/*
ЗАДАНИЯ 3 ЛВЛа
Задание №3
Найти и удалить последнее вхождение подстроки
То есть даются 2 строки:
This is mytext
my
Вывод должен был быть
This is text
*/

#include <stdio.h>
#include <string.h>

char *strstr_last(char *str_1, char *str_2)
{
    char *result = str_1;
    char *temp = strstr(str_1, str_2);
    int n = strlen(str_2);
    while (1)
    {
        temp = strstr(str_1, str_2);
        if (temp == NULL)
            break;

        result = temp;
        str_1 += n;
    }

    return result;
}

int main()
{
    char str_1[2048] = {0};
    char str_2[2048] = {0};
    char c = '0';
    int i = 0;
    while (1)
    {
        c = getchar();
        if (c == '\n')
            break;
        str_1[i] = c;
        i++;
    }
    i = 0;
    while (1)
    {
        c = getchar();
        if (c == '\n')
            break;
        str_2[i] = c;
        i++;
    }
    // printf("%s", strstr_last(str_1, str_2));

    char *p_str_1 = str_1;
    for (int i = 0; i < strlen(str_1); i++)
    {
        if (p_str_1 == strstr_last(str_1, str_2))
            p_str_1 += strlen(str_2);
        else
        {
            printf("%c", *p_str_1);
            p_str_1 += 1;
        }
    }

    return 0;
}

// #include <stdio.h>
// #include <string.h>
// char *strstr_last(char *str1, char *str2)
// {
//     char *result = str1;
//     char *temp = strstr(str1, str2);
//     while (temp != NULL)
//     {
//         result = str1;
//         str1 += strlen(str2);
//         temp = strstr(str1, str2);
//     }
//     return result;
// }
// int main()
// {
//     char str1[2048] = "", str2[2048] = "", new_str1[2048] = "", new_str2[2048] = "";
//     char c = '0';
//     int i_str1 = 0, i_str2 = 0;
//     for (int i = 0; c != '\n'; i++)
//     {
//         c = getchar();
//         if (c != '\n')
//         {
//             str1[i] = c;
//             i_str1++;
//         }
//     }
//     c = '0';
//     for (int i = 0; c != '\n'; i++)
//     {
//         c = getchar();
//         if (c != '\n')
//         {
//             str2[i] = c;
//             i_str2++;
//         }
//     }
//     // printf("str1=%s, str2=%s", str1, str2);
//     // printf("\n first %s", strstr(str1, str2));
//     // printf("\n last %s", strstr_last(str1, str2));
//     char *p_str1 = str1;
//     char *last_str2 = strstr_last(str1, str2);
//     for (int i = 0; i < strlen(str1); i++)
//     {
//         if (p_str1 == last_str2)
//         {
//             p_str1 += strlen(str2);
//             printf("%c", *p_str1);
//         }
//         else
//             printf("%c", *p_str1);
//         p_str1++;
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str1[100] = "";
//     char str2[100] = "";
//     char new_str1[100] = "";
//     char new_str2[100] = "";
//     char c = '\n';
//     int i = 0;
//     while ((c = getchar()) != '\n')
//     {
//         str1[i] = c;
//         i++;
//     }
//     i = 0;
//     while ((c = getchar()) != '\n')
//     {
//         str2[i] = c;
//         i++;
//     }
//     int n1 = strlen(str1);
//     int n2 = strlen(str2);
//     for (int i = n1 - 1; i >= 0; i--)
//     {
//         new_str1[n1 - 1 - i] = str1[i];
//     }
//     for (int j = n2 - 1; j >= 0; j--)
//     {
//         new_str2[n2 - 1 - j] = str2[j];
//     }
//     // printf("str1 = %s, str2 = %s\n", str1, str2);
//     // printf("new_str1 = %s, new_str2 = %s\n", new_str1, new_str2);
//     char *num = strstr(new_str1, new_str2);
//     char *res = new_str1;
//     char result[100] = "";
//     i = 0;
//     while (*res != '\0')
//     {
//         result[i] = *res;
//         i++;
//         res++;
//         if (res == num)
//         {
//             res += n2;
//         }
//     }
//     for (int i = strlen(result); i >= 0; i--)
//     {
//         printf("%c", result[i]);
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str1[2048] = {0}, str2[2048] = {0}, new_str1[2048] = {0}, new_str2[2048] = {0}, result[2048] = {0};
//     char c = '0';
//     int i = 0, flag = 0;
//     while (1)
//     {
//         c = getchar();
//         if (c == '\n')
//             break;
//         str1[i] = c;
//         i++;
//     }
//     i = 0;
//     while (1)
//     {
//         c = getchar();
//         if (c == '\n')
//             break;
//         str2[i] = c;
//         i++;
//     }
//     int n = strlen(str1), m = strlen(str2);

//     for (int k = 0; k < n; k++)
//         new_str1[k] = str1[n - 1 - k];
//     for (int k = 0; k < m; k++)
//         new_str2[k] = str2[m - 1 - k];

//     i = 0;
//     char *pnew_str1 = new_str1;
//     while (1)
//     {
//         if (pnew_str1 == strstr(new_str1, new_str2) && flag == 0)
//         {
//             pnew_str1 += m;
//             flag = 1;
//         }
//         result[i] = *pnew_str1;
//         i++;
//         pnew_str1 += 1;

//         if (*pnew_str1 == '\0')
//             break;
//     }
//     for (int j = strlen(result); j >= 0; j--)
//         printf("%c", result[j]);

//     return 0;
// }