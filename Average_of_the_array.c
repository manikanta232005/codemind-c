#include<stdio.h>
int main()
{
    int i,n,sum;
    scanf("%d",&n);
    float avg;
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    avg=(float)sum/n;
    printf("%.2f",avg);
}