/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  
  int num1, num2;

  printf("Enter first number: ");
  scanf("%d", & num1);

  printf("Enter first number: ");
  scanf("%d", & num2);

  int sum;
  sum = num1+ num2;

  printf("The sum of the two numbers is %d", sum);
  return 0;
}

