#include <stdio.h>
#include <string.h>
 
struct college_detail
{
    int college_id;
    char college_name[50];
};
 
struct student_detail 
{
    struct college_detail clg_data;
    int id;
    char name[20];
    float percentage;
}stu_data;
 
int main() 
{
    struct student_detail stu_data = {71145, "VIT University",1, "Raju", 90.5};
    printf(" Id is: %d \n", stu_data.id);
    printf(" Name is: %s \n", stu_data.name);
    printf(" Percentage is: %f \n\n", stu_data.percentage);
 
    printf(" College Id is: %d \n",   stu_data.clg_data.college_id);
    printf(" College Name is: %s \n", stu_data.clg_data.college_name);
    return 0;
}
