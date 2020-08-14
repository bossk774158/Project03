#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void minmax(int n)
{
	int a, min = 2000000000, max = -2000000000;
	int num[10];

	for (a = 0; a < n; a++)
		scanf("%d", &num[a]);

	for (a = 0; a < n; a++)
	{
		if (num[a] > max)
		{
			max = num[a];
		}

		if (num[a] < min)
		{
			min = num[a];
		}
			
	}
	printf("%d\n", min);
	printf("%d", max);
}
int main()
{
	int n;
	scanf("%d", &n);
	minmax(n);
	return 0;
}