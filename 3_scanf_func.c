//
// Created by chenzhengqing on 2024/10/30.
//
#include "stdio.h"

int main(){
//    scanf()函数用于从标准输入流（通常是键盘）读取数据，并将其存储在指定的变量中。
//    scanf是一个给变量赋值的函数，将输入的值赋给变量，是最常用的给变量赋值的方式
//    我们是通过外部输入框来输入进去的
//    &表示取地址运算符，用于获取变量的内存地址。在scanf函数中，&运算符用于指定变量的地址，以便将输入的数据存储到该地址中。
      int AAA = 0;

      printf("请输入你需要修改后AAA的整数：");
      scanf("%d", &AAA);

      printf("AAA已成功修改为：%d", AAA);

      return 0;
}