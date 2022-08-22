#include<stdio.h>
void main()
{
    int a,b,r;
    printf("enter the value and number of bits");
    scanf("%d %d",&a,&b);
    r=1<<a&b;
    if(r)
    {
    printf("14th bit is clear");
    }
    else
    {
    printf("14th bit is set");
    }
}
