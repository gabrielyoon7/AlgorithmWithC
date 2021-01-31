#include <stdio.h> 
#include <conio.h> 
#include <string.h> 
int main() {
	char Str1[100];
	int i = 0, alphabet_Upper[30] = { 0 }, alphabet_Lower[30] = {0};
	printf("\n Enter the string : ");
	gets(Str1);
	while (Str1[i] != '\0') {
		if (Str1[i] >= 65 && Str1[i] <= 90)
			alphabet_Upper[Str1[i]-65]++;
		else if (Str1[i] >= 97 && Str1[i] <= 122)
			alphabet_Lower[Str1[i] - 97]++;
		else{
			i++;
			i--;
			}
		i++;
	}
	for (i = 0; i <= 25; i++) {
		printf("\n%c : %d", i + 65, alphabet_Upper[i]);
		printf("\n%c : %d", i + 97, alphabet_Lower[i]);
	}
	getchar();
	return 0;
}