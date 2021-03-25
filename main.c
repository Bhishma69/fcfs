#include <stdio.h>
#include <stdlib.h>
int main() {
    int i , sum=0;
    int ihp=50;
    int diff;

    int rs[8];
    printf("enter eight track nos \n");
    for(i=0;i<8;i++){
        scanf("%d",&rs[i]);

    }
    for(i=0;i<8;i++){
        diff=abs(ihp-rs[i]);
        ihp=rs[i];
        sum=sum+diff;
    }
    printf("Total head movement is %d",sum);
    return 0;
}
