/*
Задание №3
проверить является ли строка палиндромом (строка должна заканчиваться \n)
входная строка может содержать буквы латинского алфавита и цифры, длина строки до 100 символов
ввод        	| вывод
------------------------
Mam mam  | YES
------------------------
Test1       	| NO
*/

#include <stdio.h>

int main()
{
    char str[100] = {0};
    char c = '0';
    int i = 0;
    while (1)
    {
        c = getchar();
        if (c == '\n')
        {
            i--;
            break;
        }

        str[i] = c;
        i++;
    }

    for (int j = 0; j < i / 2; j++)
    {
        if (str[j] != str[i - j])
        {
            printf("NO");
            break;
        }
        if (j == i / 2 - 1)
            printf("YES");
    }

    return 0;
}

// #include <stdio.h>
// int main()
// {
//     char str[100] = "";
//     char c = '0';
//     int i = 0;
//     while ((c = getchar()) != '\n')
//     {
//         str[i] = c;
//         i++;
//     }
//     i--;
//     for (int j = 0; j <= i / 2; j++)
//     {
//         if (str[j] != str[i - j])
//         {
//             printf("NO");
//             break;
//         }
//         if (j == i / 2)
//             printf("YES");
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     char str[100] = "";
//     int i = 0, flag = 0;
//     while (1)
//     {
//         char c = getchar();
//         if (c == '\n')
//             break;
//         else
//         {
//             str[i] = c;
//             i++;
//         }
//     }
//     for (int j = 0; j < i / 2; j++)
//     {
//         if (str[j] != str[i - 1 - j])
//         {
//             printf("NO");
//             flag = 1;
//             break;
//         }
//     }
//     if (!flag)
//         printf("YES");
//     return 0;
// }