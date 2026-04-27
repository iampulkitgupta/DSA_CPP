# include <iostream>
using namespace std;

int main()
{
    // int a = 1;
    // while(a<=10)
    // {
    //     cout<<a++<<" ";
    // }
    int i = 1;
    int n = 30;
    while(i<=n)
    {
        if (n%i == 0)
        {
            cout<<i<<" ";
        }
        i++;
    }
}