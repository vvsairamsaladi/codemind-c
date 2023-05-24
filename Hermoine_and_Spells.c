#include<stdio.h>
int main()
{
    int a,b,c,s;
    scanf("%d%d%d",&a,&b,&c);
    s=a+b+c;
    if(a<b&&a<c)
    {
        printf("%d",s-a);
    }
    else if(b<a&&b<c)
    {
        printf("%d",s-b);
    }
    else {
        printf("%d",s-c);
    }
}