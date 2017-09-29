#include<iostream>
using namespace std;
void main()
{
	int N;
	float S;
	cout<<"Vvedite chislo chlenov ryada: "<<"\n";
	cin>>N;
	if (N < 1)
	{cout<<"Error!"<<endl;}
	else {
	S=0;
	int i;
	for (i=1; i<=N; i++)
	{
	S=1./i;
	}
	cout<<"Rezul'tat: "<<S<<endl;}
}