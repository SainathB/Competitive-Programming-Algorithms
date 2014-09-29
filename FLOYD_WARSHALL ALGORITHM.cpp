#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int graph[n][n];
	int finaldist[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>graph[i][j];
			finaldist[i][j]=graph[i][j];
		}
	}
	for(int k=0;k<n;k++){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(finaldist[i][k]+finaldist[k][j]<finaldist[i][j])
					finaldist[i][j]=finaldist[i][k]+finaldist[k][j];
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",finaldist[i][j]);
		}
		printf("\n");
	}

}