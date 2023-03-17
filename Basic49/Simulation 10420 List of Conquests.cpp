#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
	string s, exp[2005]={};
	int m;
	cin>>m;
	for (int i=0;i<m;i++){
		cin>>exp[i];
		getline(cin,s);
	}
	sort(exp,exp+m);
	for (int i=0;i<m;i++){
		int count=1;
		while (exp[i]==exp[i+1]){
			i++;
			count++;
		}
		cout<<exp[i]<<" "<<count<<endl;
	}
} 