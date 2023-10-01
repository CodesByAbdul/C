/*
//Example 1: call-back function pointers

#include <stdio.h>

//function prototypes
int sum(int x, int y);
int average(int (*ptSum)(int, int), int a, int b);

int main()
{
  int (*ptSum)(int, int) = sum;
  int a, b;

  printf("Find the average of two numbers:\n");
  printf("Enter the two numbers: ");
  scanf("%d %d", &a, &b);
 
  int result = average(ptSum, a, b);
  printf("%d\n", result);

  return (0);
}

// function definitions
int sum(int x, int y){
  return (x + y);
}

int average(int (*ptSum)(int, int), int a, int b){
  int n = ptSum(a, b);
  return (n/2);
}
*/

// Example 2: Array of function pointers

#include <stdio.h>

//function prototypes
int add(int x, int y);
int subtract(int x, int y);
int multiply(int x, int y);
int divide(int x, int y);

int main()
{
  int (*ptCalc[])(int, int) = {add, subtract, multiply, divide};
  int choice;
  printf("Perform simple calculations of two numbers\n");
  printf("Press 0 for Addition \n Press 1 for Subtraction \n Press 2 for Multiplication \n Press 3 for Division \n");
  printf("Enter your the operation you want to perform: ");
  scanf("%d", &choice);
  
  int a,b;
  printf("Now, enter the two numbers: ");
  scanf("%d %d", &a, &b);

  int result = (ptCalc[choice])(a, b);
  printf("%d", result);
}

// function definitions
int add(int x, int y){
  return(x+y);
}

int subtract(int x, int y){
  return(x-y);
}

int multiply(int x, int y){
  return(x*y);
}

int divide(int x, int y){
  return(x/y);
}