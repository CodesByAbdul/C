#include <stdio.h>

/*int multiplyNumber(int num1, int num2)
{
  int multiply = num1 * num2;
  return multiply;
}

int main()
{
  int a;
  int b;

  printf("Enter value of A: ");
  scanf("%d", &a);
  printf("Enter value of B: ");
  scanf("%d", &b);
  int result = multiplyNumber(a, b);
  printf("The multiplication of A(%d) and B(%d) is %d", a, b, result);

  return 0;
}*/

void multiply(int a, int b)
{
  int result = a * b;
  printf("%d", result);
}
int main(void)
{
  multiply(8, 9);
}