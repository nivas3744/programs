#include<stdio.h>
int main()
{
int x,y;
printf("enter the number");
scanf("%d",&y);
if(x=y%11==0||(y%11==1&&y>11))
{
printf("special");
}
else
{
    printf("not special");
}
}
