#include <stdio.h>
#include <conio.h> 
#include <stdlib.h>
#include <time.h>
int main()
{
	int i=0, j, arr1[3][3], odd[10], even[10], o=0, e=0;
	srand(time(NULL));
	printf("\narr1\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++) {
			arr1[i][j] = rand() % 100 + 1;
			if (arr1[i][j] % 2 == 0) {
				odd[o] = arr1[i][j];
				o++;
			}
			else {
				even[e] = arr1[i][j];
				e++;
			}
			printf("\t%d", arr1[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < o; i++) {
		printf("%d ", odd[i]);
	}
	printf("\n");
	for (i = 0; i < e; i++) {
		printf("%d ", even[i]);
	}
	return 0;
}
