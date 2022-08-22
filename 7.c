#include<stdio.h>
int main()
{
int a,b,c,big;
printf("enter the a,b,c ");
scanf("%d %d %d",&a,&b,&c);
big=a>b?(a>c?a:c):(b>c?b:c);
printf("%d is the heaviest",big);

}
