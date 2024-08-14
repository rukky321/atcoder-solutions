#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main(void){
    int n,t,a;
    scanf("%d %d %d",&n,&t,&a);

    if(abs(t-a) > n-t-a){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}