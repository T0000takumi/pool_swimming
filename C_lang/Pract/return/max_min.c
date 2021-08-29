#include <stdio.h>

int	max(int m, int n);

int	main()
{
	int	cmp_var, var1, var2;

	/* var1の値を入力 */
	scanf("%d", &var1);
	/* var2の値を力 */
	scanf("%d", &var2);

	cmp_var = max(var1, var2);
	printf("%dの方が大きい。\n", cmp_var);

	return (0);
}

int	max(int m, int n)
{
	if(m > n)
		return m;
	return n;
}
