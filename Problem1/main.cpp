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

	int x;
	cout<<"How many times do you want to perform??"<<'\n';
	cin>>x;

	for(int i=0; i<x; i++)
	{
		int n;
		int a, b;

		cout<<"Press 1 for addition or 0 for substraction"<<'\n';
		cin>>n;
		
		if(n==1)
		{
			cout<<"Drop 2 numbers down here!!!"<<'\n';
			cin>>a>>b;
			cout<<"The sum of a and b is "<<add(a, b)<<'\n';
		} else if(n==0)
		{
			cout<<"Drop 2 numbers down here!!!"<<'\n';
			cin>>a>>b;
			cout<<"The difference of a and b is "<<abs(diff(a, b))<<'\n';
		} else {
			cout<<"Your input was invalid"<<'\n';
		}
		cout<<'\n';
	}

}
