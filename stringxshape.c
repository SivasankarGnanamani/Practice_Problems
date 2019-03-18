main()
{
    int i,j,n;
    char str[100];
    scanf("%d %n",str,&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((i==j)||(i+j)==(n-1))
            {

            printf("%c",str[j]);
                }
                else
                {
                    printf(" ");

                }
            }
            printf("\n");
        }
    }

