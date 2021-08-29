#include<stdio.h>

void PrintNum(int num)
{
    printf("num = %d\n", num);
}

int main()
{
    void (*p_func)(int);
    p_func = PrintNum;

    (*p_func)(1); //旧
    p_func(2); //新

    return 0;
}

/* 最初 → 0_func.c */
