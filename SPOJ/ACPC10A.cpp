#include <bits/stdc++.h>
#define gi(x) scanf("%d",&x)
using namespace std;
int main() {
	int a,b,c;

	gi(a);
	gi(b);
	gi(c);
	while(a || b || c){
		if(a+c==2*b){
			printf("AP %d\n",2*c-b);
		}
		else{
			if(b==0)
				printf("GP %d\n",0);
			else
				printf("GP %d\n",(c*c)/b);
		}
		gi(a);
		gi(b);
		gi(c);
	}
	return 0;
}