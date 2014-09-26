#include <bits/stdc++.h>
using namespace std;
class TeamBuilder{
	public:
		vector <int> specialLocations(vector <string> paths){
			int size=paths[0].size();
			int a[size][size];
			for(int i=0;i<size;i++){
				for(int j=0;j<size;j++){
					if(i==j){
						a[i][j]=0;
					}
					else if(paths[i][j]=='1'){
						a[i][j]=1;

					}
					else{
						a[i][j]=12345678;
					}
				}
			}
			for(int k=0;k<size;k++){
				for(int i=0;i<size;i++){
					for(int j=0;j<size;j++){
						if(a[i][k]+a[k][j]<a[i][j]){
							a[i][j]=a[i][k]+a[k][j];
						}
					}
				}
			}
			int ans1=0;
			int ans2=0;
			for(int i=0;i<size;i++){
				int count1=0;
				int count2=0;
				for(int j=0;j<size;j++){
					if(a[i][j]!=12345678){
						count1++;
					}
					if(a[j][i]!=12345678){
						count2++;
					}
				}
				if(count1==size){
					ans1++;
				}
				if(count2==size){
					ans2++;
				}
			}
			vector<int> ret;
			ret.push_back(ans1);
			ret.push_back(ans2);
			return ret;

		}

};

int main(){
	int n;
	scanf("%d",&n);
	vector<string> s;
	string p;
	for(int i=0;i<n;i++){
		cin>>p;
		s.push_back(p);
	}
	TeamBuilder test;
	vector<int> ans;
	ans=test.specialLocations(s);
	printf("%d %d\n",ans[0],ans[1]);
}