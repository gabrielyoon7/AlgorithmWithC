#include <stdio.h> 
#include <conio.h> 
#include <string.h> 
int main() {
	char Str1[100];
	int i = 0, the = 0;
	printf("\n Enter the string : ");
	gets(Str1);
	while (Str1[i] != '\0') {
		if (Str1[i] == 116 && Str1[i+1] == 104 && Str1[i+2]== 101)
			the++;
		i++;
	}
	printf("\nthe : %d", the);
	getchar();
	return 0;
}