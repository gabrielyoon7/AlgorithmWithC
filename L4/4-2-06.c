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
			upper++;
		else if (Str1[i] >= 97 && Str1[i] <= 122)
			lower++;
		else if (Str1[i] == 32){
			special++;
			special--;
			}
		else
			special++;
		i++;
	}
	printf("\n Upper : %d", upper);
	printf("\n Lower : %d", lower);
	printf("\n Special : %d", special);
	getchar();
	return 0;
}