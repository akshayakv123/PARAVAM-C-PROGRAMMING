#include<stdio.h>
int main()
{
    char str[50];
    int i,count=0;
    
    printf("enter a word:");
    scanf("%s",str);

    for (i=0;str[i]!='\0';i++)
    {
        char ch=str[i];
         if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
            ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U' ) 
      {
       count++;
      }
    }
    printf("total vowels=%d",count);
    return 0;
}