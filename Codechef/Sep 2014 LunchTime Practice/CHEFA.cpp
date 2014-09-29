#include <bits/stdc++.h>
#define gi(x) scanf("%lld",&x)
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
int main(){
	ll t,n,a[100000],j,ans;
	gi(t);
	while(t--){
		ans=0;
		gi(n);
		rep(i,n){
			gi(a[i]);
		}
		sort(a,a+n);
		j=n-1;
		while(j>=0){
			ans+=a[j];
			j-=2;
		}
		printf("%lld\n",ans);
	}
}