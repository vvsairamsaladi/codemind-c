#include<stdio.h>
int main()
{
    int n=0,max=0,i;
    char a[100];
    scanf("%s",a);
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {
            n++;
        }else
        {
            n=0;
            
        }
        if(n>max)
        {
            max=n;
        }
    }
    printf("%d",max);
}