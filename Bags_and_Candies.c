#include<stdio.h>
int main()
{
    int e,a,b,c,d;
    scanf("%d%d%d",&a,&b,&c);
    d=a%(b*c);
    e=a/(b*c);
    if(d==0)
    {
        printf("%d",e);
    }
    else
    {
        printf("%d",e+1);
    }
}