#include <stdio.h>
#include <stdint.h> //stdint.h 头文件包含了一些标准数据类型，如int8_t, uint16_t等，这些数据类型在不同平台上可能有所不同，但它们的大小和位数是一致的。
#include <stdlib.h> //stdlib.h 头文件包含了一些标准的库函数，如 malloc()、free()、exit()等。
#include <string.h> //string.h 头文件包含了一些字符串处理函数，如 strcpy()、strcmp()等。
#define VERSION "1.0.0"  //都是宏
#define PI (3.1415923)   //浮点宏 加括号是为了防止在使用时出现优先级问题
#define JZ (9)           //整数宏 加括号是为了防止在使用时出现优先级问题
#define MAX(a ,b) (((a) > (b)) ? (a) : (b)) //函数式宏
//以上都是预处理指令，宏常量，浮点，整数，函数式宏 都要加括号是为了防止在使用时出现优先级问题，整形不用加括号是因为它本身就是一个值，不会出现优先级问题，便于凭借

const char *arr[] = {"admin1","admin2"};//字符串常量数组，const char const *arr[2] 是一个指向字符串常量的指针数组，arr[0] 指向 "admin1"，arr[1] 指向 "admin2"
//字符串常量二维数组，const char const str[2][7] 是一个二维字符数组，str[0] 是一个包含 "admin1" 的字符串，str[1] 是一个包含 "admin2" 的字符串
//字符串常量二维数组，const char const str[2][7] = {"admin1","admin2"}; 等价于
const char str[2][7] = {
    {"admin1"},
    {"admin2"}
}; 

//结构体定制 每一个变量都有自己的内存空间，结构体可以将多个不同的结构体在组合成一个新的复杂的数据结构
typedef struct{
    char name[10];
    int age;
} UserInfo;

//联合体 所有的变量都共用一个内存空间，联合体可以将不同的数据类型在组合成一个新的复杂的数据结构
typedef union{
    int page;
    int pageNum;
    char name[10];
} Params;

//枚举 枚举类型是一组命名整数常量，每个常量都有一个唯一的整型值，常量的值可以是任意整数，但一般用从0开始的连续整数。枚举类型可以用来代替整数常量，使代码更易读、更易理解。
typedef enum{
    red,
    green,
    blue
} color;


int add(int a,int b);//函数声明

//函数定义
int add(int a,int b){
    return a + b;
}

void update(int *a,char *b);

void update(int *a,char *b){
    *a = 20;
    b[0] = 'A';
}

int main(){

    //char account[10] = {'admin1', 'admin2', 'admin3', 'admin4', 'admin5', 'admin6', 'admin7', 'admin8', 'admin9', 'admin10'};
    printf("Hello World! \n");
    UserInfo user;
    user.age = 18;
    
    strcpy(user.name,"admin");
    printf("user age = %d\n",user.age);
    printf("user name = %s\n",user.name);

    Params params;
    params.page = 100;
    printf("params page = %d\n",params.page);
    update(&params.page,user.name);
    printf("params page = %d\n",params.page);
    printf("user name = %s\n",user.name);

    printf("enum color red = %d\n",red);
    printf("enum color green = %d\n",green);    
    printf("enum color blue = %d\n",blue);

    // int num,num1,num2;
    // printf("请输入两个整数：");
    // int result = scanf("%d %d",&num1,&num2);
    // if(result != 2){
    //     printf("输入错误,请输入两个整数！\n");
    //     return 0;
    // }
    // num = add(num1,num2);
    // printf("两个整数的和为：%d\n",num);

    // 验证cpu 内存时大端还是小端
    // int i = 1;
    // unsigned char *p = (unsigned char*)&i;
    // //0小段，1 是大端
    // int b = (*p == 1) ? 0 : 1 ;
    // printf("b = %d\n",b);

    char str2[10] = "admin12345";
    char key = 0x55;
    // for (int i = 0; i < 10; i++){
    //     str2[i] ^= key;//加密
    // }
    // printf("加密后：%s\n",str2);
    // for(int i = 0; i < 10; i++){
    //     str2[i] ^= key;//解密
    // }
    // printf("解密后:%s\n",str2);
    // printf("版本号:%s\n",sizeof(str2));

    printf("地址：%p\n",&str2);

    //指针函数
    int (*funcAdd)(int,int);
    funcAdd = add;
    int result = funcAdd(10,20);
    printf("10+20=%d\n",result);
    

    return EXIT_SUCCESS;

    
}

