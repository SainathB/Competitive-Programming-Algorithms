#include <bits/stdc++.h>
using namespace std;
#define gi(x) scanf("%d",&x)
class data{
	public:
		int n;
		vector<int> x;
};
using namespace std;
int main() {
	int n;
	gi(n);
	int a[n+1];
	int b[n+1];
	for(int i=1;i<=n;i++){
		gi(a[i]);
		b[i]=a[i];
	}
	sort(a+1,a+n+1);
	vector<int> p;
	int present=a[1];
	int i=1;
	p.push_back(present);
	for(int i=1;i<=n;){
		while(i<=n && a[i]==present){
			i++;
		}
		if(i>n)
			break;
		present=a[i];
		p.push_back(present);
	}
	data q[p.size()];
	for(int i=0;i<p.size();i++){
		q[i].n=p[i];
		for(int j=1;j<=n;j++){
			if(b[j]==p[i]){
				q[i].x.push_back(j);
			}
		}
	}
	int pro=1;
	for(int i=0;i<p.size();i++){
		pro*=q[i].x.size();
	}
	if(pro<3){
		printf("NO\n");
		return 0;
	}
	printf("YES\n");
	int flag=-1;
	for(int i=0;i<p.size();i++){
		if(q[i].x.size()==2){
			flag=1;
			break;
		}
		else if(q[i].x.size()>2){
			flag=2;
			break;
		}
	}
	if(flag==1){
		int i=0;
		int data1;
		int data2;
		while(1){
			if(q[i].x.size()==2){
				data1=q[i].n;
				break;
			}	
			i++;
		}
		i++;
		while(1){
			if(q[i].x.size()>=2){
				data2=q[i].n;
				break;
			}	
			i++;			

		}
		//printf("data 1 data 2 %d %d\n",data1,data2);
		for(int i=0;i<p.size();i++){
			if(q[i].n==data1)
			{
				printf("%d %d ",q[i].x[0],q[i].x[1]);
				for(int j=2;j<q[i].x.size();j++){
					printf("%d ",q[i].x[j]);
				}

			}
			else{
				for(int j=0;j<q[i].x.size();j++){
					printf("%d ",q[i].x[j]);
				}
			}

		}
		printf("\n");
		for(int i=0;i<p.size();i++){
			if(q[i].n==data1)
			{
				printf("%d %d ",q[i].x[1],q[i].x[0]);
				for(int j=2;j<q[i].x.size();j++){
					printf("%d ",q[i].x[j]);
				}

			}
			else{
				for(int j=0;j<q[i].x.size();j++){
					printf("%d ",q[i].x[j]);
				}
			}			

		}
		printf("\n");
		for(int i=0;i<p.size();i++){
			if(q[i].n==data2)
			{
				printf("%d %d ",q[i].x[1],q[i].x[0]);
				for(int j=2;j<q[i].x.size();j++){
					printf("%d ",q[i].x[j]);
				}

			}
			else{
				for(int j=0;j<q[i].x.size();j++){
					printf("%d ",q[i].x[j]);
				}
			}			

		}
		printf("\n");		
	}
	else{
		int i=0;
		int data1;
		while(1){
			if(q[i].x.size()>2){
				data1=q[i].n;
				break;
			}
			i++;
		}
		//printf("data1 %d\n",data1);
		for(int i=0;i<p.size();i++){
			if(q[i].n==data1){
				printf("%d %d %d ",q[i].x[0],q[i].x[1],q[i].x[2]);
				for(int j=3;j<q[i].x.size();j++){
					printf("%d ",q[i].x[j]);
				}

			}
			else{
				for(int j=0;j<q[i].x.size();j++){
					printf("%d ",q[i].x[j]);
				}
			}
		}
		printf("\n");
		for(int i=0;i<p.size();i++){
			if(q[i].n==data1){
				printf("%d %d %d ",q[i].x[1],q[i].x[0],q[i].x[2]);
				for(int j=3;j<q[i].x.size();j++){
					printf("%d ",q[i].x[j]);
				}

			}
			else{
				for(int j=0;j<q[i].x.size();j++){
					printf("%d ",q[i].x[j]);
				}
			}
		}
		printf("\n");
		for(int i=0;i<p.size();i++){
			if(q[i].n==data1){
				printf("%d %d %d ",q[i].x[0],q[i].x[2],q[i].x[1]);
				for(int j=3;j<q[i].x.size();j++){
					printf("%d ",q[i].x[j]);
				}

			}
			else{
				for(int j=0;j<q[i].x.size();j++){
					printf("%d ",q[i].x[j]);
				}
			}
		}
		printf("\n");


	}
	return 0;
}