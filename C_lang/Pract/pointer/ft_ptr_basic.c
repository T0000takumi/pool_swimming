#include<stdio.h>

void hello(void){
    printf("hello\n");
}

int main(void)
{   /* ポインタ関数の呼び出し */
    void(*indirect_func)();
    indirect_func = hello;

    indirect_func();
    return 0;
}