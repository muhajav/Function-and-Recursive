#include <bits/stdc++.h>
using namespace std;

int fpb(int m, int n)
{
	if(m%n==0) return n;
	else return fpb(n, m%n);
}

int main() {

	int a, b;
	
	cout<<"Please drop 2 integers"<<'\n';

	cin>>a>>b;

	cout<<fpb(a, b)<<'\n';
}