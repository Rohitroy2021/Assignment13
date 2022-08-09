//Write a recursive function to calculate factorial of a given number
#include<stdio.h>
int fact(int);
int main()
{
    printf("Factorial is %d",fact(5));
    getch();
}
int fact(int n)
{
    if(n==1)
        return 1;
   return fact(n-1)*n;
}
