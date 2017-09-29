#include<iostream>
#include<cstdlib>
using namespace std;

void main()
{
	int N;
	cout<<"Kol-vo el. massiva: "<<"\n";
	cin>>N;
	int S=0;
	int *a = new int [N];
	for (int i=0; i<N; i++)
	{ 
		a[i]=rand()%2000;
		cout<<"Mass: "<<a[i]<<"\n";
		if ((a[i]%2==0)&&(a[i]%3!=0))
	{S=S+a[i];
	//cout<<"OK: "<<a[i]<<endl;
	
		
		}}cout<<"Sum: "<<S<<endl;}