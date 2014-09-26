#include <bits/stdc++.h>
#define gi(x) scanf("%d",&x)
using namespace std;
int main() {
	int t,n,ans;
	int a[1001];
	int b[1001];
	gi(t);
	while(t--){
		ans=0;
		gi(n);
		for(int i=0;i<n;i++){
			gi(a[i]);
		}
		for(int i=0;i<n;i++){
			gi(b[i]);
		}
		sort(a,a+n);
		sort(b,b+n);
		for(int i=0;i<n;i++){
			ans+=a[i]*b[i];
		}
		printf("%d\n",ans);
	}
	return 0;
}