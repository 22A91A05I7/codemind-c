#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int i,s=0;
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        s++;
    }
    if(s==2)
    {
        printf("prime");
    }
    else
    printf("not a prime");
}