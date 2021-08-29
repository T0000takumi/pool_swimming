#include <stdio.h>
#include <string.h>

int	main() {

	char str[5][50], temp[50];
	printf("Enter 5 words:\n");

	// Getting strings input
	for (int i = 0; i < 5; ++i) {
		fgets(str[i], sizeof(str[i]), stdin);
	}

	// storing strings in the lexicographical order
	for (int i = 0; i < 5; ++i) {
		for (int j = i + 1; j < 5; ++j) {

			// swapping strings if they are not in the lexicographical order
			if (strcmp(str[i], str[j]) > 0) {
				strcpy(temp, str[i]);
				strcpy(str[i], str[j]);
				strcpy(str[j], temp);
				//【strcpmp関数について】
				//「第x引数 < 第y引数」の場合はマイナスの値
				//「第x引数 > 第y引数」の場合はプラスの値
				//「第x引数 = 第y引数」の場合は0
			}
		}
   	}

	printf("\nIn the lexicographical order: \n");
	for (int i = 0; i < 5; ++i)
		fputs(str[i], stdout);

	return (0);
}
