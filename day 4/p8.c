#include<stdio.h>
#include<string.h>
int main(){
    char str1[20]="hello";
    char str2[20]="world";
    printf("length of str1=%lu\n",strlen(str1));{
    }
    strcpy(str2,str1);
    printf("after copying:%s\n",str2);
    return 0;
}