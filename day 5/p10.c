#include<stdio.h>

struct student
{
    char name[20];
    int age;
    float marks;

};
int main(){
    struct student s[3];
    for(int i=0; i<3; i++)
    {
        printf("enter name ,age,marks of student %d:",i+1);
        scanf("%s %d %f",s[i].name, &s[i].age, &s[i].marks);
    }
    printf("\n--- student details ----\n");
    for(int i=0; i<3; i++)
    {
        printf("%s %d %.2f\n", s[i].name,s[i].age,s[i].marks);
    }
    return 0;
}