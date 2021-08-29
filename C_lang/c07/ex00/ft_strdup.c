#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*ptr;

	ptr = (char *)malloc(sizeof(src) + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (src[i] != '\0')
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[10] = "42Tokyo";
	char	*q;

	q = ft_strdup(str);
	str[1] = '0';
	printf("str = %s\n", str);
	printf("strdup(str) = %s\n", q);
	return (0);
}
*/
