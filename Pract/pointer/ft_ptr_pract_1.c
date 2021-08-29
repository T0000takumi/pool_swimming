#include<stdio.h>

void func_print(void)
{
    printf("\nHi there!\n");
}


intmain(void)
{
    /* 関数のメモリアドレスが表示 */
    printf("\nmain = %p\n", main);

    /* 関数ポインタを宣言（ void（*関数ポインタ変数名）(); ）*/
    void(*pf)();
    pf = func_print;

    printf("関数【func_print】のアドレス ＝ %p\n", func_print);
    printf("ポインタ関数【ｐf】のアドレス ＝ %p", *pf);

    /* ポインタ関数【pf】にコピーされたfunc_print()関数をアドレスを介して起動 */
    pf();
    printf("\n");

    return 0;
}
