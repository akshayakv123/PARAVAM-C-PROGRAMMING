#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("newfile.txt","w");

    fputs("i love my india\n",fptr);
    fputs("we have events in college",fptr);

    fclose(fptr);

    return 0;
}