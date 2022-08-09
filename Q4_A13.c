//Write a recursive function to calculate sum of squares of first n natural numbers
#include<stdio.h>
int main()
{
    printf(" %d",sumofsq(4));
    return 0;
}
int sumofsq(int n)
{
    if(n==0)
        return 1;
        sumofsq(n-1);
        int s=sumofsq(n-1)+(n*n);

    return s-1;
}
