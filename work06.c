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

int main()
{
    char str1[100] = "";
    char str2[100] = "";
    char new_str1[100] = "";
    char new_str2[100] = "";

    char c = '\n';
    int i = 0;
    while ((c = getchar()) != '\n')
    {
        str1[i] = c;
        i++;
    }
    i = 0;
    while ((c = getchar()) != '\n')
    {
        str2[i] = c;
        i++;
    }

    int n1 = strlen(str1);
    int n2 = strlen(str2);

    for (int i = n1 - 1; i >= 0; i--)
    {
        new_str1[n1 - 1 - i] = str1[i];
    }
    for (int j = n2 - 1; j >= 0; j--)
    {
        new_str2[n2 - 1 - j] = str2[j];
    }

    // printf("str1 = %s, str2 = %s\n", str1, str2);
    // printf("new_str1 = %s, new_str2 = %s\n", new_str1, new_str2);

    char *num = strstr(new_str1, new_str2);
    char *res = new_str1;
    char result[100] = "";
    i = 0;
    while (*res != '\0')
    {
        result[i] = *res;
        i++;
        res++;
        if (res == num)
        {
            res += n2;
        }
    }

    for (int i = strlen(result); i >= 0; i--)
    {
        printf("%c", result[i]);
    }

    return 0;
}