#include<stdio.h>
#include<math.h>
int main()
{
    int r,n,a,c=0;
    scanf("%d",&n);
    a=n;
    while(a>0)
    {
        a=a/10;
        c=c+1;
    }
    a=n;
    int sum=0;
    while(a>0)
    {
        r=a%10;
        sum=sum+pow(r,c);
        a=a/10;
        c=c-1;
    }
    if(sum==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}