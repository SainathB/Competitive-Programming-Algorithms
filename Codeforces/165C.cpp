#include <bits/stdc++.h>
#define ll long long
#define gll(x) scanf("%I64d",&x)
using namespace std;
int main() {
	ll k,n;
	string s;
	gll(k);
	//printf("%I64d\n",k);
	cin>>s;n=s.length();
	ll count1=0;
	for(ll i=0;i<n;i++){
		if(s[i]=='1'){
			count1++;
		}
	}
	if(k==0){
		ll ans=0;
		for(ll i=0;i<n;){
			if(s[i]=='0'){
				ll c=0;
				while(i<n && s[i]=='0')
					{c++;i++;}
				ans+=(c*(c+1))/2;
			}
			else{
				while(i<n && s[i]=='1'){
					i++;
				}

			}
		}
		printf("%I64d\n",ans);
		return 0;

	}
	if(count1<k){
		printf("0\n");
		return 0;
	}
	ll prevonepos[n];
	ll nexpos[n];
	ll pre=-1;
	for(ll i=0;i<n;i++){
		prevonepos[i]=pre;
		if(s[i]=='1'){
			pre=i;
		}
	}
	pre=n;
	for(ll i=n-1;i>=0;i--){
		nexpos[i]=pre;
		if(s[i]=='1'){
			pre=i;
		}
	}

	/*
	for(int i=0;i<n;i++){
		printf("%d ",prevonepos[i]);
	}
	printf("\n");
	for(int i=0;i<n;i++){
	printf("%d ",nexpos[i]);
	}
	printf("\n");
	*/
	ll fir,flag;
	ll j=n-1;
	while(j>=0 && s[j]=='0'){
		j--;
	}
	fir=j;
	//printf("%d\n",fir);
	ll cc=0;
	
	for(ll i=n-1;i>=0;i--){
		if(s[i]=='1'){
			cc++;
			if(cc==k){
				flag=i;
				break;
			}
		}
		
	}
	//printf("%d\n",flag);
	
	ll ans=0;
	ans+=nexpos[fir]-fir;
	for(ll i=flag-1;i>=0;i--){
		
		if(s[i]=='1'){
			fir=prevonepos[fir];
		}
		ans+=nexpos[fir]-fir;
	}
	printf("%lld\n",ans);
	
	return 0;
}