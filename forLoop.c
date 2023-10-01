#include <stdio.h>

int main()
{
  /* for (int a = 1; a <= 10; a++)
  {
    printf("%d ", a);
  }
  return 0;*/

  // summation of all odd numbers from 0 - 100

  int sum = 0;

  for (int oddNum = 1; oddNum <= 100; oddNum += 2)
  {
    sum = sum + oddNum;
  }
  printf("%d", sum);
  return 0;
}