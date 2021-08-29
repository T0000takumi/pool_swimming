#include <stdio.h>
#include <string.h>
  
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a[] = {8, 0, 1};
    int b[] = {7, 4, 2};
    int i;
    
    printf("【スワップ前】\n");
    printf("a = %d%d%d, b = %d%d%d\n", a[0], a[1], a[2], b[0], b[1], b[2]);

    printf("【スワップ後】\n");
    swap(&a[1], &b[1]); // スワップ関数へジャンプ
    printf("a = %d%d%d, b = %d%d%d\n", a[0], a[1], a[2], b[0], b[1], b[2]);

    return 0;
}