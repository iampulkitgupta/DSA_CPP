#include<iostream>
using namespace std;

int main()    
{
    int arr[5] = {1,3,5,20,7};
    int X=20;
    for (int i = 0; i<5;i++){
        if (arr[i]==X){
            cout<<i<<endl;
            return i;
        }
    }
    cout<<-1<<endl;
    return -1;
}