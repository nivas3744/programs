#include<stdio.h>
int main()
{
int a=0,b=1,x,y,z,m,n,o,p,q,r,s;
//printf("enter a ,b");
//scanf("%d %d",&a,&b);
x=a&&a;
y=a&&b;
z=b&&a;
m=b&&b;
n=a||a;
o=a||b;
p=b||a;
q=b||b;
r=!a;
s=!b;
printf("\n a AND a %d",x);
printf("\n a AND b %d",y);printf("\n b AND a %d",z);printf("\n b AND b %d",m);printf("\n a OR a %d",n);printf("\n a OR b %d",o);printf("\n b OR a %d",p);printf("\n b OR b %d",q);printf("\n NOT a %d",r);printf("\n NOT b %d",s);

}

