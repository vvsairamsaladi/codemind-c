#include<stdio.h>
int main()
{
    int x,y,c;
    scanf("%d",&c);
    x=c/10;
    y=c%10;
    if(y==0)
    {
        printf("%d",x);
    }
    else if(y==5)
    {
        printf("%d",x+1);
    }
    else
    {
        printf("-1");
    }
}