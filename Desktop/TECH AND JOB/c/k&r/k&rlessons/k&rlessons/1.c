#include <stdio.h>

void main(){
    int i,j,n=1;
    int flag;
    for(i=2;i<200;i++){
        flag=1;
        for(j=2;j<i;j++){
            if(i%j==0){
                flag=0;
                break;
            }
        }
        if(flag){
            if(n%6==0)printf("%4d\n",i);
            else printf("%4d",i);
            n++;
        }
    }
    printf("\n");
}
