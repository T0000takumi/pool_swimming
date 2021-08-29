#include<stdio.h>

/* グローバル変数とプロトタイプ宣言 */
int	var;
void	func(int num);

int	main() {

	var = 10;

	printf("\nここに表示されるのは、%dです。\n", var);
	printf("\nどこまで改行されるか、検証しています。\n");

	func(10);
	return (0);
}

void	func(int num) {

	int	a, b, c;
	int x = b + c;
	num = var = a + b + c;

	/* ここで表示される "%d", var の値が 9~10桁の 1213502592 っていうわけわからん値になる */
	printf("チェック：%d \n【num=a+b+c】が成立する等式を作ります。\n", var);

	/* for制御文は表示されない */
	for(a = 0; a < x; a++)
		printf("aが%dのとき、x=b+c=%d",a, (10-a));
}
