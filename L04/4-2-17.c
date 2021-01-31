#include <stdio.h> 
#include <conio.h> 
#include <string.h> 
int main() {
	char Str1[100], Str2[100];
	int len1, len2, i=0;
	printf("\n Enter the first string : ");
	gets(Str1);
	len1 = strlen(Str1);
	printf("\n Enter the second string : ");
	gets(Str2);
	len2 = strlen(Str2);
	if (len1 != len2) {
		printf("length is different.\n");
		getchar();
		return 0;
	}
	while (Str1[i] != '\0') {
		if (Str1[i] >= 65 && Str1[i] <= 90)
			Str1[i] += 32;
		if (Str2[i] >= 65 && Str2[i] <= 90)
			Str2[i] += 32;
		i++;
	}
//	puts(Str1);
//	puts(Str2);
	i = 0;
	while (Str1[i] != '\0') {
		if (Str1[i] != Str2[i]) {
			printf("different.\n");
			getchar();
			return 0;
		}
		i++;
	}
	printf("\nSame.");
	getchar();
	return 0;
}