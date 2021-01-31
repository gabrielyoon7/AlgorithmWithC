#include <stdio.h>
#include <string.h>
typedef struct info {
	int time;
	int hour;
	int min;
	int sec;
	int only_sec;
}t;
int main()
{
	t time[4];
	time[0].time = 102050;
	time[1].time = 53040;
	for (int i = 0; i < 2; i++)
	{
		time[i].sec = time[i].time % 100;
		time[i].time /= 100;
		time[i].min = time[i].time % 100;
		time[i].time /= 100;
		time[i].hour = time[i].time;
		time[i].only_sec = time[i].sec + time[i].min * 60 + time[i].hour * 3600;
		printf("\n%d : %d : %d", time[i].hour, time[i].min, time[i].sec);
		printf("\n= %dseconds", time[i].only_sec);
	}
	time[2].only_sec = time[0].only_sec + time[1].only_sec;
	time[3].only_sec = time[0].only_sec - time[1].only_sec;
	printf("\n");
	for (int i = 2; i < 4; i++)
	{

		time[i].hour = time[i].only_sec / 3600;
		time[i].only_sec %= 3600;
		time[i].min = time[i].only_sec / 60;
		time[i].only_sec %= 60;
		time[i].sec = time[i].only_sec;
		if (i == 2)
			printf("\nadded time is ");
		if (i == 3)
			printf("\nsubtracted time is ");
		printf("%d : %d : %d", time[i].hour, time[i].min, time[i].sec);
	}

	getch();
	return 0;
}
