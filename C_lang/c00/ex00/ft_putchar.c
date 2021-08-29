#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*
int main(void)
{
	char	var;

	var = 'a';
	ft_putchar(var);
	write(1, "\n", 1);
	return (0);
}
*/
