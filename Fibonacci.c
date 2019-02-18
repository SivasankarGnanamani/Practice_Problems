#include<stdio.h>
main()
{
    int num1=0,num2=1,num3,limit,inc;
    printf("\n Enter the Limit");
    scanf("%d",&limit);

    printf(" %d %d",num1,num2);
    int count=2;
    for(inc=0;inc<limit;inc++)
    {
        num3=num1+num2;
        num1=num2;
        num2=num3;

        printf(" %d ",num3);
        count++;
        if(count == limit)
        {
            break;
        }
    }

}
