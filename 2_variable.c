//
// Created by chenzhengqing on 2024/10/30.
//

#include "stdio.h"

int main(){
    int AAA = 6;
    float BBB = 6.66;
    char CCC = 'G';
//    占位符，不同的变量有不同的占位符
//    %d  整数
//    %f  浮点数
//    %c  字符
//    %s  字符串
//    \r  回车
//    \n  换行
//    %.2f  保留两位小数
    printf("%d\r\n", AAA);
    printf("%.2f\n", BBB);
    printf("%c\n", CCC);



    return 0;
}