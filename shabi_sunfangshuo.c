#include <stdio.h>
typedef struct{
    int year,month,day;
}date;
typedef struct{
    char department[20];
    char job_title[20];
    char position[20];
}job;
typedef struct{
    char name[20];
    char sex[20];
    date birthday;
    job current_job;
}stu;

int main(){
    int max_id=0,min_year=0x3f3f3f3f,min_month=0x3f3f3f3f,min_day=0x3f3f3f3f;
    stu a[5];
    for(int i=0;i<5;i++){
        scanf("%s%s%d%d%d%s%s%s",&a[i].name,&a[i].sex,&a[i].birthday.year,&a[i].birthday.month,&a[i].birthday.day,&a[i].current_job.department,&a[i].current_job.job_title,&a[i].current_job.position);
        if(min_year>a[i].birthday.year||min_year==a[i].birthday.year&&min_month>a[i].birthday.month||min_year==a[i].birthday.year&&min_month==a[i].birthday.month&&min_day>a[i].birthday.day){
            max_id=i,min_year=a[i].birthday.year,min_month=a[i].birthday.month,min_day=a[i].birthday.day;
        }
    }
    printf("%s",a[max_id].name);
    //123456
    return 0;
}