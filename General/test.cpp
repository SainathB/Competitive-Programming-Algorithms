#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter a number\n";
	cin>>n;
	for(int i=31;i>=0;i--){
		if(n&(1<<i))
			printf("1");
		else
			printf("0");
	}
	printf("\n");
}