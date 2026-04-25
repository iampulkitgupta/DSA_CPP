#include <iostream>
using namespace std;
/*
    1
   12
  123
 1234
12345         
*/

int main()
{      
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    for (int i = 1; i<= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        cout<<" ";            
                         
        for (char k = 'A'; k<='A'+(i-1); k++)            
        cout<<k;                     
        
    cout<<endl;
    }
}