#include <stdio.h>

int main()
{
  /* while loop example
  int count = 1;

  while (count <= 5)
  {
    printf("This is a while loop\n");
    count++;
  }
  return 0;
  */



 /* multiplication table with While-loop

 int number;

 printf("Enter a number: ");
 scanf("%d", &number);

 int count = 1;
 while (count <= 10)
 {
  int product = number * count;
  printf("%d * %d = %d\n", number, count, product);
  count++;
 }
 return 0;
 */



  // reverse multiplication table with Do-While-loop

  int number;

 printf("Enter a number: ");
 scanf("%d", &number);

 int count = 10;
 do
 {
  int product = number * count;
  printf("%d * %d = %d\n", number, count, product);
  count--;
 }
 while (count >= 0);

 return 0;

}