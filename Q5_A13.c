//Write a recursive function to calculate sum of digits of a given number
#include<stdio.h>
int sum(int);
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    printf(" sum is %d",sum(n));
    getch();
}
int sum(int n)
{
    if(n/10==0)
        return n;
    return sum(n%10+(n/10));
}
