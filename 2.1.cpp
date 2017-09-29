#include <iostream>
using namespace std;

class Ckoren
{
	float a;
	float b;
	float x;
public:
	void Set(float a, float bj);
	void Print();
	void Calc();
};

void Ckoren::Set(float i, float j)
{
	
	cout<<"Vevdite pervoe chislo: \n";
cin>>a;
cout<<"Vevdite vtoroe chislo: \n";
cin>>b;

};
void Ckoren::Print()
{
	if (a==0)
	{cout<<"Error!\n"<<endl;}
	else
	cout<<" a="<<a<<" b="<<b<<" Koren' iz ax+b=0 raven: "<<x<<"\n";
	
};
void Ckoren::Calc()
{
	x=-b/a;}
void main (void)
{Ckoren objkoren;
 objkoren.Set(0, 0);
 objkoren.Calc();
 objkoren.Print();
}