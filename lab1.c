#include <stdio.h>
#include <string.h>
#include <windows.h>
char input[10010];
int main(){
    SetConsoleOutputCP(65001);
    scanf("%s",input);
    int ans=0,cur=0,len=strlen(input);
    while(input[cur]>='0'&&input[cur]<='9'){
        ans=ans*10+input[cur]-'0';
        cur++;
    }
    while(cur<len){
        if(input[cur]=='+'){
            cur++;
            int num=0;
            while(input[cur]>='0'&&input[cur]<='9'){
                num=num*10+input[cur]-'0';
                cur++;
            }
            ans+=num;
            continue;
        }
        else if(input[cur]=='-'){
            cur++;
            int num=0;
            while(input[cur]>='0'&&input[cur]<='9'){
                num=num*10+input[cur]-'0';
                cur++;
            }
            ans-=num;
            continue;
        }
        else if(input[cur]=='*'){
            cur++;
            int num=0;
            while(input[cur]>='0'&&input[cur]<='9'){
                num=num*10+input[cur]-'0';
                cur++;
            }
            ans*=num;
            continue;
        }
        else if(input[cur]=='/'){
            cur++;
            int num=0;
            while(input[cur]>='0'&&input[cur]<='9'){
                num=num*10+input[cur]-'0';
                cur++;
            }
            ans/=num;
            continue;
        }
        else if(input[cur]=='='){
            break;
        }
        else{
            printf("错误的运算符:%c",input[cur]);
            return 0;
        }
    }
    printf("%d",ans);
    return 0;
}