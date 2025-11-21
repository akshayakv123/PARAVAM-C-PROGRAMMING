// simple grade system

#include<stdio.h>

int main(){
    int marks = 90;

    if(marks >= 90) {
        printf("grade A\n");
    }
    else if(marks >= 75) {
        printf("grade B\n");
    }
    else if(marks >= 50) {
        printf("grade C\n");
    }
    return 0;
}