/*
"Открыть файл, спарсить строку вида Smith: 8-950-111-22-33 переформатировать ее и вывести на печатать в виде:
Smith +7(950)111-22-33"
*/

#include <stdio.h>

int main()
{
    FILE *file = fopen("phone.txt", "r+");
    char str[2048] = {0};
    char new_str[2048] = {0};
    char c = '0';
    int i = 0, start = 0, newi = 0;
    while (1)
    {
        c = fgetc(file);
        if (c == EOF)
            break;
        str[i] = c;
        i++;
    }
    if (str[0] == '8')
    {
        new_str[0] = '+';
        new_str[1] = '7';
        new_str[2] = '(';
        new_str[6] = ')';
        start = 2;
        newi = 3;
    }
    for (int j = start; j < i; j++)
    {
        if (j != 5)
        {
            new_str[newi] = str[j];
            newi++;
        }
        else
            newi++;
    }
    printf("%s", new_str);

    for (int i = 0; i < newi; i++)
    {
        fputc(new_str[i], file);
    }

    fclose(file);
    return 0;
}