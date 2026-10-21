#include <stdio.h>
#include "calc.h"
int main(){
    int a,b;
    update_clock();
    scanf("%d %d",&a,&b);
    printf("add=%d,now_clock=%d",add(a,b),clock);
    return 0;
}