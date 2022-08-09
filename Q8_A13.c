//Write a recursive function to print first N terms of Fibonacci series
#include<stdio.h>
void fib(int);
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    printf("Fibonaci series is %d",fib(i));
    getch();
}
int fib(int n)
{
   if(n==1||n==2)
        return 1;
       return (fib(n-1)+fib(n-2));
}
