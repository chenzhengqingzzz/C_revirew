//
// Created by chenzhengqing on 2024/10/31.
//

#include "stdio.h"

int main(){

    for(int i = 0; i < 67; i++){
        printf("%d\n", i);
    }
    int i = 0;
    while(i < 10){

        scanf("%d", &i);
        if(i == 6){
            break; // break只能跳出一层循环
//            i = 20; // 可以让它循环条件不成立 而不是用break
        }
        printf("%d\n", i);
    }
    printf("end");
    return 0;
}