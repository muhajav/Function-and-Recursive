#include <bits/stdc++.h>
using namespace std; 

double add(double a, double b)
{
	return a+b;
}

double diff(double a, double b)
{
	return a-b;
}

int main() {

	// int n=1;
	int a=45;
	int b=10;

	// cout<<"Press 1 for addition or 0 for substraction"<<'\n';
	// cin>>n;
	
	// if(n==1)
	// {
	// 	cout<<"Drop 2 numbers down here!!!"<<'\n';
	// 	cin>>a>>b;
	// 	cout<<"The sum of a and b is "<<add(a, b)<<'\n';
	// } else if(n==0)
	// {
	// 	cout<<"Drop 2 numbers down here!!!"<<'\n';
	// 	cin>>a>>b;
	// 	cout<<"The difference of a and b is "<<abs(diff(a, b))<<'\n';
	// } else {
	// 	cout<<"Your input was invalid"<<'\n';
	// }

	double expectedAdd = 55;
	double expectedDiff = 35;

	if(expectedAdd==add(a, b) && expectedDiff==diff(a, b))
	{
		cout<<"SUCCESSFULLY"<<'\n';
	}

}
