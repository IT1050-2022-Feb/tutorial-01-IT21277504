/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>//function main begin program execution

int main() {

  //variables
  int x,y;
  float average;

  printf("Enter the marks of first subject :");
  scanf("%d",&x);
  printf("Enter the marks of second subject :");
  scanf("%d",&y);

  average=(x+y)/2.0;//caculating average
  printf("average is %.2f",average);//print
  
  return 0;//end of the function main
}

