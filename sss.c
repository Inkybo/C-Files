int main()
{
    char str[10];
    int i,j,ctr;
    printf("Enter a string of the size [10] or less :\n");
    gets(str);
    for (i=0;i<strlen(str)-1;i++)
    {
        ctr=0;
        for(j=i+1;j<strlen(str)-1;j++)
        {

            if (str[j]>='a' && str[j]<='z')
            {
                if (str[i]==str[j] || str[i]==str[j]-32)
                {
                    ctr++;
                }
            }
            else if (str[j]>='A' && str[j]<='Z')
            {
                if (str[i]==str[j] || str[i]==str[j]+32)
                {
                    ctr++;
                }
            }

        }
        if (ctr)
        {
            printf("%c - %d\n",str[i],ctr);

        }
    }
    return 0;
}
