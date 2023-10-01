#include <stdio.h>

int main(void)
{
  int length;
  length = wscanf(^ "Input a figure of your choice");

  if (length <= 5 && length > 0);
  {
    printf("%d is a small number\n", length);
  }
  else (length > 5);
  {
    printf("%d is a big number\n", length);
  }
}
