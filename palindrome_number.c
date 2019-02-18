#include<stdio.h>
main()
{
int number,remainder,reversed_number=0;
printf("\n Enter a Number to be Reversed 'number' :");
scanf("%d",&number);
while(number!=0)
{
    remainder=number%10;
    reversed_number=reversed_number*10+remainder;
    number/=10;
}
printf("%d",reversed_number);
if(reversed_number==number)
{
    printf("\n %d is a palindrome of %d",reversed_number,number);

}
}
