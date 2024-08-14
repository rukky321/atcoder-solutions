#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main(void){
    char s[100][101];
    int n;
    scanf("%d",&n);
    int max=0;
    int tmp;
    for(int i=0;i<n;i++){
        scanf("%s",s[i]);
        tmp=strlen(s[i]);
        if(tmp>max){
            max=tmp;
        }
    }
    for(int i=0;i<max;i++){
        int idx=n-1;
        for(int j=n-1;j>=0;j--){
            if(strlen(s[j]) > i){
                while(idx>j){
                    printf("*");
                    idx--;
                }
                printf("%c",s[j][i]);
                idx--;
            }
        }
        puts("");
    }
    return 0;
}