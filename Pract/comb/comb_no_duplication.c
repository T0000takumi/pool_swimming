#include<stdio.h>

/* 
    重複なしの配列をしたかった....
    参考：https://detail.chiebukuro.yahoo.co.jp/qa/question_detail/q13189852503
*/

int data[5] = {1, 2, 3, 4};
int use[5] = {0};

void sub(int num, int lev){

    int i;

    if(lev == 5){
        if((i = data[use[0]] + data[use[1]] + data[use[2]] + data[use[3]]) == 10){
            printf("%d %d %d %d（総和：%d)", data[use[0]], data[use[1]], data[use[2]], data[use[3]], i);
        }
        return ;
    }
    for(i = num + 1; i < 10; i++) sub(use[lev] = i, lev + 1);
    return ;
}

int main(void){

    int i;

    for(i = 0; i < 10; i++) sub(use[0] = i, 1);

    return 0;
}