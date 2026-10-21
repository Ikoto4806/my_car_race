#include <stdio.h>
const int tot[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int check(int x){
    if(x%4==0&&x%100!=0||x%400==0) return 1;
    return 0;
}
int invalid(int year,int month,int day){
    if(month==2&&day>tot[2]+check(year)) return 1;
    if(month!=2&&day>tot[month]) return 1;
    return 0;
}
int main(){
    int year,month,day,delta=0;
    scanf("%d-%d-%d",&year,&month,&day);
    if(invalid(year,month,day)){
        printf("Invalid input");
        return 0;
    }
    if(check(year)&&(month>=3||month==2&&day==29)) delta++; 
    for(int i=1990;i<year;i++) delta+=check(i)+365;
    for(int i=1;i<month;i++) delta+=tot[i];
    delta+=day;
    if(delta%5==0||delta%5==4) printf("rest");
    else printf("working");
    return 0;
}