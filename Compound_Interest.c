#include<stdio.h>
#include<math.h>
int main()
{
    int p,r,t;
    float a;
    scanf("%d%d%d",&p,&r,&t);
    a=p*pow(1+r/100.0,t)-p;
    printf("%.2f",a);
}