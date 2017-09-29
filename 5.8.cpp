#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
 
void Sort(int *, int); 
 
int main(int argc, char* argv[])
{
   
    cout << "Razmer: "<<"\n";;
    int s; 
    cin >> s;
 cout<<"\n";
    int *k = new int [s]; 
    for (int i = 0; i < s; i++)
    {
        k[i] = rand() % 100; 
        cout << k[i] <<" "<<"\n";; 
    }
    
 
    Sort(k, s); 
 cout<<"Rezul'tat: ";
    for (int j = 0; j < s; j++)
    {
        cout<<k[j]<<"  "; 
    }
   
    system("pause");
    return 0;
}
 
void Sort(int *g, int l) 
{
    int t, 
        f; 
    for (int i = 1; i < l; i++)
    {
        t = g[i]; 
        f = i-1; 
        while(f >= 0 && g[f] > t) 
        {
            g[f+ 1] = g[f]; 
            g[f] = t;
            f--;
        }}}