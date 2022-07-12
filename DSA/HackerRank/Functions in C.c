#include <stdio.h>

int max_of_four(int a, int b, int c, int d)
{
	int sum = a + b + c + d;

	a = sum - a;
	b = sum - b;
	c = sum - c;
	d = sum - d;

	int arr[] = {a, b, c, d};

	int n =  sizeof(arr) / sizeof(arr[0]);

	int min = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (min >= arr[i])
			min = arr[i];
	}

	int ans = sum - min;

	return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);

	int ans = max_of_four(a, b, c, d);

	printf("%d", ans);

	return 0;
}