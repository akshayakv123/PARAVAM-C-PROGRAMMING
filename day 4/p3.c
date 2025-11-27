#include<stdio.h>
  
   float
   simpleInterest(float p,float r,float t)
 {
    return(p*r*t)/100;
 }
 int main()
 {
    float p,r,t;
    printf("enter p,r,t:");
    scanf("%f %f %f",&p,&r,&t);
    printf("simpleInterest=%.2f\n",simpleInterest(p,r,t));
    return 0;
}
