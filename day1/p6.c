#include<stdio.h>

int main(){
    int a, b, c;

    printf("enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);

    if (a >= b && a >= c) {
        printf("largest = %d", a);
    }
    else if (b >= a && b >=c) {
        printf("largest = %d", b);
    }

    return 0;
}