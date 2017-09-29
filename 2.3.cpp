#include<iostream>
#include<cmath>
using namespace std;
void main()
{
	float a;
	float b;
	float c;
float D;

cout<<"Vevdite 1 chislo: "<<"\n";
cin>>a;
cout<<"Vevdite 2 chislo: "<<"\n";
cin>>b;
cout<<"Vevdite 3 chislo: "<<"\n";
cin>>c;
D=(b*b-4*a*c);
cout<<"Discr.= "<<D<<"\n";

float E;
float F;
if (D<0) 
{
	cout<<"Error!"<<endl;
}
else {
E=-(b-sqrt(D))/(2*a);
cout<<"1 koren' ax^2+bx+c="<<E<<"\n";
F=-(b+sqrt(D))/(2*a);
cout<<"2 koren' ax^2+bx+c="<<F<<"\n";}
}