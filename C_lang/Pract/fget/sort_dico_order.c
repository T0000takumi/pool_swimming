#include<stdio.h>
#include<string.h>

int	main() {
	char str[5][50];
	char temp[50];

	printf("異なる半角英数を5つ入力してください：\n");
	for (int i = 0; i < 5; ++i) {
		printf("%d回目の入力｜インデックス番号%dの語：", (i + 1), i);
		fgets (str[i], sizeof(str[i]), stdin);
	}

	for (int i = 0; i < 4; ++i) {
		for (int j = i + 1; j < 5; ++j) {
			if (strcmp(str[i], str[j]) > 0) {
				strcpy(temp, str[i]);
				strcpy(str[i], str[j]);
				strcpy(str[j], temp);
			}
		}
	}

	printf("\n入力された単語を辞書順に並べ変えます：\n");
	for (int i = 0; i < 5; ++i)
		fputs(str[i], stdout);
	return (0);
}
