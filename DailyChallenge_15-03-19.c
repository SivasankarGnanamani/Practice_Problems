#include<stdio.h>
#include<stdlib.h>

int main()
{
 char a[100];
int c=0;
scanf("%s",a);
for(int i=0;i<strlen(a);i++)
{
if((!isalpha(a[i])||(a[i]>='0' && a[i]<=9)))
{
c++;

}
}
printf("%d",c);
}
