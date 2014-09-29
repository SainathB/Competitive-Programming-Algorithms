#include <bits/stdc++.h>
#define gi(x) scanf("%lld",&x)
#define ll long long
using namespace std;
int main() {
		string s;
		cin>>s;
		while(s!="0"){
			ll n=s.length();
			ll dp[n+1];
			dp[0]=1;
			dp[1]=1;
			for(ll i=2;i<=n;i++){
				
				if(s[i-1]=='0'){
					dp[i]=dp[i-2];

				}
				else{
					if(s[i-2]=='0'){
						dp[i]=dp[i-1];
					}
					else{
						dp[i]=dp[i-1];
						if((s[i-2]-'0')*10+(s[i-1]-'0')<=26){
							dp[i]+=dp[i-2];
						}
					}


				}
			}
		printf("%lld\n",dp[n]);
		
		cin>>s;
		}
	return 0;
}