#include <stdio.h>
#include <string.h>

/* 入力された文字を小さいもの順に並べ替える */

int main(){

    char ary[100];
    char temp, *p;
    int g, h, i;

    printf("\n通常の表示（文字入力）\n");
    for(i = 0; i < 5; i++){
        p = &ary[i];
        scanf("%s", p);
    }

    printf("\n昇順に各文字列を表示\n");
        for(g = 0; g < 4; ++g){
            for(h = g + 1; h < 5; ++h){
                if(strcmp(&ary[g], &temp) == 0){
                    strcpy(&temp, &ary[g]);
                    strcpy(&ary[g], &ary[h]);
                    strcpy(&ary[h], &temp);
                }
            }
        }

    for(i = 0; i < 5; ++i){
        p = &ary[i];
        printf("%s\n", p);
    }

    printf("\n");

    return 0;
}

/*
    ＜注意＞
    scanf("%s", &ary[i]) ではない。 
    配列の変数（ここではary）は、配列の先頭を指す"ポインタ"でもある。
    元来 アドレスを引数に取るscanfでは、もともとポインタとしてもみなされる配列変数が設置されたなら'&'は不要となる。
    参考：https://www.asahi-net.or.jp/~yf8k-kbys/c7.html
*/