#include<iostream>
using namespace std;
void main()
{float X;
float Y;
char K;
cout<<"Vevdite 1 chislo: "<<"\n";
cin>>X;
cout<<"Vevdite 2 chislo: "<<"\n";
cin>>Y;
cout<<"Vevdite znak: "<<"\n";
cin>>K;
 switch (K){
 case '+': cout<<X+Y<<endl; break;
 case '-': cout<<X-Y<<endl; break;
 case '*': cout<<X*Y<<endl;break;
 case '/': if(Y==0) {cout<<"Error!"<<endl;} 
		   else cout<<X/Y<<endl;break;
   default: cerr << "error\n"; }}

