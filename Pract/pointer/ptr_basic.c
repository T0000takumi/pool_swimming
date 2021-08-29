#include<stdio.h>

int main(){

    int var, *po;
    var = 10101;
    po = &var;

    printf("ポインタに格納されている内容 = %d\n", *po);
    printf("ポインタに格納されているアドレス = %p\n", po);

    /*
        ポインタに格納されている内容 = 10101
        ポインタに格納されているアドレス = 0x7ffeef255b6c
    	printf("ポインタに格納されているアドレス = %x", po);
	この場合型が違うため、エラー。
    */

    return 0;
}
