#include<stdio.h>
#include<stdlib.h>

// プリプロセッサ処理(以下詳細)
#define N(ary) (sizeof(ary) / sizeof(ary[0]))

// プロトタイプ宣言
void	func_print_table(const int *ary, size_t size);
int	func_cmp(const void *a, const void *b);

//メイン関数
int	main (void)
{
	int	table[] = {66, 85, 70, 92, 61, 89};

	printf("\n");
	puts("ソート前");
	func_print_table(table, N(table));

	qsort(table, N(table), sizeof(int), func_cmp);

	puts("ソート後");
	func_print_table(table, N(table));
	printf("\n");

	return (0);
}

// 出力関数
void	func_print_table(const int *ary, size_t size)
{
	for(size_t i = 0; i < size; ++i)
		printf("%d\t", ary[i]);
	printf("\n");
}

// コールバック関数（qsort関数の第4引数）
int	func_cmp(const void *a, const void *b)
{
	int	aa = *(const int *)a;
	int	bb = *(const int *)b;

	if (aa < bb)
		return -1;
	else if (aa > bb)
		return 1;
	return (0);
}

/*
【コールバック関数 ~ int型による順序比較】
    ◉ 引数
        a:  比較する要素。
        b:  比較する要素。
    ◉ 戻り値：
        a の方が小さいとき負数、
        b の方が小さいとき 0 より大きい値、
        a と b が同じときは 0、
        が返される。


【マクロが実行するプリプロセッサ処理】
    #define N(ary) (sizeof(ary)/sizeof(ary[0]))
    ＝ #define 関数名(変数) (処理内容)
                    └ 引数
    また、「int a[10]」の時、「sizeof(a) == sizeof(int) * (要素数)」となることから、
    「sizeof(a) / sizeof(a[0]) ← 要素数10を示す」

    これを処理内容に入れている。
*/
