#include <stdio.h>
#define MAXN 100010
int ass[MAXN];
int sol(int x){
    int res=0;
    for(int i=1;i<x;i++) if(x%i==0) res+=i;
    return res;
}
int main(){
    int n;scanf("%d",&n);
    for(int i=1;i<=n;i++) ass[i]=sol(i);
    for(int i=1;i<=n;i++) for(int j=1;j<i;j++) if(ass[i]==j&&ass[j]==i) printf("(%d,%d)\n",j,i);
    return 0;
}