//Write a program in C to count the digits of a given number using recursion.
#include<stdio.h>
int count(int);
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    printf("count is %d",count(n));
    getch();
}
int count(int n)
{
    static int c=0;
    if(n==0)
        return c;
    else
    {
        c++;
        return count(n/10);
    }
}
