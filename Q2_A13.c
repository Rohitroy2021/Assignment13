//Write a recursive function to calculate sum of first N odd natural numbers
#include<stdio.h>
int main()
{
    printf(" %d",sumodd(5));
    return 0;
}
int sumodd(int n)
{
    if(n==0)
        return 1;
        sumodd(n-1);
        int s=2*n-1;

    return s;
}
