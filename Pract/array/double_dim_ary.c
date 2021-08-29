#include<stdio.h>
#include<string.h>

int	N, K, i, j;
char	*ary[][10];
char	temp[][10];

/* インデックスに文字を入力する関数 */
void	func_a(void)
{
	for (i = 0; i < N; i++)
	{
		scanf("%c, ", ary[i]);
		printf("ary[%d] = %c\n", i, ary[i]);
	}
}

/* 文字を辞書順に並び替える関数 */
void	func_b(void)
{
	printf("（3）入力されたアルファベットを辞書順に並び替え：\n");
	for (i = 0; i < N; i++)
	{
		for (j = i + 1; j < N; j++)
		{
			if (strcmp(ary[i], ary[j]) > 0)
			{
				strcpy(temp, ary[i]);
				strcpy(ary[i], ary[j]);
				strcpy(ary[j], temp);
			}
		}
	}
	for (i = 0; i < N; i++)
		printf("%c, ", ary[i]);
}

/* 指定したインデックスの文字を表示する関数 */
void	func_c(void)
{
	scanf("%d\n", &K);
	printf("（5）指定したインデックス番号の文字【ary[%d]】は、%cです。\n", K, ary[K]);
}

/* メイン関数 */
int main()
{
	printf("（1）【インデックス総数N】を入力：");
	scanf("%d\n", &N);

	printf("（2）【%d個】の各インデックスに格納される【%d個の半角アルファベット文字】を入力：\n", N, N-1);
	func_a();
	func_b();

	printf("（4）抽出する文字列のインデックス番号【K】を指定：\n");
	func_c();

	return (0);
}

/*
    この文章が無限ループする。問題は、「scanfがでないこと」「ループするトリガーがfor制御文になっていること」
    ってことは、forの中身を見直すべきか

    ③ 抽出する文字列のインデックス番号【K】を指定：
    → ary[0]は、aです。数値がインデックスの範囲を超えています。4以内で入力し直してください。

    グローバル変数のaryにポインタをつけたら、一発でwarningのようだ。
*/
