#include <stdio.h>
#include <math.h>
struct point {
	int x;
	int y;
};
int main()
{
	struct point p1, p2;
	double dis;
	printf("\npoint1's position: ");
	scanf("%d %d", &p1.x, &p1.y);
	printf("\npoint2's position: ");
	scanf("%d %d", &p2.x, &p2.y);
	dis = sqrt((double)(p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
	printf("\ndistance is %f", dis);
	getch();
	return 0;
}
