# include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the Year: ";
    cin>>num;

    if (num%400==0){
        cout<<num<<"  is Leap Year";
    }
    else if(num%4==0 && num%100 !=0){
        cout<<num<<"  is Leap Year";
    }
    else
    cout<<num<<"  is not Leap Year";
}