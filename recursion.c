#include <stdio.h>

int factorial(int n);

int main(void)
{
  int num;
  int result;

  printf("Enter a number: ");
  scanf("%d\n", &num);

  result = factorial(num);

  printf("The factorial of %d is %d", num, result);
}
int factorial(int n)
{
  if(n != 0)
  {
    return n * factorial(n - 1);
  }
  else
  {
    return n;
  }
}