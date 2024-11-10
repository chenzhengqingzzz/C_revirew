//
// Created by chenzhengqing on 2024/11/10.
//
#include "stdio.h"
#include "string.h"

int main(){

    int AAA[4] = {1, 2, 3, 4};

    AAA[2] = 6;

    printf("%d\n", AAA[1]);
    printf("%d\n", AAA[2]);

    for(int i = 0; i < 4; i++){
        scanf("%d", &AAA[i]);
    }
    for(int i = 0; i < 4; i++){
        printf("%d\n", AAA[i]);
    }

    for(int i = 0; i < 4 - 1; i++){

        for(int j = 0; j < 4 - 1 - i; j++){
            if(AAA[j] < AAA[j + 1]){

                int temp = AAA[j];
                AAA[j] = AAA[j + 1];
                AAA[j + 1] = temp;
            }
        }
    }
    printf("冒泡排序后的结果为：");
    for(int i = 0; i < 4; i++){
        printf("%d\n", AAA[i]);
    }

    char BBB[30];

    strcpy(BBB, "陈正清");//数组名字就可以代表地址

    printf("result：%s\n", BBB);

    int number[3][4] = {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}
    };
    for(int i = 0; i < 3; i++){ //遍历列数字
        for (int j = 0; j < 4; j++){ //遍历行数字
            printf("%d\n", number[i][j]);
        }

    }

    return 0;
}