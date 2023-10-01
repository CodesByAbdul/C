#include <stdio.h>
#include <stdbool.h>

int main()
{
  int age = 20;
  double height = 10.5;

  bool result = (age > 18) && (height > 10.5);

  printf("%d", result);
  return 0;
}