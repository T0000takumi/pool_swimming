#include<stdio.h>
#include<time.h>
# define N 30 /* 【;】 はいらない */

int main(){
    char ary [N] = "abcdefghijklmnopqrstuvwxyz";
    char ary2[N];
    int i, j;
    long cpu_time;

    for(i = 0 ; i < N ; i++){
        ary2[i] = ary[(N-1)-i]; // → b[0] = a[N-1], b[1] = a[N-2],  ... b[N-2] = a[1], b[N-1] = a[0]
        printf("%c\n", ary2[i]);
    }

    for(i = 0; i < 10000; i++){
        printf("計算中...\n");
    }

    cpu_time = clock();
    printf("CPU時間: \t %ld \n", cpu_time);

    return 0;
}
