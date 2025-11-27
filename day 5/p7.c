#include<stdio.h>
int main(){
    int arr[5]={1,3,5,7,9};
    int *p=arr;
    int sum=0;
    for(int i=0;i<5;i++){
        sum+=*(p+i);
    }
    printf("sum=%d\n",sum);
    return 0;

}