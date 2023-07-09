// structure => group (collection) of difrent type of variable.
// user difine data type.
#include<stdio.h>
#include<string.h>
struct student
{
    int roll_no;
    char name[50];
    int m,e,s,total;
    float per;
};
int main()
{
    struct student s[5];
    int i;
    for (i=0;i<2;i++)
    {
        printf("Enter Roll No.:");
        scanf("%d",&s[i].roll_no);
        printf("Enter Name:");
        scanf("%s",&s[i].name);
        printf("Enter Maths Marks:");
        scanf("%d",&s[i].m);
        printf("Enter English Marks:");
        scanf("%d",&s[i].e);
        printf("Enter Science Marks:");
        scanf("%d",&s[i].s);
    }
    printf("\nRoll_no\tName\tMaths\tEnglish\tScience\tTotal\tper");
    printf("\n--------------------------------------------------------");
    for(i=0;i<2;i++)
    {
        s[i].total = s[i].m + s[i].s +s[i].e;
        s[i].per = s[i].total / 3;
        printf("\n%d\t%s\t%d\t%d\t%d\t%d\t%.2f",s[i].roll_no,s[i].name,s[i].m,s[i].e,s[i].s,s[i].total,s[i].per);
       
    }
}

