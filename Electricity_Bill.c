#include<stdio.h>
int main()
{
    int u;
    float c,b,f,tb;
    scanf("%d",&u);
    if(u<200){
    c=1.20;
    b=c*u;
    printf("Units Consumed: %d
Cost per Unit: %.2f
Bill: %.2f
",u,c,b);
    }else if(u>=200&&u<400){
    c=1.40;
    b=c*u;
    printf("Units Consumed: %d
Cost per Unit: %.2f
Bill: %.2f
",u,c,b);
    }else if(u>=400 &&u<600)
    {c=1.60;
    b=c*u;
    printf("Units Consumed: %d
Cost per Unit: %.2f
Bill: %.2f
",u,c,b);
    }else if(u>=600&&u<800)
    {c=1.80;
    b=c*u;
    printf("Units Consumed: %d
Cost per Unit: %.2f
Bill: %.2f
",u,c,b);
    }else 
    {c=2.00;
    b=c*u;
    printf("Units Consumed: %d
Cost per Unit: %.2f
Bill: %.2f
",u,c,b);
    }if(b>400){
    f=0.15*b;
    tb=b+f;
    printf("Surcharge: %.2f
Total Amount: %.2f",f,tb);
    }else{
    f=0.00;
    tb=b+f;
    printf("Surcharge: %.2f
Total Amount: %.2f",f,tb);
}}