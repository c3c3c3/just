#include <iostream>
using namespace std;
void main()
{float a;
float b;
float c;
cout<<"1: "<<"\n";
cin>>a;
cout<<"2: "<<"\n";
cin>>b;
cout<<"3: "<<"\n";
cin>>c;
if (((a+b)>c)&&((a+c)>b)&&((b+c)>a))
{cout<<"It's OK!"<<"\n";} 
else {cout<<"It's not triangle!:("<<"\n";}
}