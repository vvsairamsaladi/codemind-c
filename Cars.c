#include<stdio.h>
int main()
{
    int n,r,c;
    scanf("%d",&n);
    r=n%4;
    c=n/4;
    if(r==0)
    {
        printf("%d",c);
    }
    else
    {
        printf("%d",c+1);
    }
}