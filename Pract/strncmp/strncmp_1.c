#include <string.h>
// 自作strncmp関数
// 参考； https://www.geekpage.jp/programming/c/while-1.php

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i = 0;
	// while文で「変数だけ」があるときは、その変数が0でないことが条件となる。
	// !--n <==> !(--n) も、nがデクリメントして0にならないことを示している。
	while ((*s1 || *s2) && (i < n))
	{
		if (*s1 < *s2)
		{
			return (-1);
		}
		else if (*s1 > *s2)
		{
			return (1);
		}
		s1++;
		s2++;
		i++;
	}
	return (0);
}

int main()
{
	char str1[] = "5aabbccdd";
	char str2[10];

	printf("_INPUT_\n");
	scanf("%s", str2);

	printf("_RETURN_\n%d", ft_strncmp(str1, str2, 3));
	printf("\n_RETURN_\n%d", strncmp(str1, str2, 3));

	return (0);
}