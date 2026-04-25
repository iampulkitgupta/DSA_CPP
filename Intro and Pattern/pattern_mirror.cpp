#include <iostream>
using namespace std;

int main()
{    
    // int n; 
    // cout<<"Enter the number";
    // cin>>n;
    // for (int i = 1; i<=n; i++)
    // {
    //     for (int j = 1; j<=n; j++)
    //     {
    //         if(i+j<=n)
    //         cout<<" ";
    //         else
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    for (int i = 1; i<= 5; i++)
    {
        for (int j = 1; j <= 5 - i; j++)
            cout<<" ";                    
        for (int k = 1; k<=i; k++)
            cout<<"*";
        cout<<endl;
    }
}