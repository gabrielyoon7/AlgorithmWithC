#include <stdio.h> 
#include <conio.h> 
#include <string.h> 
int main()
{
	char Dest_Str[100], Source_Str[50];
	int i = 0, j = 0, count=0, cut=0;
	printf("\n Enter the source string : ");
	gets(Source_Str);
	printf("\n Enter the destination string : ");
	gets(Dest_Str);
	while (Dest_Str[i] != '\0')
		i++;
	count = i;
	while (Source_Str[j] != '\0')
	{
		Dest_Str[i] = Source_Str[j];
		i++;
		j++;
	}
	Dest_Str[i] = '\0';
	printf("\n How many first letters would you like to remain? :");
	scanf("%d", &cut);
	Dest_Str[count+cut] = '\0';
	puts(Dest_Str);
//	printf("%d, %d", count, cut);
	getch();
	return 0;
}