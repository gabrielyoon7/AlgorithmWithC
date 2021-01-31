#include <stdio.h>
#include <conio.h> 
#include<string.h>
int main() {
	char str[100], substr[100];
	int i = 0, j = 0, k=0, n, m;
	printf("\n Enter the main string : ");
	gets(str);
	printf("\n Enter the length of the substring: ");
	scanf("%d", &n);
	i = strlen(str);
	while (str[i-n] != '\0' && n > 0) {
		substr[j] = str[i-n];
		j++;
		n--;
	}
	substr[j] = '\0';
	while (substr[k] != '\0') {
		if (substr[k] >= 97 && substr[k] <= 122)
			substr[k] -= 32;
		k++;
	}
	printf("\n The substring is : ");
	puts(substr);
	getch(); return 0;
}