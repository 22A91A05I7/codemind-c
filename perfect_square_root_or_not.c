#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b=sqrt(a);
    if(a==b*b)
    {
        printf("True");
    }
     else
     printf("False");
}