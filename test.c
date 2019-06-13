#include <stdlib.h>
#include <stdio.h>
//测试使用
//test 123本地
//test 本地第二次
int a = 0, b = 2;
char *buf = "测试文件修改";
int main(){
    printf("a = %d\n",a);
    printf("hello\n");
    a = 3;
    printf("a = %d\n",a);
    return 1;
}
