// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int n = 2048;
//     char *str = malloc(sizeof(char) * n);
//     FILE *file = fopen("test.txt", "r+");
//     int i = 0;
//     while (1)
//     {
//         char c = getc(file);
//         if (c == EOF)
//             break;
//         else
//         {
//             str[i] = c;
//             i++;
//         }
//         if (i > n)
//         {
//             n += 2048;
//             str = realloc(str, sizeof(char) * n);
//         }
//     }
//     char str_to_file[1000] = "\ntext99 auh!!";
//     fputs(str_to_file, file);
//     printf("str from file = %s", str);
//     free(str);
//     fclose(file);
//     return 0;
// }
