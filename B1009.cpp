#include <cstdio>

int main()
{
	char str[81][81] = {0};
	int num = 0;
	while (scanf("%s", str[num++]) != EOF);
	for (int i = num - 2; i >= 0; --i)
	{
		printf("%s", str[i]);
		if (i > 0)
			printf(" ");
	}
	return 0;
}