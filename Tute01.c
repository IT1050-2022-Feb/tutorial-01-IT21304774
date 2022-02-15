/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int sub1, sub2;
  float avg;

  printf("Enter Subject 1:");
  scan("%d",&sub1);

  printf("Enter subject 2:");
  scanf("%d",&sub2);
  
  avg = (sub1+sub2)/2.0;
  printf("Average Marks %2f",avg)
    
  
  return 0;
}

