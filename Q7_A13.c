//Write a recursive function to calculate HCF of two numbers
#include<stdio.h>
int hcf(int,int);
int main()
{
    int n,m;
    printf("Enter a number ");
    scanf("%d%d",&n,&m);
    printf("hcf is %d",hcf(n,m));
    getch();
}
int hcf(int n,int m)
{
    if(m==0)
        return n;
    return hcf(m,n%m);
}
