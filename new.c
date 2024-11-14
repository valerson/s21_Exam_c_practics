#include <math.h>
#include <stdio.h>

int main() {
  double r = 0.0, p = 21500;
  if (scanf("%lf", &r) == 1 && r > 0) {
    double m = p * (4 / 3) * M_PI * r * r * r;
    printf("%.0lf", m);
  } else
    printf("n/a");
  return 0;
}

#include <stdio.h>

int main() {
  char a = 0, b = 0, c = 0, d = 0;
  if (scanf("%c%c%c%c", &a, &b, &c, &d) == 4 && d != '\n')
    printf("%c%c%c%c", a, d, c, b);
  else
    printf("%c%c%c", c, b, a);
  return 0;
}

#include <stdio.h>

int main() {
  char c;
  int d = 0;
  int result = 1, count = 0;
  while (1) {
    scanf("%d%c", &d, &c);
    count++;
    if (c == '\n') break;
    if (d % 2 != 0) {
      result *= d;
    }
  }

  if (count == 1)
    printf("%d", d < 0 ? d * -1 : d);
  else if (count == 2)
    printf("%d", 0);
  else
    printf("%d", result);
  return 0;
}

#include <stdio.h>

int main() {
  char x = 0, y = 0, z = 0;
  scanf("%c%c%c", &x, &y, &z);
  printf("%d", x - '0' && ((z - '0') || (y - '0')));
  return 0;
}

#include <stdio.h>

int main() {
  char c = 0;
  double d = 0;
  int arr[1000] = {'\0'}, i = 0;
  while (1) {
    if (scanf("%lf%c", &d, &c) != 2 || (int)d != d) {
      printf("n/a");
      break;
    }
    if (d == -1) {
      break;
    }
    arr[i] = d;
    i++;
  }
  for (int j = 0; j < i / 2; j++) {
    printf("%d %d", arr[j], arr[i - j - 1]);
    if (j < i / 2 - 1) printf(" ");
  }
  if (i % 2 != 0) printf(" %d", arr[i / 2]);
  return 0;
}

#include <stdio.h>
#include <string.h>

char *return_last_input(char *text1, char *text2) {
  char *result = text1;
  int len = strlen(text2);
  while (1) {
    if (strstr(result, text2) == NULL) {
      result -= len;
      break;
    }
    result += len;
  }
  return result;
}

int main() {
  char text1[100] = {0};
  char text2[100] = {0};
  char c = 0;
  int i = 0;
  while (1) {
    c = getchar();
    if (c == '\n') {
      i = 0;
      break;
    } else {
      text1[i] = c;
      i++;
    }
  }
  while (1) {
    c = getchar();
    if (c == '\n') {
      i = 0;
      break;
    } else {
      text2[i] = c;
      i++;
    }
  }

  char *p_text1 = text1;

  while (1) {
    if (*p_text1 != '\0') {
      printf("%c", *p_text1);
      p_text1++;
      if (p_text1 == return_last_input(text1, text2)) p_text1 += strlen(text2);
    } else
      break;
  }

  return 0;
}

#include <stdio.h>

int main() {
  int max = 0;
  char c = 0;
  while (1) {
    scanf("%c", &c);
    if (c >= '0' && c <= '9' && c - '0' > max) max = c - '0';
    if (c == '\n') break;
  }
  printf("%d", max);
  return 0;
}

#include <stdio.h>

typedef struct {
  char name[100];
  char surname[100];
  int hight;
} students;

int input_student(students *people) {
  char c = 0;
  int i = 0, result = 0;
  float hight = 0;
  while (1) {
    c = getchar();
    if (c == '\n') {
      i = 0;
      break;
    }
    people->name[i] = c;
    i++;
  }
  while (1) {
    c = getchar();
    if (c == '\n') {
      i = 0;
      break;
    }
    people->surname[i] = c;
    i++;
  }
  if (scanf("%f%c", &hight, &c) == 2 && hight > 0 && (int)hight == hight)
    people->hight = (int)hight;
  else
    result = 1;
  return result;
};

