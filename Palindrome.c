#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int r,s=0,tem=a;
    while(a!=0)
    {
        r=a%10;
        s=s*10+r;
        a=a/10;
    }
    if(s==tem)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}