/*
Задание №3 После того как не выполнил предыдущее
Дают число 123
Найти наибольшую цифру, то есть 3
----------
11111
1
—————.0.x
18
8
-----------
*/

// #include <stdio.h>
// int main()
// {
//     int num = 0;
//     int max = 0;
//     while (1)
//     {
//         char c = getchar();
//         if (c >= '0' && c <= '9')
//         {
//             if ((c - '0') > max)
//                 max = c - '0';
//         }
//         if (c == '\n')
//             break;
//     }
//     printf("%d", max);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     char c = '0';
//     int max = 0;
//     while (1)
//     {
//         c = getchar();
//         if (c == '\n')
//             break;
//         if (c > '0' && c < '9' && (c - '0') > max)
//             max = c - '0';
//     }
//     printf("%d", max);
//     return 0;
// }