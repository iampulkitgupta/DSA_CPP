#include <iostream>
using namespace std;

int main() {

//peak index in mountain array through linear search
    int arr[7]={2,4,6,8,10,8,5};
    int n = 7;
    int index=-1;
   
    for (int i = 0;i<n;i++)
    {
        if (index<arr[i])
        {
            index=arr[i];
        }
    }
    cout<<index;
}