//FLOYD WARSHALL
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n][n];
	int b[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
			b[i][j]=a[i][j];
		}
	}
	for(int k=0;k<n;k++){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(b[i][k]+b[k][j]<b[i][j]){
					b[i][j]=b[i][k]+b[k][j];
				}
			}
		}
	}
	int m;
	cin>>m;
	int x,y,z;
	for(int i=0;i<m;i++){
		cin>>x>>y>>z;
		cout<<b[x][y]+b[y][z]<<" "<<b[x][y]+b[y][z]-b[x][z]<<endl;

	}

}