void output_student(students people) {
  printf("%s %s", people.surname, people.name);
};

int main() {
  float n = 0;
  char temp_c = 0;
  int flag = 0;
  if (scanf("%f%c", &n, &temp_c) == 2 && n > 0 && (int)n == n) {
    printf("ok\n");
    students list[100] = {0};
    for (int i = 0; i < n; i++) {
      flag = input_student(&list[i]);
      if (flag) {
        printf("n/a");
        break;
      }
    }
    if (!flag) {
      float res = 0;
      int count = 0;
      if (scanf("%f", &res) == 1 && res > 0 && (int)res == res) {
        for (int i = 0; i < n; i++) {
          if (res < list[i].hight) {
            if (count > 0) printf(", ");
            output_student(list[i]);
            count++;
          }
        }
      } else {
        printf("n/a");
      }
    } else
      printf("n/a");
  }
  return 0;
}

#include <stdio.h>

int main() {
  double num = 0, max = 0, min = 0, arr[1000] = {0};
  char c = 0;
  int i = 0, imax = 0, imin = 0;
  while (1) {
    if (scanf("%lf%c", &num, &c) == 2) {
      if (num == -1) {
        if (i > 0) {
          double temp = 0;
          temp = arr[imin];
          arr[imin] = arr[imax];
          arr[imax] = temp;
          for (int j = 0; j < i; j++) {
            printf("%lf", arr[j]);
            if (j < i) printf(" ");
          }
        }
        break;
      }
      if (i == 0) {
        max = num;
        min = num;
      }
      if (num > max) {
        max = num;
        imax = i;
      }
      if (num < min) {
        min = num;
        imin = i;
      }
      arr[i] = num;
      i++;
    } else {
      printf("n/a");
      break;
    }
  }

  return 0;
}

#include <ctype.h>
#include <stdio.h>

int main() {
  char arr[100] = {0};
  char c = 0;
  int i = 0, flag = 0;
  while (1) {
    c = getchar();
    if (c == '\n') break;
    arr[i] = c;
    i++;
  }
  for (int j = 0; j < i / 2; j++) {
    if (tolower(arr[j]) != tolower(arr[i - j - 1])) {
      printf("NO");
      flag = 1;
      break;
    }
  }
  if (!flag) printf("YES");
  return 0;
}

#include <stdio.h>

int main() {
  char c = 0;
  int i = 0;
  char text[2048] = {0};
  while (1) {
    c = getchar();
    if (c == '\n') break;
    if (c != ' ') {
      text[i] = c;
      i++;
    }
    if (c == ' ' && text[i - 1] != ' ') {
      text[i] = c;
      i++;
    }
  }
  if (text[i - 1] == ' ') {
    text[i - 1] = '\0';
    i -= 1;
  }
  for (int j = 0; j < i; j++) {
    printf("%c", text[j]);
  }
  return 0;
}

#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char surname[100];
  int score;
} student;

int input_list(student *people, int *res_score) {
  int res = 1;
  char c = 0;
  int i = 0;
  while (1) {
    c = getchar();
    if (c == '\n') break;
    people->surname[i] = c;
    i++;
  }
  float score = 0;
  if (scanf("%f%c", &score, &c) == 2 && score > 0 && (int)score == score) {
    *res_score += score;
    res = 0;
    people->score = (int)score;
  }
  return res;
}

