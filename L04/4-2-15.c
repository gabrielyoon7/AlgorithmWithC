#include <stdio.h> 
#include <conio.h> 
#include <string.h> 
int main() {
	char Str1[100];
	int i = 0, upper = 0, lower = 0, special = 0;
	printf("\n Enter the string : ");
	gets(Str1);
	while (Str1[i] != '\0') {
		if (Str1[i] >= 65 && Str1[i] <= 90)
			Str1[i] += 32;

		i++;
	}
	i = 0;
	printf("\n");
	while (Str1[i] != '\0') {
		printf("%c", Str1[i]);
			i++;
	}
	getchar();
	return 0;
}