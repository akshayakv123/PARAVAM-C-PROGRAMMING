#include<stdio.h>
int main(){
    int a,b, temp;

    printf("enter the number:");
    scanf("%d %d",&a,&b);

    printf("before swap:a=%d,b=%d\n",a,b);
    for(int i=0;i<1;i++){

        int temp=a;
        a=b;
        b=temp;
    }
    printf("after swap:a=%d,b=%d\n",a,b);
    return 0;
}
