#include <stdio.h>
#include <conio.h> 
#include<time.h>
int main()
{
	int i, j, ans=0;
	srand(time(NULL));

	 struct number
	{
		int numb[3];
	} num;
	 printf("Three numbers : ");
	for (i = 0; i < 3; i++) {
		num.numb[i]=rand()%100+1;
		printf("%d ", num.numb[i]);
		ans = num.numb[i];
	}
	for (i = 0; i < 3; i++) {
		if (num.numb[i] <= ans)
			ans = num.numb[i];
	}

	printf("\nSmallest number? : ");
	scanf("%d", &j);
	if (j == ans)
		printf("\nRight!!");
	else
	{
		printf("\nWrong!!");
	}

	getch();
	return 0;
}
