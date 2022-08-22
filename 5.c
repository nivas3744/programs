#include<stdio.h>
int main()
{

int a=2,b=1,c=3,d=4,e=5,f=6,g=7,h=8,i=9,temp;
printf(" \n before swapping \n a=%d\n b=%d \n c=%d\n d=%d\n e=%d\n f=%d\n g=%d\n h=%d\n i=%d",a,b,c,d,e,f,g,h,i);
temp=b;
b=a;
a=temp ;

printf(" \n after swapping \n a=%d\n b=%d \n c=%d\n d=%d\n e=%d\n f=%d\n g=%d\n h=%d\n i=%d",a,b,c,d,e,f,g,h,i);
}
