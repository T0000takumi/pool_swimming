#include <stdio.h>

#define g_fib_n 100

/*
	Piscine c05 ex03【Fibonacci Number】
	F[n]	=	F[n-1]	+	F[n-2]
	F[n+1]	=	F[n]	+	F[n-1]

	example) F[0] = 0, F[1] = 1, F[2] = 1, F[3] = 2, F[4] = 3...
	Ref) https://begin-javascript.set0gut1.com/function.html
		https://webkaru.net/clang/fibonacci-number/
		http://www1.cts.ne.jp/~clab/hsample/Rec/Rec3.html
		https://webkaru.net/clang/fibonacci-number/
*/

int	ft_fibonacci(int index)
{
	int	i;
	int	fib[g_fib_n];

	fib[0] = 0;
	fib[1] = 1;
	fib[2] = 1;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if ((index == 1) && (index == 2))
		return (1);
	i = 0;
	while (i < index)
	{
		fib[i] = fib[i-1] + fib[i-2];
		i++;
	}
	return (fib[i]);
}

int	main(void)
{
	int	index_num;

	printf("[NUMVER] ");
	scanf("%d", &index_num);
	printf("[ANSWER] %d", ft_fibonacci(index_num));
	return (0);
}