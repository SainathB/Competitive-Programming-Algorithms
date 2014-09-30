#include <bits/stdc++.h>
using namespace std;
int main(){
	string text,pattern;
	int x;
	while(scanf("%d",&x)!=EOF){
		//printf("x %d\n",x);
		cin>>pattern;
		//cout<<"pattern "<<pattern<<endl;
		cin>>text;
		//cout<<"text "<<text<<endl;
		int n=text.length();
		int m=pattern.length();
		int failure[m];
		failure[0]=0;
		int prev=0;
		int i=1;
		while(i<m){
			if(pattern[i]==pattern[prev]){
				prev++;
				failure[i]=prev;
				i++;
			}
			else{
				if(prev!=0){
					prev=failure[prev-1];
				}
				else{
					failure[i]=0;
					i++;
				}
			}
		}
		vector<int> answer;
		 i=0;
		int j=0;
		while(i<n){
			if(pattern[j]==text[i]){
				i++;
				j++;
			}
			if(j==m){
				answer.push_back(i-j);
				j=failure[j-1];
			}
			else if(pattern[j]!=text[i]){
				if(j != 0)
         			j = failure[j-1];
        		else
         			i = i+1;
			}


		}
		for(int i=0;i<answer.size();i++){
			printf("%d\n",answer[i]);	
		}
		printf("\n");
	}
	
}