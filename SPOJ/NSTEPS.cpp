#include <bits/stdc++.h>
 
using namespace std;
typedef long long LL;
typedef pair<int,int> pii;
 
#define forup(i,a,b) for(int i=(a); i<(b); ++i)
#define fordn(i,a,b) for(int i=(a); i>(b); --i)
#define rep(i,a) for(int i=0; i<(a); ++i)
 
#define gi(x) scanf("%d",&x)
#define gl(x) cin>>x
#define gd(x) scanf("%lf",&x)
#define gs(x) scanf("%s",x)
 
#define fs first
#define sc second
 
#define pb push_back
#define mp make_pair

int main() {
	int t,a,b,p;
	gi(t);
	while(t--){
		gi(a);
		gi(b);
		if(a==b || a-2==b){
			p=(a+b)/2;
			if(p%2){
				if(a==b){
					printf("%d\n",2*p-1);
				}
				else{
					printf("%d\n",2*p);
				}
			}
			else{
				if(a==b){
					printf("%d\n",2*p);
				}
				else{
					printf("%d\n",2*p-1);
				}

			}
		}
		else
			printf("No Number\n");

	}
	


return 0;
}