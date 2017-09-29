#include<iostream>
using namespace std;
void main()
{
	int N;
	cout<<"Chislo: "<<"\n";
	cin>>N;
	int k;
	int a;
	//k=abs(N);
	for (int i=1; i<=abs(N); i++)
	{ if (N%i==0)
	{a=N/i;
	cout<<a<<endl;}}}