#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int win[200001][3];

int max(int a,int b){
    if(a>=b){
        return a;
    }
    else{
        return b;
    }
}

int main(void){
    char *s;
    int n;
    scanf("%d",&n);
    s=(char*)malloc(sizeof(char)*(n+1));
    scanf("%s",s);
    win[0][0]=0;
    win[0][1]=0;
    win[0][2]=0;
    for(int i=1;i<=n;i++){
        if(s[i-1]=='R'){
            win[i][0] = max(win[i-1][1],win[i-1][2]);
            win[i][1] = max(win[i-1][0]+1,win[i-1][2]+1);
            win[i][2] = -1;
        }
        if(s[i-1]=='P'){
            win[i][0] = -1;
            win[i][1] = max(win[i-1][0],win[i-1][2]);
            win[i][2] = max(win[i-1][0]+1,win[i-1][1]+1);
        }
        if(s[i-1]=='S'){
            win[i][0] = max(win[i-1][1]+1,win[i-1][2]+1);
            win[i][1] = -1;
            win[i][2] = max(win[i-1][0],win[i-1][1]);
        }
    }
    int max=0;
    for(int i=0;i<3;i++){
        if(win[n][i]>max){
            max=win[n][i];
        }
    }
    printf("%d\n",max);
    return 0;
}