#include<stdio.h>

/* 0-100の範囲の入力を読む。それ以外の入力に対しては再入力を行う関数 */

int	read(void)
{
	int	data = -1;

	do
	{
		printf("数値入力_0~100");
		scanf("%d", &data);
	}
	while (data < 0 || 100 < data);
	return (data);
}

int	main(void){
	int	a, b;

	a = read(); 
	b = read();

	printf("a+b = %d", a+b);
	return (0);
}
