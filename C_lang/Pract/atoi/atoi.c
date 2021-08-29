#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str);

int	main()
{
	char	input[100];
	int	output_result;

	/* 【スキャン集合体】 ^\n 改行以外を読み取る */
	printf("_ENTER 'SPACE', '- (or) +', 'NUM' and 'ARRAY' in that order._\n");
	scanf("%[^\n]", input);

	output_result = ft_atoi(input);

	/* もしくは printf("%d", ft_atoi(input)); */
	printf("%d", output_result);

	return(0);
}

int	ft_atoi(char *str)
{
	int	minus_count;
	int	result;
	int	minus_sign;

	/* 空白を通過 */	
	while ((*str == ' ') || (*str == '\b') || (*str == '\n')
		|| (*str == '\r') || (*str == '\f') || (*str == '\t') || (*str == '\v'))
	{
		str++;
	}

	/* プラスマイナスのところを通過 */
	minus_count = 0;
	while ((*str == '+') || (*str == '-'))
	{
		if (*str == '-')
		{
			++minus_count;
		}
		str++;
	}

	/* 数字になっているところだけを通過（それ以降の箇所はスルー） */
	result = 0;
	while ((*str >= '0') && (*str <= '9'))
	{
	/*
	【charからintに変換】 0~9 は、文字コードで言えば48〜５７。
	よって、48もしくは'0'を引けば数値に変換できる。
	最初が97なら、str[0]は9。よってこれが数値9となり、次で10倍され90に。
	さらに、str[2]の7が足され97になる。
	*/
		result += *str - '0';
		/* 桁を上げていく →  */
		result *= 10;
		str++;
	}
	result /= 10;

	if ((minus_count % 2) == 0)
		minus_sign = -1;
	else
		minus_sign = 1;
	result *= minus_sign;

	return (result);
}
