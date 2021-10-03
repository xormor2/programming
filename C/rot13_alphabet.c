#include <stdio.h>
#include <string.h>

int main(void) {
	const char *alpha = "abcdefghijklmnopqrstuvwxyzabcdefghijklm";
	for (int i = 0; i < 26; i++) {
		printf("%c -> %c\n", alpha[i], strchr(alpha, alpha[i])[13]);
	}
	return 0;
}
