#include<stdio.h>

/* 参考 https://detail.chiebukuro.yahoo.co.jp/qa/question_detail/q13189852503 */
/* 重複なしのク組み合わせをしたかった... 「1, 2, 3 ,4 から4つ選んで、総和が10」 */

int main()
{
    int i, j, k;
    int c = 0;
    int n = 10;
    int r = 4;
    int d[4+1];

    int a[] = {1, 2, 3, 4};

    for(i = 0; i <= r; ++i) d[i] = i;
    while(d[0] <= 0)
    {
        k = 0;
        for(i = 1; i <= r; ++i) k += a[d[i] + 1];
        if(k == 10)
        {
            c++;
            for(i = 1; i <= r; ++i) printf(1 < i? "+%d" : "%d", a[d[i]-1]);
            printf("= %d\n", k);
        }
        for(j = r; 0 <= j; --j)
        {
            ++d[j];
            for(k = j + 1; k <= r; ++k) d[k] = d[k-1] + 1;
            if(d[j] <= n - r + j) break;
        }
    }
    return !printf("[%d]\n", c);
}