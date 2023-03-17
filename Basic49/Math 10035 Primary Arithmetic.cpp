#include <iostream>
using namespace std;

int main(){
	long long int a,b;
	int ans,now;
	while (cin>>a>>b && (a!=0 || b!=0)){
		ans=0,now=0;
		while ((a!=0) || (b!=0)){
			if ((now+a%10+b%10)>9){
				ans++;
				now=(now+a%10+b%10)/10;
			}
			else now=0;
			a/=10;
			b/=10;
		}
		if (ans==0) printf("No carry operation.\n"); 
		else if (ans==1) printf("1 carry operation.\n");
		else printf("%d carry operations.\n",ans);
	}
}