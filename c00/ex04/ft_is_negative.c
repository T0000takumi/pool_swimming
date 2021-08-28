#include <stdio.h>
#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}
/*
int	main(void)
{
	int	num;

	write(1, "Enter any integer below.\n", 25);
	scanf("%d", &num);
	ft_is_negative(num);
	write(1, "\n", 1);
	return (0);
}
*/
