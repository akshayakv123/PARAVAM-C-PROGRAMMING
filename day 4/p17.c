#include<stdio.h>
int main(){
    int a=90;
    int *p=&a;
    printf("p=%u\n",p);
    p++;
    printf("p++=%u\n",p);
    return 0;
}