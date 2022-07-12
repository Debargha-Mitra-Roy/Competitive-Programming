#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);

	float x, y;
	scanf("%f %f", &x, &y);

	int intAdd = (a + b);
	int intSub = (a - b);

	float floatAdd = (x + y);
	float floatSub = (x - y);

	printf("%d %d\n", intAdd, intSub);
	printf("%0.1f %0.1f\n", floatAdd, floatSub);

	return 0;
}