int main() {
  float n = 0;
  char c = 0;
  int flag = 1;
  int res_score = 0, num = 0;
  ;
  if (scanf("%f%c", &n, &c) == 2 && n > 0 && (int)n == n) {
    student *list = malloc(n * sizeof(student));

    for (int i = 0; i < n; i++) {
      flag = input_list(&list[i], &res_score);
      if (flag) break;
    }

    for (int i = 0; i < n; i++) {
      if (num > 0) printf(", ");
      if (list[i].score > res_score / n) {
        printf("%s", list[i].surname);
        num++;
      }
    }
    free(list);
  }
  if (flag) printf("n/a");
  return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main() {
  float n = 0, m = 0;
  char c = 0;
  if (scanf("%f%f%c", &n, &m, &c) == 3 && n > 0 && m > 0 && (int)n == n &&
      (int)m == m) {
    int **matrix = malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
      matrix[i] = malloc(m * sizeof(int));
    }

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        scanf("%d%c", &matrix[i][j], &c);
      }
    }

    // for (int i = 0; i < n; i++) {
    //   for (int j = 0; j < m; j++) {
    //     printf("%d", matrix[i][j]);
    //     if (j < m - 1) printf(" ");
    //   }
    //   if (i < n - 1) printf("\n");
    // }

    for (int j = 0; j < m; j++) {
      for (int i = 0; i < n; i++) {
        printf("%d", matrix[i][j]);
        if (i < n - 1) printf(" ");
      }
      if (j < m - 1) printf("\n");
    }

    for (int i = 0; i < n; i++) {
      free(matrix[i]);
    }
    free(matrix);
  } else
    printf("n/a");
  return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main() {
  float n = 0;
  if (scanf("%f", &n) == 1 && n > 0 && (int)n == n) {
    printf("OK");
    int **matrix1 = malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) matrix1[i] = malloc(n * sizeof(int));
    int **matrix2 = malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) matrix2[i] = malloc(n * sizeof(int));
    int **matrix_res = malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) matrix_res[i] = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        scanf("%d", &matrix1[i][j]);
        matrix_res[i][j] = 0;
      }
    }
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        scanf("%d", &matrix2[i][j]);
      }
    }

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        {
          for (int k = 0; k < n; k++) {
            matrix_res[i][j] += matrix1[i][k] * matrix2[k][j];
          }
        }
      }
    }

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        printf("%d", matrix_res[i][j]);
        if (j < n) printf(" ");
      }
      if (i < n) printf("\n");
    }

    for (int i = 0; i < n; i++) free(matrix1[i]);
    free(matrix1);
    for (int i = 0; i < n; i++) free(matrix2[i]);
    free(matrix2);
    for (int i = 0; i < n; i++) free(matrix_res[i]);
    free(matrix_res);
  } else
    printf("n/a");
  return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main() {
  float n = 0;
  int num = 1;
  if (scanf("%f", &n) == 1 && n > 0 && (int)n == n) {
    // printf("OK");
    int **matrix = malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) matrix[i] = malloc(n * sizeof(int));

    for (int k = 0; k < n / 2; k++) {
      for (int j = k; j < n - 1 - k; j++) {
        matrix[k][j] = num;
        num++;
      }
      for (int i = k; i < n - 1 - k; i++) {
        matrix[i][(int)n - 1 - k] = num;
        num++;
      }
      for (int j = n - 1 - k; j > k; j--) {
        matrix[(int)n - 1 - k][j] = num;
        num++;
      }
      for (int i = n - 1 - k; i > k; i--) {
        matrix[i][k] = num;
        num++;
      }
    }
    if ((int)n % 2 != 0) matrix[(int)n / 2][(int)n / 2] = num;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        printf("%d", matrix[i][j]);
        if (j < n) printf(" ");
      }
      if (i < n) printf("\n");
    }

    for (int i = 0; i < n; i++) free(matrix[i]);
    free(matrix);
  } else
    printf("n/a");
  return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
  FILE *file = fopen("phone.txt", "r");

  char text[2048] = {0}, c = 0, res[2048] = {0};
  int i = 0, j = 0, t_j = 0;
  while (1) {
    c = fgetc(file);
    if (c == EOF) break;
    text[i] = c;
    i++;
  }

  while (1) {
    if (text[j] == ':') {
      t_j++;
      break;
    }
    res[j] = text[t_j];
    j++;
    t_j++;
  }
  while (1) {
    if (text[j] == '8' && text[j - 1] == ' ' && text[j + 1] == '-') {
      res[j] = '+';
      j++;
      res[j] = '7';
      j++;
      t_j++;
      break;
    } else {
      res[j] = text[t_j];
      j++;
      t_j++;
    }
  }
  //   printf("text[j]=%c", text[t_j]);
  int count = 0;
  while (1) {
    if (text[t_j] == '-') {
      count++;
      if (count == 1) {
        res[j] = '(';
        j++;
      } else {
        res[j] = ')';
        j++;
        t_j++;
        break;
      }
      t_j++;
    } else {
      res[j] = text[t_j];
      j++;
      t_j++;
    }
  }
  while (1) {
    if (text[t_j] == EOF) {
      break;
    } else {
      res[j] = text[t_j];
      j++;
      t_j++;
    }
  }

  printf("%s", res);

  fclose(file);
  return 0;
}

