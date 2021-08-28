#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	if (*str == '\0')
		return ("1");
	while (str[i])
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
			str[i] = str[i] + (97 - 65);
		i++;
	}
	return (str);
}
/*
int main(void)
{
	char put_str[5];
	int i;

	printf ("_INPUT_ (up to 5 characters)\n");
	scanf("%s", put_str);

	printf ("\n_RETURN_\n");
	printf("%s", ft_strlowcase(put_str));
	return (0);
}
*/
