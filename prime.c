#include <stdio.h>
int check(int x){
    for(int i=2;i*i<=x;i++) if(x%i==0) return 0;
    return 1;
}
int main(){
    int a,b,ans=0;scanf("%d,%d",&a,&b);
    for(int i=a;i<=b-2;i++) if(check(i)&&check(i+2)) {ans++;printf("(%d,%d)",i,i+2);}
    printf("\n%d",ans);
}