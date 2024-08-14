#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int a[100][100][100] = {{{0}}};
int s[100][100][100] = {{{0}}};

int main(void){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                scanf("%d",&a[i][j][k]);
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                if(k-1 >= 0){
                    s[i][j][k] = s[i][j][k-1] + a[i][j][k];
                }
                else{
                    s[i][j][k] = a[i][j][k];
                }
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            for(int k=0;k<n;k++){
                s[i][j][k] += s[i][j-1][k];
            }
        }
    }

    int q;
    scanf("%d",&q);
    int xmin,xmax,ymin,ymax,zmin,zmax;
    for(int i=0;i<q;i++){
        scanf("%d %d %d %d %d %d",&xmin,&xmax,&ymin,&ymax,&zmin,&zmax);
        int sum=0;
        for(int i=xmin-1;i<=xmax-1;i++){
            sum+= s[i][ymax-1][zmax-1];
            if(ymin!=1){
                sum-=s[i][ymin-2][zmax-1];
            }
            if(zmin!=1){
                sum-=s[i][ymax-1][zmin-2];
            }
            if(zmin!=1&&ymin!=1){
                sum+=s[i][ymin-2][zmin-2];
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}