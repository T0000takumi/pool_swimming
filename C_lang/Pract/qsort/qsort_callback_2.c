#include<stdio.h>

int	func_cmp(int *x, int *y)
{
	int	xx = *((int *)x);
	int	yy = *((int *)y);

	return (xx - yy);
}

int	main()
{
	int	a, i, N;
	char	ary[10];

// 入力する配列要素数を決定
	printf("\n配列の要素総数N ＝ ");
	scanf("%d\n", &N);

// 文字を入力
	printf("\n%d個のインデックに格納される半角アルファベットを入力：", N);
	for(i = 0; i < N; i++)
		scanf("%c", &ary[i]);

// 入力順で表示
	printf("\n\n要素数%dの配列aryの文字を表示（入力順）：", N);
	for(i = 0; i < N; i++)
		printf("%c", ary[i]);

// クイックソート関数 〜 コールバック関数func_cmpへ遷移
	qsort(ary, N, sizeof(char), func_cmp);

// アルファベット順で表示
	printf("\n\n配列数%dの配列aryの文字を表示（アルファベット順）：", N);
	for(i = 0; i < N; i++)
		printf("%c", ary[i]);

// 表示させたい文字のインデックス番号を指定
	printf("\n表示させたい文字のインデックス番号（%d以下の数を入力）：", N);
	scanf("%d\n", &a);
	printf("インデックス番号%d：%c", a, ary[a]);

	return (0);
}
