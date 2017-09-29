#include<iostream>
#include<cstdlib>

using namespace std;
 int main()
 {
	 int m;
	 int n;
	 int K;
	 int L;
cout<<"Left="<<"\n";
cin>>K;
cout<<"Right="<<"\n";
cin>>L;
cout<<"\n";
cin>>m;
cout<<"\n";
cin>>n;
int **d=new int*[m];
for (int i=0; i<m; i++)
{
	d[i]=new int[i+1];
}
int S=0;
for (int i=0; i<m; i++)
{
	for(int j=0; j<n;  j++)
	{d[i][j]=K+rand()% - L+1;
	printf("%4d ", d[i][j]);
	if (d[i][j]>=0)
	{S=S+d[i][j];}
   }
printf("\n");

     
   }cout<<"Sum="<<S<<endl;}
