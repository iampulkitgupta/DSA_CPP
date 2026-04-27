#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the decimal Number: ";
    cin>>num;

    int rem, ans=0, mul=1;

    while(num>0)
    {
        //reminder
        rem = num%8;
        //quotient
        num = num/8;        
        //answer
        ans = rem*mul+ans;
        //multiply
        mul=mul*10;
    }
    cout<<ans<<endl;
}