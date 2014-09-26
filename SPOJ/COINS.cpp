#include <bits/stdc++.h>
#define gi(x) scanf("%d",&x)
using namespace std;
vector<int> mark(1000000005,-1);
int max(int n)
{
	if(mark[n]!=-1)
		return mark[n];
	if(n==0)
		return n;
	int k=max(n/2)+max(n/3)+max(n/4);
	//printf("%d\n",k);
	if(n>=k){
		mark[n]=n;
		return n;
	}	
	else{
		mark[n]=k;
		return k;
	}

}
int main() {
	int n;
	while(gi(n)!=EOF){
		printf("%d\n",max(n));
	}
	return 0;
}