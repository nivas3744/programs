//WAP TO COMPARE ONE STRING TO ANOTHER STRING WITHOUT USING PRE DEFINED FUNCTIONS
#include<stdio.h>
int main()
{
    int c=0;
    char s1[100];
    char s2[100];
    printf("Enter the 1st string : ");
    scanf("%s",&s1);
    printf("Enter the 2nd string : ");
    scanf("%s",&s2);
    for(int i=0;s1[i]!=NULL;i++)
    {
        if(s1[i]==s2[i])
        c++;
    }
    (c!=0 && c==strlen(s1))? printf("equal") : printf("not equal ");
    printf("\n1st String %s \n2nd string is %s",s1,s2);
    return 0;
}
