#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;
	while (cin>>s && s!="0"){
		int ans=0;
		for (int i=0;i<s.length();i++){			
			if (i%2) ans+=s[i]-'0';
			else ans-=s[i]-'0';
		}
		if (ans%11==0) cout<<s<<" is a multiple of 11.\n";
		else cout<<s<<" is not a multiple of 11.\n";
	}
} 