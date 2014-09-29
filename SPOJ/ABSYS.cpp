#include <bits/stdc++.h>
#define gi(x) scanf("%d",&x)
using namespace std;
int main() {
	int t;
	char s[100000],a,b;
	gi(t);
	gets(s);
	scanf("%c",&b);
	for(int test=0;test<t;test++){
		gets(s);
		//cout<<s<<endl;
		string x,y,z;
		int plus,equal,machula;
		for(int i=0;i<strlen(s);i++){
			if(s[i]=='+')
				plus=i;
			else if(s[i]=='=')
				equal=i;
			else if(s[i]=='m')
				machula=i;
		}
		if(machula>plus){
			if(machula<equal){
				for(int i=0;i<plus-1;i++)
					x.push_back(s[i]);
				for(int i=equal+2;i<strlen(s);i++)
					y.push_back(s[i]);
				int ans=atoi(y.c_str())-atoi(x.c_str());
				printf("%d + %d = %d\n",atoi(x.c_str()),ans,atoi(y.c_str()));

			}
			else{
				for(int i=0;i<plus-1;i++)
					x.push_back(s[i]);
				for(int i=plus+2;i<equal-1;i++)
					y.push_back(s[i]);
				int ans=atoi(x.c_str())+atoi(y.c_str());
				printf("%d + %d = %d\n",atoi(x.c_str()),atoi(y.c_str()),ans);				


			}

		}
		else
		{
			for(int i=plus+2;i<equal-1;i++){
				x.push_back(s[i]);
			}
			for(int i=equal+2;i<strlen(s);i++)
				y.push_back(s[i]);
			int ans=atoi(y.c_str())-atoi(x.c_str());
			printf("%d + %d = %d\n",ans,atoi(x.c_str()),atoi(y.c_str()));

		}
		scanf("%c",&b);
	}
	return 0;
}