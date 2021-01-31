#include <stdio.h> 
#include <conio.h> 
int main()
{
	char Dest_Str[100], Source_Str[50];
	int i = 0, j = 0;
	printf("\n Enter the source string : ");
	gets(Source_Str);
	printf("\n Enter the destination string : ");
	gets(Dest_Str);
	while (Dest_Str[i] != '\0')
		i++;
	while (Source_Str[j] != '\0')
	{
		Dest_Str[i] = Source_Str[j];
		i++;
		j++;
	}
	Dest_Str[i] = '\0';
	printf("\n After appending, the destination string is : ");
	puts(Dest_Str);
	getch();
	return 0;
}