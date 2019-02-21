#include <cstdio>
int main()
{
	int step = 0,n;
	scanf("%d", &n);
	while (n!=1)
	{
		if(n%2==1){
			n=3*n+1;
		}
		n/=2;
		++step;
	}
	printf("%d", step);
	return 0;
}