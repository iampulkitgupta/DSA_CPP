#include<iostream>
using namespace std;

int main()
{
    int arr[7]={1,2,8,3,7,9,4};
    int n = sizeof(arr)/sizeof(n);

    for(int i=1;i<n;i++)
    {
        bool swapped = 0;
        for (int j = n-1; j>i; j--)
        {
            if (arr[j]<arr[j-1])
            {
                swapped = 1;
                swap(arr[j], arr[j-1]);
            }
        }

        if (swapped == 0)
        break;
    }  
    
    for (int i =0; i<n;i++)
    cout<<arr[i]<<" ";
}