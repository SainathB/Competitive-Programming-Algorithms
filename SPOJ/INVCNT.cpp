#include <bits/stdc++.h>
using namespace std;
#define gi(x) scanf("%lld",&x)
typedef long long ll;
ll a[200000+1];
ll b[200000+1];
ll merging(ll start,ll end){
	ll mid=(start+end)/2;
	ll count=0;
	ll i=start;
	ll k=start;
	ll j=mid+1;
	while(i<=mid && j<=end){
		if(a[i]<=a[j]){
			b[k++]=a[i];
			i++;
		}
		else{
			b[k++]=a[j];
			count+=(mid-i+1);
			j++;
		}
	}
	while(i<=mid){
		b[k++]=a[i++];
	}
	while(j<=end){
		b[k++]=a[j++];
	}
	for(ll i=start;i<=end;i++){
		a[i]=b[i];
	}
	return count;

}
ll inversionCount(ll start,ll end){
	if(start<end){
		ll mid=(start+end)/2;
		ll x=inversionCount(start,mid);
		ll y=inversionCount(mid+1,end);
		ll z=merging(start,end);
		return x+y+z;

	}
	return 0;
}
int main() {
	ll t;
	gi(t);
	ll n;
	while(t--){
		gi(n);
		for(ll i=0;i<n;i++) gi(a[i]);
		printf("%lld\n",inversionCount(0,n-1));	
	}
	return 0;
}