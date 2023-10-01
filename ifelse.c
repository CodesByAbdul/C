#include <stdio.h>
#include <stdbool.h>

int main()
{
  // if else statement

  int age;

  printf("Enter your age: ");
  scanf("%d", &age);

  if ((age >= 120) || (age < 0))
  {
    printf("INVALID AGE. TRY AGAIN ");
  }
  else if (age >= 18)
  {
    printf("Congratulations, YOU'RE ELIGIBLE TO VOTE");
  }
  else
  {
    printf("YOU'RE NOT ELIGIBLE TO VOTE");
  }

  //Ternary operator

  int number;
  printf("\nEnter any number: ");
  scanf("%d", &number);

  (number <= 0) ? printf("This is a negative number") : printf("This is a positive number");

  return 0;
}