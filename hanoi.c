#include <stdio.h>
void dfs(int n,char a,char b,char c){
    if(n<=0) return;
    if(n==1){printf("Move disk from %c to %c\n",a,c);return;}
    dfs(n-1,a,c,b);
    printf("Move disk from %c to %c\n",a,c);
    dfs(n-1,b,a,c);
}
int main(){
    int n;scanf("%d",&n);dfs(n,'A','B','C');
    return 0;
}