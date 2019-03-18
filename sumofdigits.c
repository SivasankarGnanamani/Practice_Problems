#include<stdio.h>
#include<conio.h>

int main()
{
int t,sum=0,remainder;
scanf("%d",&t);
while(t!=0)
{
    remainder=t%10;
    sum=sum+remainder;
    t=t/10;
}
printf("%d",sum);
}
