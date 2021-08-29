#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			str[i] = str[i] - (97 - 65);
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char	input_str[5];
	char	output_str[5];
	int i;

	printf ("_ENTER English letters in a random order. (up to 5 characters)_\n");
	scanf("%s", input_str);

	ft_strupcase(input_str);
	// < *output_str = *ft_strupcase(input_str); > is NOT available.

	printf ("\n_Capitalized input-array._\n");
	printf("%s", input_str);

	return (0);
}
