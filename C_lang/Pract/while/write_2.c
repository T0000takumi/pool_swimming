#include <unistd.h>

/* For Piscine [C00 ex07] and [C04 ex02] */

void ft_putnbr_1(int nb);
void ft_print(char var);

int main()
{
	int input_nb = -9;

	ft_putnbr(input_nb);
	return(0);
}

void ft_putnbr(int nb)
{
	long long int  large_nb;
	char var[30];
	char digit;
	int i;

	large_nb = (int ) nb;
	/* [1] 0の時 */
	if (large_nb == 0)
	{
		ft_print('0');
	}

	/* [2] 負の時 */
	if (large_nb < 0)
	{
		ft_print('-');
		large_nb = -large_nb;
		/*
			もしなかったら - が表示されるだけ。
			num = -7 なら、 num = -num とすることで num = -(-7) となり正数化できる。
			これにより [3] に進める。
		*/
	}

	/* [3] 配列へあてはめる */
	i = 0;
	while (large_nb > 0)
	{
		var[i] = large_nb % 10 + '0';
		/*
			やってることは、↓これと同じ。
			char y;
			int x = 5;
			y = x + '0';
			write(1, &y, 1);
			【OUTPUT】 5
		*/
		large_nb = large_nb / 10;
		i++;
	}

	/* 書き出し */
	i = i - 1; // もし「19」だったら、インデックス番号 3 まで入っちゃうので、-1 して初期化。
	while (i >= 0)
	{
		ft_print(var[i]);
		i--;
	}
}

void ft_print(char var)
{
	write(1, &var, 1);
}