#include <stdio.h>
#include <conio.h> 
#include <stdlib.h>
#include <time.h>
int main()
{
	int i, j, num, num_tmp, digits=0;
	printf("23.	Write a program to enter a number and break it into n number of digits.\n");
	scanf("%d", &num);
	num_tmp = num;
	while (num_tmp != 0) {
		num_tmp /= 10;
		digits++;
	}
	for (i = 0; i < digits; i++) {
		printf("%d ", num % 10);
		num /= 10;
	}
	return 0;
}
