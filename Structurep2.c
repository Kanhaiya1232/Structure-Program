#include <stdio.h>
struct student
{
    int roll;
    char name[20];
    char grade;
    float subject[4];
    };
    void display(struct student x)
    {
        printf("Here the details\n");
        printf("name:%s\n",x.name);
        printf("roll no:%d\n",x.roll);
        printf("Grade:%c\n",x.grade);
        for(int i=0;i<4;i++)
        {
            printf("subject %d:%.2f\n",i+1,x.subject[i]);
        }
    }
    int main()
    {
        struct student x={10,"Manisha",'c',{77.22,56.20,46.50,33.45}};
        display(x);
        return 0;
    }