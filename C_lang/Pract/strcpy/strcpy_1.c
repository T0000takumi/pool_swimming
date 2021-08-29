#include<stdio.h>
#include<string.h>

int main()
{
    char str[100][100];
    char tmp[100]; // [100] を付けないと、アドレスにならない！
    
    // s = インデックス総数, t = 変数, r = 指定するインデックス番号のポインタ
    int s, t, r;

    // インデックス総数【s】を指定
    scanf("%d", &s);
    printf("\n");

    // 各配列に格納する文字列を指定
    for(t = 0; t < s; ++t)
        fgets(str[t], sizeof(str[t]), stdin);

    // 文字列をソート
    printf("ソート後：");
    for(t = 0; t < s; ++t){
        for(r = t + 1; r < s; ++r){
            /*
                if(strcmp(str[t], str[r]) > 0) でもOK
            */
            if(str[t] > str[r]){
                strcpy(tmp, str[t]);
                strcpy(str[t], str[r]);
                strcpy(str[r],  tmp);
            }
        }
    }

    // ソートし文字列を表示
    for(t = 0; t < s; ++t)
        fputs(str[t], stdout);

    printf("\n");

    return 0;
}

// 参考URL：https://bit.ly/3f9ckLY