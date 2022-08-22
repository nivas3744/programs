#include<stdio.h>
void main()
{
    int a=4097,k=11,r;
    r=1<<(k-1)&a;
    if(r)
    {
    printf("11th bit is set");
    }
    else
    {
    printf("11th bit is clear");
    }
}
