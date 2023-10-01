#include <stdio.h>
#include <math.h>

int main()
{
  int num;
  double square_root;
  double power;

  printf("Enter a number: ");
  scanf("%d", &num);
  square_root = sqrt(num);
  printf("The square root of %d is %.2lf\n", num, square_root);
  power = pow(num, sqrt(num));
  printf("The power of %d raised to the power of %lf is %.2lf\n", num, square_root, power);
}