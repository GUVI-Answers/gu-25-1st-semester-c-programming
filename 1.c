#include <stdio.h>

double calc();

int main() {
  int rep;
  scanf("%d", &rep);
  double resp[rep];
  for (int i = 0; i < rep; i++) {
    resp[i] = calc();
  }

  for (int i = 0; i < rep; i++)
    printf("%.2f\n", resp[i]);
}

double calc() {
  int a;
  float b;
  char op;
  double c;
  double res;

  int inpno = scanf("%d %f %c %lf", &a, &b, &op, &c);
  if (inpno != 4) {
    return 0;
  }

  switch (op) {
  case '+':
    res = a + b;
    break;
  case '-':
    res = a - b;
    break;
  case '*':
    res = a * b;
    break;
  case '/':
    if (b == 0)
      res = 0;
    else
      res = a / b;
    break;
  }
  res = res + c;
  return res;
}
