#include <stdio.h> 
int main()
{
	char str[100], copy_str[100];
	char* pstr, * pcopy_str;
	int size = 0;
	pstr = str;
	pcopy_str = copy_str;
	printf("\n Enter the string : ");
	gets(str);
	while (*pstr != '\0')
	{
		*pcopy_str = *pstr;
		pstr++, pcopy_str++;
		size++;
	}
	*pcopy_str = '\0';
	pcopy_str -= size;
	printf("\n The copied text is : ");
	while (*pcopy_str != '\0')
	{
		printf("%c", *pcopy_str);
		pcopy_str++;
	}
	printf("\n");
	return 0;
}