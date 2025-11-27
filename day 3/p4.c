//sum of digits
#include<stdio.h>
int main(){
    int n,sum = 0;
    printf("enter the number:");
    scanf("%d",&n);

    for(;n>0; n/=10){
        sum+=n%10;
    }

    printf("sum of digits=%d",sum);
    return 0;
}