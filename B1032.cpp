#include <cstdio>
#include <cstring>

const int n = 10010;
int main()
{
	int num,school[n+1],no,score;
	memset(school, 0, sizeof(school));
	scanf("%d", &num);
	for (int i = 1; i < num; i++)
	{
		scanf("%d%d", &no,&score);
		school[no] += score;
	}
	int max=0;
	for (int i = 1; i < n; ++i)
	{
		if (school[i] > max)
		{
			max = school[i];
			no = i;
		}
	}
	printf("%d %d", no, max);
	return 0;
}