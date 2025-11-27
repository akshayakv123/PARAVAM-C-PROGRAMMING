#include<stdio.h>
int main(){
    int n ,i=2;
    printf("enter number :");
    scanf("%d",&n);
    while(i<n){
        if(n%i==0){
            printf("not prime");
            return 0;
        }
        i++;
    }
    printf("prime");
    return 0;

}