#include<stdio.h>
int main()
{
    int a[5]={12,45,4,89,44};
    int max=a[0];
    for(int i=1; i<5; i++)
    if (a[i]>max)
    max = a[i];
    printf("maximum=%d",max);
    return 0;
}