#include <stdio.h>

int main(void){
    int a;
    int max,max_idx,smax,smax_idx;

    max_idx=-1;
    smax_idx=-1;
    max=-1;
    smax=-1;

    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        if(max<a){
            smax_idx=max_idx;
            smax=max;
            max_idx=i;
            max=a;
        }
        else if(smax<a){
            smax_idx=i;
            smax=a;
        }
    }
    printf("%d\n",smax_idx+1);
    return 0;
}