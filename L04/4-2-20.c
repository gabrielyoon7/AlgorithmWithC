#include <stdio.h>
#include <conio.h> 
int main()
{
	char text[100], str[30], input_str[30], ins_text[100];
	int i = 0, j = 0, k = 0, a=0, pos;
	printf("\n Enter the main text : ");
	gets(text);
	printf("\n Enter the string to be inserted : ");
	gets(input_str);
	printf("\n Enter the position at which the string has to be inserted: ");
	scanf("%d", &pos);
	while (input_str[a] != '\0') {
		str[0] = 32;
		str[a + 1] = input_str[a];
		a++;
	}
	str[a + 1] = '\0';
	while (text[i] != '\0') {
		if (i == pos)
		{
			while (str[k] != '\0')
			{
				ins_text[j] = str[k];
				j++;
				k++;
			}
			break;
		}
		ins_text[j] = text[i];
		j++;
		i++;
	}
	while (text[i] != '\0') {
		ins_text[j] = text[i];
		j++;
		i++;
	}
	ins_text[j] = '\0';
	if (pos == i)
		printf("\n The new string is : %s%s\n", ins_text, str);

	else {
		printf("\n The new string is :");
		puts(ins_text);
	}
	getchar();
	return 0;
}