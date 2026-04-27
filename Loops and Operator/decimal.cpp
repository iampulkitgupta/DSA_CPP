#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the binary Number: ";
    cin>>num;

    int rem, ans=0, mul=1;

    while(num>0)
    {
        //reminder
        rem = num%2;
        //quotient
        num = num/2;        
        //answer
        ans = rem*mul+ans;
        //multiply
        mul=mul*10;
    }
    cout<<ans<<endl;
}