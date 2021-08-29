#include <stdio.h>
#include<string.h>

int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！
    // 5 1 3 4 5 12 6 8 1 3
    char ary[] = {'5', '1', '3', '4', '5', '12', '6', '8', '1', '3'};
    int ary_num;
    ary_num = (int)strlen(ary);
    
    printf("%d", ary_num);
    return 0;
}

/*
    12を【’’】で囲むと、次の警告が現れる
    warning: multi-character character constant [-Wmultichar]
*/