#include<stdio.h>
int main(){
    int num,temp,rev=0,digit;
    printf("enter a number:");
    scanf("%d",&num);
    temp=num;

    while(num!=0){
    digit=num%10;
    rev = rev*10+digit;
    num=num/10;
    }
    if (rev==temp){
        printf("palindrome number");
    }
    else{
        printf("it is not a palindrome"); 
        }
        return 0;
    }