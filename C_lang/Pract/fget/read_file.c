#include<stdio.h>

void	func(void) {

	char moji[128];
	FILE *fp = NULL;

	/* 「読み込みモード」でファイルを開く */
	fopen_s(&fp, "meeting_saved.txt", "r");

	/* NULLポインタに到達するまでファイルから文字を1行ずつ読み込む */
	while (fgets(moji, 128 ,fp) != NULL) {
		/* 読み込んだ1文字を画面に出力する */
		printf("%s", moji);
	}

	fclose(fp);
}

int	main(void){

	char c;
	FILE *fp = NULL;

	/* 「読み込みモード」でファイルを開く */
	fopen_s(&fp, "meeting_saved.txt", "r");

	/* EOFに到達するまでファイルから文字を1文字ずつ読み込む */
	while ((c = fgetc(fp)) != EOF) {
		/* 読み込んだ1文字を画面に出力する */
		printf("%c", c);
	}

	fclose(fp);
	func();

	return (0);
}
