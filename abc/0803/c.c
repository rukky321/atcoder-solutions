#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int min(int a,int b){
    if(a>b){
        return b;
    }
    else{
        return a;
    }
}

long long check_sum(int *a,int n,int x){
    long long sum=0;
    for(int i=0;i<n;i++){
        sum+=min(x,a[i]);
    }
    return sum;
}



int main(void){
    int n;
    int *a;
    long long m,sum=0;
    scanf("%d %lld",&n,&m);
    a=(int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    if(sum<=m){
        printf("infinite\n");
        return 0;
    }
    long long ans = 0;
    int left=0;
    int right=1000000000;
    int center;

    while(left<=right){
        center=(right+left)/2;
        long long cur = check_sum(a,n,center);
        if(cur<=m){
            left = center+1;
            ans = center;
        }
        else{
            right = center-1;
        }
    }
    printf("%d\n",ans);
    return 0;
}