#include <stdio.h>

int main(void){
    int y;
    scanf("%d",&y);

    if(y%4!=0){
        printf("365\n");
    }
    else if(y%100!=0){
        printf("366\n");
    }
    else if(y%400!=0){
        printf("365\n");
    }
    else{
        printf("366\n");
    }
    return 0;
}