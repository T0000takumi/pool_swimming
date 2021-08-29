#include<stdio.h>

int main(){

    int g, h, i;
    int ary[10] = {2, 4, 7, 1, 19, 5, 42, 3, 6, 11};

    g = sizeof(int);
    h = sizeof(ary);

    printf("\n「sizeof(int)」の値：%d\n", g);
    printf("「sizeof(ary)」の値：%d\n", h);

    if(h == g*10){
        size_t i = sizeof(ary) / sizeof(ary[0]);
        printf("\n「sizeof(ary)」の値は、「sizeof(int)」に配列aryの要素数を掛けた値に等しい\n\n");
    }

    return 0;
}

/*
    
    要素数[x] の 配列(ary) に sizeof演算子を適用したとき、
    「sizeof(ary) == sizeof(int) * x」となる

    これを応用し、
    int num, ary[10];
    const size_t num = sizeof(ary) / sizeof(a[0])
    とすれば nim = 10 となり、要素数を示すことができる。

    int arry[] = {1, 2, 3, 4, 5};

    assert(sizeof(arry) == sizeof(int) * 5);    // 成立
    size_t num = sizeof(arry) / sizeof(a[0]);   // 要素数10

*/