# include <iostream>
using namespace std;

int main()
{
    int i;
    cout<<"Enter the Number: ";
    cin>>i;
    i=20;

    for(;i<=30;)
    {
        cout<<i<<" ";
        i++;
    }

    switch (i)
    {
    case 1:
        cout<<"Sachin";
        break;
    case 2:
        cout<<"Mohit";
        break;
    case 3:
        cout<<"Rahul";
        break;
    
    default:
        cout<<"Default";
    }
}