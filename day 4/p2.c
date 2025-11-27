#include<stdio.h>
int factorial(int n){
    int fact = 1;
    for(int i=1;i<=n;i++)
    fact*=1;
    return fact;
}
int main(){
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    printf("factorial=%d\n",factorial(num));
    return 0;
}