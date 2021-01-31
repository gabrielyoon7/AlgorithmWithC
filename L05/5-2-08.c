#include <stdio.h>
#include <string.h>
struct info {
	int h1;
	int h2;
}height;
int main()
{
	int add;
	int sub;
	height.h1 = 62;
	height.h2 = 54;
	add = height.h1 + height.h2;
	sub = height.h1 - height.h2;
	printf("\nadd : %d'%d\"", add/10, add%10);
	printf("\nsub : %d'%d\"", sub/10, sub%10);

	getch();
	return 0;
}
