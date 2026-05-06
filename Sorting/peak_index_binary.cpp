#include <iostream>
using namespace std;

int main() {

//peak index in mountain array through linear search

    int arr[7]={2,4,6,20,14,12,5};
    int n=7;
    int start = 0, end = n-1, mid, index, b_mid, a_mid;
   
    while (start<=end)
    {
        mid = start + (end-start)/2;
        a_mid = mid+1;
        b_mid = mid-1;        
        if (arr[mid]>arr[b_mid] && arr[mid]>arr[a_mid])
        {            
            index = mid;
            break;
        }
        else if (arr[mid]>arr[b_mid])
        {            
            start = mid + 1;
        }
        else
        {            
            end = mid - 1;
        }
    }
    cout<<arr[index];
}