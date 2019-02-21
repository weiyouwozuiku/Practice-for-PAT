#include <cstdio>
#include <cstring>

const int q = 210;
int main()
{
	int n, num[q],b;
	memset(num, 0, sizeof(num));
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &num[i]);
	}
	scanf("%d", &b);
	int i;
	for (i = 0; i < n; ++i)
	{
		if (b == num[i])
		{
			printf("%d", i);
			break;
		}
	}
	if (i==n)
		printf("-1");
	return 0;
}