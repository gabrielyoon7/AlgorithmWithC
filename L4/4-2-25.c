#include <stdio.h>

int main() {
	char str;

	printf("write something here : ");
	str = getchar();
	printf("\nwhat you wrote : ");
	while (str!='\0') {
		printf("%c", str);
		str = getchar();
	}
	return 0;
}
