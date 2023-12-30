//Write the structiure for the fields names mark 1 mark 2 mark 3 read calculate avg of the marks and print the results
#include<stdio.h>
struct student
{
    int mark1;
    int mark2;
    int mark3;
    char name[30];
};

void calc(struct student s)
{
    float res=(s.mark1+s.mark2+s.mark3)/3;
    printf("Average is %f",res);
}
int main()
{
    struct student s;
    printf("Enter Three subject marks of the student");
    scanf("%d%d%d",&s.mark1,&s.mark2,&s.mark3);
    printf("Enter the student name");
    scanf("%s",s.name);
    calc(s);
    return 0;
}