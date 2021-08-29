#include <stdio.h>

/* Reffer to This; https://c-for-dummies.com/blog/?p=3896 */

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	while (dest[i] != '\0') //1. 配列の最後まで移動、while文完了時には (dest[i] == '\0') を満たす i を獲得。
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		if (i + 1 < size) //2. 最終的な i の値（配列destとsrcの合計インデックス数）は、指定のsizeより小さい。
		{
			dest[i] = src[j]; //3. 1を経た i が代入され、dest[i]（ = '\0'） に src[0] の値が代入されていく。
		}
		i++;
		j++;
	}
	return (i);
}

int main()
{
	char str1[20] = "_abc_def";
	char str2[10] = "_ghi_jkl_";
	char *tmp1, *tmp2;
	unsigned int result;

/* Pattern 1 */
	printf("WHEN |ft_strlcat(str1, str2, 20)|");
	result = ft_strlcat(str1, str2, 20);
	if (result < 20)
		printf("\n String was fully copied!");
	else
		printf("\n String truncated...");

	printf("\n\n");

/* Pattern 2 */
	printf("WHEN |ft_strlcat(str1, \"_123_456_789_\", 20)|");
	result = ft_strlcat(str1, "_123_456_789_", 20);
	if (result < 20)
		printf("\n String was fully copied!");
	else
		printf("\n String truncated...");

	return (0);
}