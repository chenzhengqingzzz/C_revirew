//
// Created by chenzhengqing on 2024/11/5.
//

#include "stdio.h"

int main(){

     int input;

     while(1){
         printf("guess the size:");
         scanf("%d", &input);
         if(input < 66){
             printf("too small\n");
         }else if(input > 66){
             printf("too big\n");
         }else{
             printf("bingo!\n");
             break;
         }
     }

    return 0;
}