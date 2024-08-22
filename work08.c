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
} data_people;

int main()
{
    int n = 0;
    char c = '0';
    scanf("%d", &n);
    getchar();
    data_people *people = malloc(n * sizeof(data_people));
    for (int i = 0; i < n; i++)
    {
        int j = 0;
        while (1)
        {
            c = getchar();
            if (c != ' ')
            {
                people[i].name[j] = c;
                j++;
            }
            else
            {
                break;
            }
        }
        j = 0;
        while (1)
        {
            c = getchar();
            if (c != ' ')
            {
                people[i].surname[j] = c;
                j++;
            }
            else
            {
                break;
            }
        }

        scanf("%d", &people[i].height);
        getchar();
    }
    int number = 0;
    scanf("%d", &number);
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (people[i].height > number)
        {
            if (count)
            {
                printf(", ");
            }
            printf("%s %s", people[i].name, people[i].surname);
            count++;
        }
    }

    free(people);
    return 0;
}