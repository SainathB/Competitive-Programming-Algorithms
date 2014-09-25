#include <bits/stdc++.h>
#define gi(x) scanf("%d",&x)
using namespace std;
int main() {
	int t,a,b,p,k,sz;
	vector<int> ans[10];
	for(int i=0;i<10;i++)
	{
		ans[i].push_back(i);
	}
	for(int i=0;i<10;i++)
	{

		p=(i*i)%10;
		while(p!=i)
		{
			ans[i].push_back(p);
			p=(p*i)%10;
		}

	}
	gi(t);
	while(t--)
	{
		gi(a);
		gi(b);
		if(b==0){
			printf("1\n");
			continue;
		}
		if(a==0){
			printf("0\n");
			continue;
		}
		if(b==1){
			printf("%d\n",a);
			continue;
		}

		
		k=a%10;
		sz=ans[k].size();
		printf("%d\n",ans[k][(b-1)%sz]);

	}

	return 0;
}