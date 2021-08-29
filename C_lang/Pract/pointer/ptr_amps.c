#include<stdio.h>

int *p;
int i;

/* 【p = &i】とした時の関数 */
void func(void){
    p = &i;

    printf("p  = %p\n", p);
    printf("&i = %p\n\n", &i);
}

/* ポインタと配列の関係性を示す関数 */
void func_test1(void){
    int *p, i;
    int a[10];

    p = a;      /* 「P = &a」は不成立, 「p = &a[0]」なら可. */

    for(i = 0; i < 10; i++){
        *(p + i) = 100 + i;     /* 「a[i] = 100 + i;」に同じ. */
    }
    for(i = 0; i < 10; i++){
        printf("%d\n", a[i]);
    }
    printf("\n");
}

/* 文字配列ver. */
void func_test2(void){
    char str[] = "hello";
    char *p;

    p = str;

    printf("引数に「p」を据えた時：%s\n", p);
    printf("引数に「*(p+1)」を据えた時 ：%c\n\n", *(p+1));
}

/* メイン関数 */
int main(void){
    printf("\n（1）【p = &i】とした時\n");
    func();

    printf("\n（2）配列のポインタを示す時\n");
    func_test1();

    printf("\n（3）文字列配列ポインタを示す時（文字配列strに対し、「char *p」を設置）\n");
    func_test2();

    return 0;
}


/* 参考： https://www.asahi-net.or.jp/~yf8k-kbys/c7.html */