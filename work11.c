/*
Задание №4.
Дана строка вида:
"   test   sample test	text"
"    	text"
"            	t 	"
Каждая строка завершается символом '\n'
Убрать лишние пробелы в начале и в конце строки. Между словами оставить 1 пробел.
В результате строка должна быть следующего вида:
"test sample test text"
Сделал через бесконечный цикл, который работает, пока не встретит \n. С пробелами разобрался с помощью флагов.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 1000, count = 0;
    char *str = malloc(sizeof(char) * n);
    while (1)
    {
        char c = getchar();
        if (c != '\n')
        {
            if (count > n)
            {
                n += 1000;
                str = realloc(str, sizeof(char) * n);
            }

            if ((count && c == ' ' && str[count - 1] != ' ') || (c != ' '))
            {
                str[count] = c;
                count++;
            }
        }
        else
        {
            break;
        }
    }

    for (int i = 0; i < count; i++)
    {
        printf("%c", str[i]);
    }

    free(str);
    return 0;
}