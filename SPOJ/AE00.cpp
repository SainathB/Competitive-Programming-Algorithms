#include <bits/stdc++.h>
#define gi(x) scanf("%lld",&x)
using namespace std;
int main() {
	long long n;
	gi(n);
	long long ans=0;
	for(int i=1;i<=n;i++)
	{
		int k=(n/i);
		if(i<=k)
			ans+=k-i+1;
	}
	printf("%d\n",ans);
	return 0;
}