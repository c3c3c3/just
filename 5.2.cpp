#include<iostream>
#include<cmath>
using namespace std;

void main()
{
	int N;
	/*int t=0;
	int k=0;*/
	int k;
	int t;
	int p;
	cout<<"Kol-vo el. massiva: "<<"\n";
	cin>>N;
	int *a = new int [N];
	//int max=a[0];
	for (int i=0; i<N; i++)
	{ 
		a[i]=rand()%2000;
		cout<<"Mass: "<<a[i]<<"\n";
	}
	int min=a[0];
	int max=a[0];
	for (int i=0; i<N; i++)
	{ if (a[i]>max) max=a[i];
	if (a[i]<min)min=a[i];}
	cout<<max<<endl;
	cout<<min<<endl;
	p=max*min;
	cout<<"Proizv="<<p<<endl;
		
}
