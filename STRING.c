#include<stdio.h>
main()
{
    int c=0,i=0,b;
    char ch[10];
    scanf("%[^\n]s",&ch);
    //printf("%s",ch);
        /*while(ch[i]!=NULL)
        {
            c++;
            i++;
        }
        for(int i=0;ch[i]!=NULL;i++)
        {
            c++;
        }
        b=sizeof(ch);
        for(int i=0;i<b;i++)

        {
            c++;
        }
        printf("%d",c);*/
    int size=strlen(ch);
    printf("%d",size);

}
