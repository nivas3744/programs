#include<stdio.h>
int main()
{
int a,rev=0,r;
printf("enter");
scanf("%d",&a);
while(a!=0){
r=a%10;
rev=rev*10+r;
a=a/10;
printf("the reverse of number %d is",rev);
}
}
