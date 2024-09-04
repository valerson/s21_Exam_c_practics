/*
Задание №3
Дается натуральное число Даются данные для заполнения Н структур
Структура состоит из имени (str) фамилия (str) рост int
После дается 1 положительное целое число и нужно вывести в строчку через запятую фамилии и
имена чей рост выше какого то значения
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[100];
    char surname[100];
    int height;
} work;

int main()
{
    float n = 0, h = 0;
    char c1 = '0', c2 = '0', c = '0';

    if (scanf("%f%c%f%c", &n, &c1, &h, &c2) == 4 && (int)n == n && n > 0 && h > 0 && (c1 == ' ' || c1 == '\n') && c2 == '\n')
    {
        work *students = malloc(n * sizeof(work));

        for (int i = 0; i < n; i++)
        {
            int j = 0;
            while (1)
            {
                c = getchar();
                if (c == '\n')
                    break;
                students[i].name[j] = c;
                j++;
            }
            j = 0;
            while (1)
            {
                c = getchar();
                if (c == '\n')
                    break;
                students[i].surname[j] = c;
                j++;
            }
            scanf("%d%c", &students[i].height, &c);
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (count)
                printf(", ");
            if (students[i].height > h)
            {
                printf("%s %s", students[i].name, students[i].surname);
                count++;
            }
        }

        free(students);
    }
    else
        printf("n/a");
    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>
// typedef struct
// {
//     char name[100];
//     char surname[100];
//     int height;
// } data_people;
// int main()
// {
//     int n = 0;
//     char c = '0';
//     scanf("%d", &n);
//     getchar();
//     data_people *people = malloc(n * sizeof(data_people));
//     for (int i = 0; i < n; i++)
//     {
//         int j = 0;
//         while (1)
//         {
//             c = getchar();
//             if (c != ' ')
//             {
//                 people[i].name[j] = c;
//                 j++;
//             }
//             else
//             {
//                 break;
//             }
//         }
//         j = 0;
//         while (1)
//         {
//             c = getchar();
//             if (c != ' ')
//             {
//                 people[i].surname[j] = c;
//                 j++;
//             }
//             else
//             {
//                 break;
//             }
//         }
//         scanf("%d", &people[i].height);
//         getchar();
//     }
//     int number = 0;
//     scanf("%d", &number);
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (people[i].height > number)
//         {
//             if (count)
//             {
//                 printf(", ");
//             }
//             printf("%s %s", people[i].name, people[i].surname);
//             count++;
//         }
//     }
//     free(people);
//     return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>
// typedef struct
// {
//     char name[100];
//     char surname[100];
//     int height;
// } work;
// int main()
// {
//     float n = 0;
//     float h = 0;
//     char c = '0';
//     int flag = 0;
//     if (scanf("%f", &n) == 1 && n > 0 && (int)n == n)
//     {
//         getchar();
//         if (scanf("%f", &h) == 1 && h > 0)
//         {
//             getchar();
//             work *students = malloc(n * sizeof(work));
//             for (int i = 0; i < n; i++)
//             {
//                 int j = 0;
//                 while (1)
//                 {
//                     c = getchar();
//                     if (c == '\n')
//                         break;
//                     students[i].name[j] = c;
//                     j++;
//                 }
//                 j = 0;
//                 while (1)
//                 {
//                     c = getchar();
//                     if (c == '\n')
//                         break;
//                     students[i].surname[j] = c;
//                     j++;
//                 }
//                 scanf("%d", &students[i].height);
//                 getchar();
//             }
//             for (int i = 0; i < n; i++)
//             {
//                 if (students[i].height > h)
//                 {
//                     if (flag)
//                         printf(", ");
//                     flag = 1;
//                     printf("%s %s", students[i].surname, students[i].name);
//                 }
//             }
//             free(students);
//         }
//         else
//             printf("n/a");
//     }
//     else
//         printf("n/a");
//     return 0;
// }
