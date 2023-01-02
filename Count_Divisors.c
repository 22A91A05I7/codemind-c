#include<stdio.h>
int main()
{
    int i,r,k;
    scanf("%d%d%d",&i,&r,&k);
    int j,cnt=0;
    for(j=i;j<=r;j++)
    {
        if(j%k==0)
        cnt++;
    }
    printf("%d",cnt);
}