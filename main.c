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
  int numbers[2];
  char op;
  float result;

  printf("Enter in two numbers delimited by a space: ");
  scanf("%d %d", &numbers[0], &numbers[1]);

  printf("what operation would you like to perform? ");
  scanf(" %c", &op);

  result = calculate(numbers[0], op, numbers[1]);
  printf("%d %c %d = %.1f\n", numbers[0], op, numbers[1], result);
  return 0;
}