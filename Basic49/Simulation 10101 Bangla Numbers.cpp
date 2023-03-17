#include <iostream>
#include <iomanip>
using namespace std;

void f(long long int m){
	if (m>=10000000){
		f(m/10000000);
		cout<<" kuti";
		m%=10000000;
	}
	if (m>=100000){
		f(m/100000);
		cout<<" lakh";
		m%=100000;
	}
	if (m>=1000){
		f(m/1000);
		cout<<" hajar";
		m%=1000;
	}
	if (m>=100){
		f(m/100);
		cout<<" shata";
		m%=100;
	}
	if (m) cout<<" "<<m;
}

int main(){
	long long int i=1, n;
	while (cin>>n){
		cout<< setw(4) << i++ << ".";
		if (n==0) cout<<" 0";
		else f(n);
		cout<<endl;
	}
}