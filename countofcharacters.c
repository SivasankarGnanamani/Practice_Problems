main()
{
    char a[20],b[10],target;
    int count,len,i,j,count1=0;
    printf("enter a string: ");
    scanf("%s",a);
    int n=strlen(a);

    for(i=0;i<n;i++)
    {
        count=0;

        for(j=0;j<n;j++)
        {

            if(a[i]==a[j])
            {
                count++;
            }
        }
        if(count>count1)
        {
            count1=count;
            target=a[i];
        }
    }
printf("%c",target);
}
