#include<iostream>
#include<cstdlib>
using namespace std;

void main()
{
	int N;
	int M;
	int K;
	cout<<"1 chislo: "<<"\n";
	cin>>M;
	cout<<"2 chislo: "<<"\n";
	cin>>N;
	cout<<"Kol-vo: "<<"\n";
	cin>>K;
	int *a = new int [K];
	for (int i=0; i<K; i++)
	{//int a [i] = 0; 
               a[i] = N + rand() % M-N+1;

       cout << a[i] << " ";
        
        
    }}