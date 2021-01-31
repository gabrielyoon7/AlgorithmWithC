#include <stdio.h> 
#include <conio.h> 
#include <string.h> 
int main()
{
	char Str1[100], Str2[50];
	int s1c = 0, s1f=0, s2c = 0, s2f=0;
	printf("\n Enter the first string : ");
	gets(Str1);
	printf("\n how many letters keep from first string? : ");
	scanf("%d", &s1f);
	Str1[s1f] = '\0';
	getchar();

	printf("\n Enter the second string : ");
	gets(Str2);
	printf("\n how many letters keep from second string? : ");
	scanf("%d", &s2f);
	Str2[s2f] = '\0';
	puts(Str1);
	puts(Str2);
	getchar();
	return 0;
}