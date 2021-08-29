#include<stdio.h>
#include<stdlib.h>

int	func_cmp(int *x, int *y)
{
	int	xx = *((int *)x);	/* int *xx = (int *)x; に同じ */
	int	yy = *((int *)y);

	if (xx < yy)			/* 「return xx - yy;」の方が誤りのない感じになる */
		return 1;
	else if(xx > yy)
		return -1;

	return 0;
}

int	main()
{

	int	i;
	int	ary[10] = {2, 4, 7, 1, 19, 5, 42, 3, 6, 11};

	printf("\nソート前\t");
	for(i = 0; i < 10; i++)
	{
		if(i == 9)
			printf("%d\t", ary[i]);
		else
			printf("%d, ", ary[i]);
	}

	qsort(ary, 10, sizeof(int), func_cmp);

	printf("\nソート後\t");
	for (i = 0; i < 10; i++)
	{
		if(i == 9)
			printf("%d\n\n", ary[i]);
		else
			printf("%d, ", ary[i]);
	}

	return (0);
}

/*
	【qsort関数】qsort(base, n, sizeof, func_cmp);
	・<stdlib.h> を include する
	・base：	ソートする配列のポインタ
	・n：		配列の要素数
	・sizeof：	配列1要素分のサイズ（sizeof関数使用）
	・func_cmp：	比較関数（コールバック関数とも。voidポインタを2つ引数に取り、int を返す関数のポインタ）
*/
