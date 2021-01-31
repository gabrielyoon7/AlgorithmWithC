#include <stdio.h>
#include <conio.h> 
#include <stdlib.h>
#include <time.h>
int main()
{
	int i, j, arr[100], tmp;
	srand(time(NULL));
	printf("3.	Write a program to interchange the second element with the second last element.\n");
	for (i = 0; i < 100; i++)
		arr[i] = rand() % 100;
	printf("How long is the array ? ");
	scanf("%d", &j);
	printf("\nBefore Array\n");
	for (i = 0; i < j; i++)
		printf("%d\t", arr[i]);
	tmp = arr[1];
	arr[1] = arr[j - 2];
	arr[j - 2] = tmp;
	printf("\nAfter Array\n");
	for (i = 0; i < j; i++)
		printf("%d\t", arr[i]);

	return 0;
}