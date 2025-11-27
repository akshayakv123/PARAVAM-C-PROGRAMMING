//factorial of number
#include<stdio.h>
int main(){
    int n,fact=1;//initializing the datatypes
    printf("enter the number:");//print function for user
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact *=i;
    }
    printf("factorial=%d",fact);
    return 0;
}