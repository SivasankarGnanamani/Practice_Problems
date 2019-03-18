#include<stdio.h>
#include<conio.h>

int main( )
{   int i=0;
    int vowelcount=0;
    char str[100];
    scanf("%s",str);
    while(str[i]!='\0')
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
        vowelcount+=1;
        }
        i++;
    }
    printf("%d",vowelcount);
}
