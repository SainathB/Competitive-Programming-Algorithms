#include <bits/stdc++.h>
using namespace std;
int n;
void update(int bit[],int i,int val){
	while(i<=n){
		bit[i]+=val;
		i+=(i&-i);
	}
}
int getsum(int bit[],int i){
	int sum=0;
	while(i>=1){
		sum+=bit[i];
		i-=(i&-i);
	}
	return sum;
}
int main(){
	cout<<"Enter no of Elements\n";
	cin>>n;
	int a[n+1];
	int bit[n+1];
	memset(bit,0,sizeof(bit));
	for(int i=1;i<=n;i++){
		cin>>a[i];
		update(bit,i,a[i]);
	}
	int q;
	cout<<"Enter no of queries\n";
	cin>>q;
	int x,y,z;
	for(int i=0;i<q;i++){
		cin>>x;
		if(x==0){
			cin>>y;
			cin>>z;
			printf("%d\n",getsum(bit,z)-getsum(bit,y-1));
		}
		else{
			cin>>y;
			cin>>z;
			update(bit,y,z);
		}

	}


}