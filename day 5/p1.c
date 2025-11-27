#include<stdio.h>
int main()
{
    int marks=95;
    float balance=30;
    int*ptr=&marks;

    //address
    printf("%u\n",marks);
    printf("%u\n",ptr);
    printf("%u\n",(&marks));
    return 0;
}