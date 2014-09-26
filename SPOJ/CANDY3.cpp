#include <bits/stdc++.h>
#define gi(x) scanf("%llu",&x)
using namespace std;
int main() {
	unsigned long long t,n,sum=0,a;
	gi(t);
	while(t--){
		gi(n);
		sum=0;
		for(long long i=0;i<n;i++){
			gi(a);
			sum+=a;
		}
		if(sum%n){
			printf("NO\n");
		}
		else{
			printf("YES\n");
		}

	}
	return 0;
}