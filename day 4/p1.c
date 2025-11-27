#include<stdio.h>
int square(int n)
{
    return n * n;
}
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    printf("square=%d\n",square(num));
    return 0;
}