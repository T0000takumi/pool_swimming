#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int	func_replace(const void *x, const void *y)
{
	return strcmp((const char *)x, (const char *)y);
}

int	main()
{
	int	n;
	int	k;
	char	ary[10][10];

	scanf("%d %d", &n, &k);

	for (int i = 0; i < n; i++)
		scanf("%s", ary[i]);

	/* qsort(void *base, size_t nitems, size_t size, int (*compar)(const void *, const void*)); */
	qsort(ary, n, sizeof(ary[0]), func_replace);
	printf("\n%s\n", ary[k-1]);
	return (0);
}
