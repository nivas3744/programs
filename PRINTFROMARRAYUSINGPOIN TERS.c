#include<stdio.h>
main()
{
    int a[]={1,2,3,4,5};
    int *p;
    p=&a;
    for(int i=0;i<5;i++)
    printf("%d",p[i]);
}
