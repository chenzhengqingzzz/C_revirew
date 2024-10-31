//
// Created by chenzhengqing on 2024/10/31.
//

#include "stdio.h"

int main(){

    int AAA = 10;
    int BBB = 0;

    printf("请输入需要判断的AAA的整数：");
    scanf("%d", &AAA);
    if(AAA < 10 && AAA > 5){

        printf("AAA小于10且大于5");

        if(AAA < 5){
            printf("AAA小于5");
            if(AAA >= 0){
                printf("AAA不是负数");
            }
        }

    }
    return 0;
}