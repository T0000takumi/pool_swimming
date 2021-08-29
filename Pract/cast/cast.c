#include <unistd.h>
#include <stdio.h>

/* 【参考】： https://bit.ly/3iPnRlG */

int	main()
{
	char	c[] = "a";
	char	str[10] = "Test";
	int	num = 7;

	/* 文字を直接入れ込む */
	write(1, "Test\n", 5);
	write(1, "x\n", 2);

	/* 変数代入 */
	write(1, &c, 2);
	write(1, "\t", 1);
	write(1, &str, 4);
	/* 実行できない
	write(1, str[1], 1);*/

	/* フォーマット指定子 */
	write(1, "\n", 1);

	/* 明示的な方変更、出ない....
	char ch = (char )num;
	write(1, &ch, 2);
	*/

	/* 0~9のdigitであれば、ｚ → 『 int i = 8; char c = '0' + 1; printf("%c", c); 』 */
	char	ch = '0' + num;
	write(1 ,&ch, 1);

	return (0);
}
