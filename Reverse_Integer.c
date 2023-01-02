#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int s=0,r;
    while(a!=0)
    {
        r=a%10;
        s=s*10+r;
        a=a/10;
    }
    printf("%d",s);
}