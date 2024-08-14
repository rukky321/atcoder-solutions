#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int a[200000];

int main(void){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int x;
        int is_sorted=1;
        for(int j=0;j<n;j++){
            scanf("%d",&a[j]);
            if(j+1!=a[j]){
                is_sorted=0;
            }
        }
        if(is_sorted==1){
            printf("0\n");
        }
        else{
            if(a[0]==n&&a[n-1]==1){
                printf("3\n");
            }
            else{
                int max=0;
                int op_count=2;
                for(int j=0;j<n;j++){
                    if(a[j]==j+1){
                        if(max<a[j]){
                            op_count=1;
                        }
                    }
                    if(max<a[j]){
                        max=a[j];
                    }
                }
                printf("%d\n",op_count);
            }
        }
    }
    return 0;
}