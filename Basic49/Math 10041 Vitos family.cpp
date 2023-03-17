#include <iostream>
#include <algorithm>
using namespace std;

int abs(int m){
	if (m<0) m=(-(m));
	return m;
}

int main(){
	int time;
	cin>>time;
	while (time--){
		int now;
		int s,t[30002]={0};
		cin>>s;
		for (int i=0;i<s;i++) cin>>t[i];
		sort(t,t+s);
		if (s%2==0)
			now=s/2-1;
		else
			now=s/2;
		int ans=0;
		for (int i=0;i<s;i++) ans+=abs(t[i]-t[now]);
		cout<<ans<<endl;
	}	
}