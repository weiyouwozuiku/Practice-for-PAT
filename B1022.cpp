#include <cstdio>
#include <cstring>
int main()
{
	int a, b, c;
	int ans[40], num = 0;
	memset(ans, 0, sizeof(ans));
	scanf("%d%d%d", &a, &b, &c);
	a += b;
	do
	{
		ans[num++] = a % c;
		a /= c;
	} while (a!=0);
	for (int i = num - 1; i >= 0; --i)
		printf("%d", ans[i]);
	printf("\n");
}