#include<stdio.h>
#include<string.h>

int main(void){

    char ary[10];
    char str[10] = "Buffalor";

    strcpy(ary, "白發中"); //文字列のコピー【strcpy関数】
    printf("%s\n", ary);
    
    /*
        for(int i = 0; i < 3; ++i){
            printf("%c", ary[i]);
        }
    */

    strncpy(ary, str, 5);   //文字数のコピー【strncpy関数】
    ary[5] = '\0'; // ※ ヌル文字を挿入し、<0> の表示を予防
    printf("%s\n", ary);

    return 0;
}


/*   
    （1）一次元配列 - 文字
        char ary[10] = {'k', 'y', 'o', 't', 'o'};
    （2）一次元配列 - 文字列
        char ar[] = "Yamaguchi University";
    （3）二次元配列 - 文字列
        char ary[5][10] = {"バッファロー", "タイガー", "ドルフィン", "ディアー"};
    （4）二次元配列 - 文字列
        char moij[6][10] ={
            {"ABCDEFG"},
            {"abcdefg"},
            {"HIJK"},
            {"hijk"},
            {"LMNOPQRS"},
            {"lmnopqrs"}
        };
    （5）三次元配列 - 文字列
        char cast [][2][30] = {
            {"レイ(綾波)", "シンジ(碇)"},
            {"アスカ(式波)", "マリ(真希波)"}
        };
*/