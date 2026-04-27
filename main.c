#include <stdio.h>
#include <stdint.h> //stdint.h 头文件包含了一些标准数据类型，如int8_t, uint16_t等，这些数据类型在不同平台上可能有所不同，但它们的大小和位数是一致的。
#include <stdlib.h> //stdlib.h 头文件包含了一些标准的库函数，如 malloc()、free()、exit()等。
#define VERSION "1.0.0"  //都是宏
#define PI (3.1415923)   //浮点宏 加括号是为了防止在使用时出现优先级问题
#define JZ (9)           //整数宏 加括号是为了防止在使用时出现优先级问题
#define MAX(a ,b) (((a) > (b)) ? (a) : (b)) //函数式宏
//以上都是预处理指令，宏常量，浮点，整数，函数式宏 都要加括号是为了防止在使用时出现优先级问题，整形不用加括号是因为它本身就是一个值，不会出现优先级问题，便于凭借

const char const arr[2] = {"admin1","admin2"};

int add(int a,int b);//函数声明

int main(){

    //char account[10] = {'admin1', 'admin2', 'admin3', 'admin4', 'admin5', 'admin6', 'admin7', 'admin8', 'admin9', 'admin10'};
    printf("Hello World! \n");

    // int num,num1,num2;
    // printf("请输入两个整数：");
    // int result = scanf("%d %d",&num1,&num2);
    // if(result != 2){
    //     printf("输入错误,请输入两个整数！\n");
    //     return 0;
    // }
    // num = add(num1,num2);
    // printf("两个整数的和为：%d\n",num);

    int i = 1;
    unsigned char *p = (unsigned char*)&i;
    //0小段，1 是大端
    int b = (*p == 1) ? 0 : 1 ;
    printf("b = %d\n",b);

    


    return EXIT_SUCCESS;

    
}

//函数定义
int add(int a,int b){
    return a + b;
}