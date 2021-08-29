#include<stdio.h>

/* 32の約数を表示する */

int	main()
{
	int	num = 32;
	int	i;

    /* do-while関数 */
	do
	{
		if(num % i == 0)
			printf("約数=%d\n", i);
		/* 0は入らないので、後置インクリメント */
		i++;
	}
	while (i <= num);

	return (0);
}
