#include <cstdio>
#include <cstring>

char str[255];
template<size_t size>
bool judge(char (&str)[size])
{
	int len = strlen(str);
	for (int i = 0; i < len / 2; ++i)
	{
		if (str[i] != str[len - i - 1])
			return false;
	}
	return true;
}
int main()
{
	while (scanf("%s", str)!=EOF)
	{
		
		//int len = strlen(str);
		if (judge(str))
			printf("YES\n");
		else
			printf("NO\n");
		//for (int i = 0; i < len / 2; ++i)
		//{
		//	if (str[i] != str[len - i-1])
		//	{
		//		printf("NO");
		//		break;
		//	}
		//	if (i == len / 2 - 1)
		//		printf("YES");
		//}
	}
	return 0;
}