/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>//function main begin program execution
int main() {

  int n,x=1,sum=0;//variable

  printf("Enter the number :");
  scanf("%d",&n);

  for(x=0;x<=n;x++)
  {
    sum=sum+x;
  }
  printf("Sum is %d",sum); 
  
  return 0;//end of the function main
}

