#include<stdio.h>
int main()
{
    int n,k,x,y;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    if(n==k)
    {
        printf("%d",k*x);
    }
    else if(x<y)
    {
        printf("%d", n*x);
    }
    else
    {
        printf("%d",k*x+(n-k)*y);
    }
}