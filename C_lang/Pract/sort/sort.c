#include <stdio.h>
#include <string.h>

/* 入力された数値を小さいもの順に並べ替える */

int main(){

    int ary[5];
    int temp;

    printf("\n通常の表示（数値入力）\n");
    for(int i = 0; i < 5; i++){
        scanf("%d", &ary[i]);
    }

    printf("\n昇順に数値を表示\n");
    for(int i; i < 5; ++i){
        for(int h = i + 1; h < 5; ++h){
            if(ary[i] > ary[h]){
                temp = ary[i];
                ary[i] = ary[h];
                ary[h] = temp;
            }
        }
    }

    for(int i; i < 5; ++i){
        printf("%d\n", ary[i]);
    }
    printf("\n");

    return 0;
}