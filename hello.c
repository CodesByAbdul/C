#include <stdio.h>

int main(void)
{
  int a, b, c, d;
  char name;
  printf("What's your name: ");
  scanf("%c", &name);
  printf("Hello %c!\n", name);

  printf("Enter value a: ");
  scanf("%d", &a);

  printf("Enter value b: ");
  scanf("%d", &b);
  c = a * b;
  d = c / b;

  printf("Product of %d and %d is %d\n", a, b, c);
  printf("Division of %d by %d is %d", c, b, d);
}
