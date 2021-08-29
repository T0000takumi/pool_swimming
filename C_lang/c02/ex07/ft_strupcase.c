#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	if (*str == '\0')
		return ("1");
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
			str[i] = str[i] - (97 - 65);
		i++;
	}
	return (str);
}
/*
int main(void)
{
	char input_str[5];

	scanf("%s", input_str);
	ft_strupcase(input_str);
	printf("%s", ft_strupcase(input_str));
	return (0);
}
*/
