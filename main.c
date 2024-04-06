#include <stdio.h>
#include <string.h>

float calculate(int a, char op, int b) {
  switch (op) {
    case '+':
      return a + b;
    case '*':
      return a * b;
    case '-':
      return a - b;
    case '/':
      return a / b;
  }
}

int main(int argc, char *argv[]) {
  int a, b;
  char op;
  float result;

  printf("Enter in two numbers delimited by a space: ");
  scanf("%d %d", &a, &b);

  printf("what operation would you like to perform? ");
  scanf(" %c", &op);

  result = calculate(a, op, b);
  printf("%d %c %d = %.1f\n", a, op, b, result);
  return 0;
}