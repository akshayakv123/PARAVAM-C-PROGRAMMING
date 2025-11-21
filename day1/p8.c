//simple calculator

#include<stdio.h>

int main() {
    int a , b;
    char op;

    scanf("%d %c %d",&a, &op, &b);
    switch(op) {
        case '+' : printf("%d", a + b); break;
        case '-': printf("%d", a - b);  break;
        case '*': printf("%d", a * b);  break;
        case '/': printf("%d" , a / b);  break;
        default:  printf("Invaid operator");
    }
    return 0;
}