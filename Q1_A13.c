//1. Write a recursive function to calculate sum of first N natural numbers
#include<stdio.h>
int sum(int);
int main()
{
    printf(" sum is %d",sum(5));
    return 0;
}
int sum(int n)
{
    if(n==1)
        return 1;
    int s=sum(n-1)+n;
    return s;
}
