#include<stdio.h>

void	func() {

	signed short int	var1 = 0;
	signed short int	var2 = 0;

	/* 先にインクリメントして1になる → 代入されて、1 */
	printf("前置インクリメント後のvar = %d \n", ++var1);

	/* 0が代入される。その後インクリメントされるも、数値がないので動かない */
	printf("後置インクリメント後のvar = %d \n", var2++); 

	/* 先にデクリメントして0になる → 代入されて、0 */
	printf("前置デクリメント後のvar = %d \n", --var1); 

	/*
	0が代入される。その後デクリメントされるも、数値がないので動かない 
	って答え「1」... なんで?
	*/
	printf("後置デクリメント後のvar = %d \n", var2--); 
}

int	main(void){

	int	var = 1;

	printf("後置インクリメント後のvar = %d", var++);
	printf("\n前置インクリメント後のvar = %d \n", ++var);
	printf("後置デクリメント後のvar = %d \n", var--);
	printf("前置デクリメント後のvar = %d \n\n", --var);

	/* func(); */

	int i;
	int ary[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15} ;

	for (i = 0; i <= 15; i++)
		printf("後置インクリメント 第%dインデックス：%d\n", i , ary[i]);

	return (0);
}
