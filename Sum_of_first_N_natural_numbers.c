#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    i=1;
    do
    {
        sum=sum+i;
        i++;
    }while(i<=n);
    printf("%d",sum);
}
