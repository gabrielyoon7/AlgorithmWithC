#include <stdio.h>
#include <conio.h> 
#include<string.h>
int main() {
	char str[100] = "Good Morning", substr[100] = "Even";
	int i = 0;
	for (int j = 5; j < 9; j++) {
		str[j] = substr[i];
		i++;
	}
	printf("%s", str);
	getch(); return 0;
}