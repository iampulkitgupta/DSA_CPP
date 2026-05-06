#include<iostream>
using namespace std;

int main()
{
    int arr[6]={6,5,4,3,2,1};
    int n = sizeof(arr)/sizeof(n);
    cout<<n<<endl;
    for (int i = 0; i<n; i++)
    {
        for (int j=i;j>=0;j--)
        {            
            if(arr[j+1]<arr[j])        
            swap(arr[j+1], arr[j]);            
            else
            break;            
        }
    }
    for (int i = 0; i<n;i++)
    cout<<arr[i]<<" ";
}