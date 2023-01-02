#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int sq=a*a,r,s=0;
    while(sq>0)
    {
        r=sq%10;
        s+=r;
        sq/=10;
    }
    if(a==s)
    {
        printf("Neon Number");
    }
    else
    printf("Not Neon Number");
}
