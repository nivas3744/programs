#include<stdio.h>
void main()
{
    int k=7,n=1919,r;
    r=1<<(k-1)&n;
    if(r)
    {
    printf("7th bit is set");
    }
    else
    {
    printf("7th bit is clear");
    }
}
