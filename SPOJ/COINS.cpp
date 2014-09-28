#include <bits/stdc++.h>
#define gi(x) scanf("%lld",&x)
using namespace std;
long long maxlimit=1000000;
vector<long long> mark(maxlimit,-1);
long long max(long long n)
{
	if(n<maxlimit && mark[n]!=-1)
		return mark[n];
	if(n==0)
		return n;
	long long k=max(n/2)+max(n/3)+max(n/4);
	//printf("%d\n",k);
	if(n>=k){
		if(n<maxlimit)
		mark[n]=n;
		return n;
	}	
	else{
		if(n<maxlimit)
		mark[n]=k;
		return k;
	}

}
int main() {
	long long n;
	while(gi(n)!=EOF){
		printf("%lld\n",max(n));
	}
	return 0;
}
