#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Enter Number of which you want table:- ";
	cin>>a;
	for (b=1;b<=10;b++){
		c=a*b;
		cout<<a<<" * "<<b<<" = "<<c<<endl;
	}
}
