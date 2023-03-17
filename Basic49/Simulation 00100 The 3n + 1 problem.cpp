#include <iostream>
using namespace std;

int main(){
	int x,y;
	while (cin>>x>>y){
		int max,min;
		int ans=0;
		if (x>y) {
			max=x;
			min=y;
		}
		else{
			max=y;
			min=x;	
		}		
		for (int i=min;i<=max;i++){
			int j=i;
			int count=1;
			while (j!=1){
				if (j%2) j=3*j+1;
				else j/=2;
				count++;
			}
			if (count>ans) ans=count;
		}
		printf("%d %d %d\n",x,y,ans);
	}
} 