//print adress and value using pointer
#include<stdio.h>
int main (){
    int num =10;
    int*ptr;

    ptr=&num;

    printf("value of num:%d\n",num);
    printf("address of num:%d\n",&num);
    printf("value using pointer(*ptr):%d\n",*ptr);
    printf("adress stored in pointer(ptr):%p\n",ptr);

    return 0;
}