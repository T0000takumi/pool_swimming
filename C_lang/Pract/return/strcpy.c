#include <stdio.h>

char	*ft_strcpy(char *dest, char *src, unsigned int n)
{
	int	i = 0;
	while ((src[i] != 0) && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	*dest = '\0' //Terminate array dest.
	return (dest);
}

int	main()
{
	char	ary_origin[20] = "A";
	char	ary_cpy[20];

	printf("BEFORE_Origin: [%c]\n", *ary_origin);
	printf("BEFORE_Copy: [%c]\n", *ary_cpy);

	ft_strcpy(ary_cpy, ary_origin, 20);
	// < *ary_cpy = *ft_strcpy(ary_cpy, ary_origin, 20); > is able to apply.

	printf("AFTER_Origin: [%c]\n", *ary_origin);
	printf("AFTER_Copy: [%c]\n", *ary_cpy);

	return (0);
}
