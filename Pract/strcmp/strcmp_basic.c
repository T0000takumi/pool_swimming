#include<stdio.h>
#include<string.h>

int main(void)
{
	char str1[256];
	char str2[] = "DRAGON";

	/*	
		【変数 = strcmp(文字配列1,文字配列2)】
		この関数は、2つの文字配列の中身が同じである場合には0を返します。
	*/

	scanf("%s", str1);

	if(strcmp(str1, str2) == 0){
		printf("同じ\n");
	}else{
		printf("違う\n");
	}
		
	return 0;
}