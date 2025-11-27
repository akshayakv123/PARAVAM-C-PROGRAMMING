//pointer to function
#include<stdio.h>
void change(int *x){
    *x=200;

}
int main(){
    int a=20;
    change(&a);
    printf("a=%d",a);
    return 0;
    
}