#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("newfile.txt","w");

    fputs("i am namitha gowda\n",fptr);
    fputs("i am very naugthy",fptr);

    fclose(fptr);

    return 0;
}