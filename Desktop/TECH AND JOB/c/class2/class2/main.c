//  Created by celinecheng on 14/11/4.
//  Copyright (c) 2014年 celinechin. All rights reserved.
//
/*
#include <stdio.h>
#define num 9
void main()
{
    int i,j,iv[num],max,min;
    for(i=0;i<num;i++)
        scanf("%2d",&iv[i]);
    printf("array b:\n");
    
    for(i=0;i<num-1;i++)
        for(j=1;j<num)
            if(iv[i]>iv[j])
                max=i;//=iv[i];
                min=iv[j];
            //if(j!=i)ref=iv[i];
            //
    printf("%9d \n",sv);
}
#include <stdio.h>
void main()
{
    float x[9];
    float max,min,aver,sum;
    int i;//
    printf("请依次输入评委评的分数\n");
    for(i=0;i<9;i++)
    {
        printf("第%d位：",i+1);
        scanf("%f",&x[i]);
    }
    max=min=x[0];
    for(i=0;i<9;i++)
    {
        if(max<x[i]) max=x[i];
        if(min>x[i]) min=x[i];
    }
    printf("去掉一个最高分：%f",max);
    printf("去掉一个最低分：%f",min);
    for(i=0;i<9;i++)
    {
        sum=sum+x[i];
    }
    sum=sum-max-min;
    aver=sum/7;
    printf("最后的平均分是：%f\n",aver);
}*/
#include <stdio.h>
int main(){
    //char s="\t";
    int step,lower,upper;
    float current,c;
    step=20;
    lower=0;
    upper=300;
    current=lower;
    while(current<upper){
        c=(current-32 )*5/9;
        printf("\t%3.0f\t%6.1f\n",current,c);
        current+=step;
    }    return 0;
}


