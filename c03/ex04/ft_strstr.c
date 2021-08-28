#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			while (*str == *to_find)
			{
				to_find++;
			}
			return (str);
		}
		str++;
	}
	if (*to_find == '\0')
		return (NULL);
	return (NULL);
}
/*
int main()
{
	char str1[20] = "abc_def_ghi_jkl";
	char str2[20] = "i_";
	char *tmp1, *tmp2;

	printf("_WHEN FIND [i_ ]_: ");
	printf("%s\n", ft_strstr(str1, str2));

	printf("_WHEN FIND [def]_: ");
	tmp1 = ft_strstr(str1, "def");
	printf("%s\n", tmp1);

	printf("_WHEN FIND [str]_: ");
	tmp2 = ft_strstr(str1, "str");
	printf("%s\n", tmp2);

	return (0);
}
*/
