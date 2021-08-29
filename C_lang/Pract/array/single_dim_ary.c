#include<stdio.h>
void func(void);
int n;


int main(){

    printf("（1）インデックス総数【N】を入力：\n");
    scanf("%d", &n);

    func();

    return 0;
}


void func(){
    int k;
    char ary[100];

    printf("（2）%d個のインデックスに格納される半角英数文字を%d回入力：\n", n, n);
    for(int i = 0; i <= n-1; i++){
        scanf("%s", &ary[i]);  
        printf("インデックス番号%dは「%c」\n", i, ary[i]);
    }

    printf("（3）抽出するインデックス番号【K】を指定：\n");
    scanf("%d", &k);
    printf("インデックス番号%dに入力された値は「%c」です\n", k, ary[k]);
}