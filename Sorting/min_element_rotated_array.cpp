#include <iostream>
using namespace std;

int main() {

 //Min Element in rotated Array  
    int arr[5]={2,4,6,8,10};
    // int arr[5]={4,6,8,10,2};
    // int arr[5]={6,8,10,2,4};
    // int arr[5]={8,10,2,4,6};
    // int arr[5]={10,2,4,6,8};
    int n = 5;
    int start = 0, end = n-1, mid, index=0;
   
    while (start<=end)
    {
        mid = end + (start-end)/2;
        if (arr[0]<=arr[mid])
        start = mid+1;
        else
        {
            index = mid;
            end = mid-1;
        }
    }
    cout<<"Min Element: "<<arr[index];
}