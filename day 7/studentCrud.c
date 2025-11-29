#include<stdio.h>
#include<string.h>

struct Student
{
    int roll;
    char name [20];
    char branch[5];
    float marks;

};
void addStudent();
void displayStudent();
void updateStudent();
void deleteStudent();

int main(){
    int choice;
    while(1)
    {
        printf("\n========STUDENT CRUD SYSTEM======\n");
       printf("1.add Student\n");
       printf("2.display Student\n");
       printf("3.update Student\n");
       printf("4.delete Student\n");
       printf("5.exit\n");
       printf("enter your choice:\n");
       scanf("%d",&choice);

        switch(choice){
            case 1:addStudent();
            break;
            case 2:displayStudent();
            break; 
            case 3:updateStudent();
            break;
            case 4:deleteStudent();
            break;
            case 5:return 0;
            default:printf("invalid choice!\n");

        }
       }
    }
void addStudent(){
    FILE *fp=fopen("students.dat","ab");
    struct Student s;

    printf("enter roll :");
    scanf("%d",&s.roll);

     printf("enter name :");
    scanf("%s",&s.name);

     printf("enter branch :");
    scanf("%s",&s.branch);

     printf("enter marks :");
    scanf("%f",&s.marks);

    fwrite(&s,sizeof(s),1,fp);

    fclose(fp);
    printf("Student added sucessfully.\n");
}
void displayStudent(){
    FILE *fp=fopen("students.dat","rb");
    struct Student s;

    printf("\n---students records---\n");

    while(fread(&s,sizeof(s),1,fp)){
        printf("roll:%d name:%s branch:%s marks:%.2f\n",
        s.roll, s.name, s.branch, s.marks);  
    }
    fclose(fp);
}
void updateStudent(){
 FILE *fp=fopen("students.dat","rb");
 FILE *temp=fopen("temp.dat","wb");

 struct Student s;
 int rno, found=0;

 printf("enter roll number to update");
 scanf("%d",&rno);
 while(fread(&s,sizeof(s),1,fp))
{
  if(s.roll==rno){
        found=1;
        printf("enter new name:");
        scanf("%s",s.name);

        printf("enter new branch:");
        scanf("%s",s.branch);

        printf("enter new marks:");
        scanf("%f",s.marks);
    }
    fwrite(&s,sizeof(s),1,temp);
 }
 fclose(fp);
 fclose(temp);
{
 remove("students.dat");
 rename("temp.dat","students.dat");

 if(found)
 printf("record updated.\n");
 else
 printf("record not found.\n");
}

}
 void deleteStudent(){
 FILE *fp=fopen("students.dat","rb");
 FILE *temp=fopen("temp.dat","wb");
 struct Student s;
 int rno,found=0;
 
  printf("enter roll number to delete:");
 scanf("%d",&rno);
 while(fread(&s,sizeof(s),1 ,fp))
 {
  if(s.roll==rno){
    found=1;
  }else{
  fwrite(&s,sizeof(s),1,temp);
  }
}
 fclose(fp);
 fclose(temp);

 remove("students.dat");
 rename("temp.dat","students.dat");

 if(found)
    printf("record deleted successfully.\n");
else
    printf("record not found.\n");

 }


