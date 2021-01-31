#include <stdio.h>
#include <conio.h> 
#include <stdlib.h>
#include <time.h>
int main()
{
	int i, j, arr1[3][3], counter=0;
	srand(time(NULL));
	printf("\narr1\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++) {
			arr1[i][j] = rand() % 2 + 0;
			if (arr1[i][j] == 0)
				counter++;
			printf("\t%d", arr1[i][j]);
		}
		printf("\n");
	}
	printf("\n%d zero elements\n", counter);

	return 0;
}
