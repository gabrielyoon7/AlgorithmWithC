#include <stdio.h> 
#include <conio.h> 
#include <string.h> 
int main() {
	char Str1[100];
	int i = 0, word = 1;
	printf("\n Enter the string : ");
	gets(Str1);
	while (Str1[i] != '\0') {
		if (Str1[i] == 32)
			word++;
		i++;
	}
	printf("\nword : %d", word);
	getchar();
	return 0;
}