#include<stdio.h>
int main()
{
    int km;
    float m;
    scanf("%d",&km);
    m=km*1000/3600.0;
    printf("%.2f",m);
}