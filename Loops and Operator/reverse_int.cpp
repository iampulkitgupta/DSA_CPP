#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the Number: ";
    cin>>num;

    int rem=0, sum=0;
    while(num!=0)
    {
        rem=num%10;
        num/=10;
        sum=sum*10+rem;
    }
    cout<<sum<<endl;
}