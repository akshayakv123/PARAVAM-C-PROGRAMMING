#include<stdio.h>

int countdigits(int n)
{
    int count = 0;
    while (n != 0)
{
 count++;
 n/=10;
}
return count;
}
int power(int base,int exp)
{
    int result=1;
    for(int i=1; i<=exp; i++)
    result *= base;
    return result;
}
int isarmstrong(int n)
{
    int digits=countdigits(n);
int sum=0,temp=n;
while(temp!=0)
{
    int digit=temp%10;
    sum+=power(digit,digits);
    temp/=10;
}
return sum==n;
}
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    if(isarmstrong(num))
    printf(" an armstrong number\n");
    else
    printf("not an armstrong number\n");
    return 0;
}

