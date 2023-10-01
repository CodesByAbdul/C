#include <stdio.h>

int main()
{
  int number;

  printf("Enter a value between 1 and 7: ");
  scanf("%d", &number);

  switch(number);
  {
    case 1
      printf("Sunday");
      break

    case 2
      printf("Monday");
      break

    default:
      printf("Invalid number"); 
  }

  return 0;
}