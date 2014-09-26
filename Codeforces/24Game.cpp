#include <bits/stdc++.h>
#define gi(x) scanf("%d",&x)
using namespace std;
int main() {
	int n;
	gi(n);
	if(n<4)
		printf("NO\n");
	else
	{
		printf("YES\n");
		if((n-5+1)%2)
		{
			int count=0;
			for(int i=6;i<n;i+=2)
			{
				printf("%d - %d = 1\n",i+1,i);
				count++;
			}
			for(int i=1;i<=count;i++)
			{
				printf("1 * 1 = 1\n");
			}
			printf("5 - 1 = 4\n");
			printf("4 - 2 = 2\n");
			printf("3 * 4 = 12\n");
			printf("12 * 2 = 24\n");

		}
		else
		{
			int count=0;
			for(int i=5;i<n;i+=2)
			{
				printf("%d - %d = 1\n",i+1,i);
				count++;
			}
			for(int i=1;i<=count;i++)
			{
				printf("1 * 1 = 1\n");
			}
			printf("1 * 2 = 2\n");
			printf("3 * 4 = 12\n");
			printf("12 * 2 = 24\n");

		}
	}
	return 0;
}