#include<iostream>
using namespace std;
void main()
{
	int a;
	int b;
	int c;
	int d;
	cout<<"1 chislo: "<<"\n";
	cin>>a;
	cout<<"2 chislo: "<<"\n";
	cin>>b;
	cout<<"3 chislo: "<<"\n";
	cin>>c;
	cout<<"4 chislo: "<<"\n";
	cin>>d;
if ((a>b)&&(a>c)&&(a>d))
{cout<<a<<endl;}
else {
	if ((b>a)&&(b>c)&&(b>d))
	{cout<<b<<endl;}
	else
	{ if ((c>a)&&(c>b)&&(c>d))
	{cout<<c<<endl;}
	else
	{if ((d>a)&&(d>b)&&(d>c))
	{cout<<d<<endl;}
	else
	{cout<<"Incorrect!"<<endl;}
}
	}}}