// /*
// Второе задание: Посчитать количество предложений в файле, заканчивающихся на
// ".!?". Самое главное что файл вводится через stdin и его ввод заканчивается
// "\n". По проверкам не успел погонять, так как у меня экзамен начался через 25
// минут после начала, так как комп тупо тормозил.
// */

#include <stdio.h>

int main() {
  char text[2048] = {0}, c = 0;
  int count = 0;
  FILE *file = fopen("text.txt", "w");
  while (1) {
    c = getchar();
    if (c == '\n') break;
    fputc(c, file);
    if (c == '.' || c == '!' || c == '?') count++;
  }
  printf("%d", count);
  fclose(file);

  return 0;
}

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

char *last_input(char *text1, char *text2) {
  char *res = text1;
  while (1) {
    if (strstr(res, text2) == NULL) {
      res -= strlen(text2);
      break;
    }
    res = strstr(res, text2);
    res += strlen(text2);
  }
  return res;
}

int main() {
  char text1[2048] = {0}, text2[2048] = {0}, c = 0;
  int i = 0;
  while (1) {
    c = getchar();
    if (c == '\n') {
      i = 0;
      break;
    }
    text1[i] = c;
    i++;
  }
  while (1) {
    c = getchar();
    if (c == '\n') {
      i = 0;
      break;
    }
    text2[i] = c;
    i++;
  }

  //   printf("text1 = %s, text2 = %s\n", text1, text2);

  char *p_text = text1;
  while (1) {
    if (*p_text == '\0') break;
    if (p_text == last_input(text1, text2)) p_text += strlen(text2);
    printf("%c", *p_text);
    p_text++;
  }

  //   printf("res= %s", last_input(text1, text2));
  return 0;
}

#include <stdio.h>

int main() {
  char c1 = 0, c2 = 0, c3 = 0, c4 = 0;
  scanf("%c%c%c%c", &c1, &c2, &c3, &c4);
  if (c1 == '-')
    printf("%c%c%c", c4, c3, c2);
  else
    printf("%c%c%c", c3, c2, c1);
  return 0;
}

#include <stdio.h>
#include <string.h>

void input_text(char *text) {
  int i = 0;
  char c = 0;
  while (1) {
    c = getchar();
    if (c == '\n') break;
    text[i] = c;
    i++;
  }
}

char *last__input(char *text1, char *text2) {
  char *res = text1;
  while (1) {
    if (strstr(res, text2) == NULL) {
      res -= strlen(text2);
      break;
    }
    res += strlen(text2);
  }
  return res;
}

int main() {
  char text1[2048] = {0};
  char text2[2048] = {0};
  input_text(text1);
  input_text(text2);

  char *p_str = text1;
  while (1) {
    if (p_str == last__input(text1, text2)) p_str += strlen(text2);
    if (*p_str == '\0') break;
    printf("%c", *p_str);
    p_str++;
  }

  //   printf("text1=%s, text2 = %s", text1, text2);

  // printf("\nres = %s", last__input(text1, text2));
  return 0;
}
