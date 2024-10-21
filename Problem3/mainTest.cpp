#include <bits/stdc++.h>
using namespace std;

int fpb(int m, int n)
{
	if(m%n==0) return n;
	else return fpb(n, m%n);
}

int main() {

	int a = 4;
	int b = 12;
	
	int expOutput = 4;

	if(expOutput==fpb(a, b)) cout<<"SUCCESSFULLY"<<'\n';
	else cout<<"FAILED"<<'\n';
}