#include <bits/stdc++.h>
using namespace std;

int fac(int n)
{
	if(n==1 || n==0) return 1;
	else return n*fac(n-1);
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin>>n;

	cout<<fac(n)<<'\n';	
	
}
