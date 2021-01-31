#include <stdio.h> 
#include <conio.h> 
#include <string.h> 
int main()
{
	char Str1[100], change=0, replace=0;
	int i = 0;
	printf("\n Enter the string : ");
	gets(Str1);
	printf("\n What character do you want to change? : ");
	change=getchar();
	getchar();
	printf("\n What character do you want to replace? : ");
	replace=getchar();
	getchar();
	while (Str1[i] != '\0') {
		if (Str1[i] == change)
			Str1[i] = replace;
		i++;
	}
	puts(Str1);
	getchar();
	return 0;
}