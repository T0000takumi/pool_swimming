#include <stdio.h>
#include <string.h>
#include<time.h>
  
void swap(char* x, char* y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void var_num(int temp2)
{
    for (temp2 = 1; temp2 < 10; temp2++)
    {}
}

void permute(char *a, int s, int t)
{
    int i;

    if (s == t) // 0 = str_len - 1（ 「str_len」はstr配列のインデックス数 ）
        printf("%s, ", a);
    else {
        for (i = s; i <= t; i++) { // 「i <= t」つまり、『インデックス総数までだよ』ということ。
            swap((a + s), (a + i));
            permute(a, s + 1, t); // 再帰関数
            swap((a + s), (a + i)); // バックトラック
        }
    }
}

int main()
{
    int time;
    long cpu_time;

    char str[] = "ABCDE";
    int str_len = strlen(str); // 配列のインデックス数を決定 → ここをいじれば0~9までのパターン出せるか？
    permute(str, 0, (str_len - 1));

    cpu_time = clock();
    printf("\nCPU時間: \t %ld \n", cpu_time);

    return 0;
}