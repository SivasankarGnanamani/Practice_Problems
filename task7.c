#include<stdio.h>
#include<conio.h>
int main()
{
    unsigned long long int fact=1;
    int limit;
    scanf("%d",&limit);
    for(int inc=1;inc<=limit;inc++)
    {
        fact*=inc;
    }
    printf("\n%llu",fact);
}
