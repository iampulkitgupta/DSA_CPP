#include<iostream>
using namespace std;

int main()
{
    int arr[10]={3,4,1,2,6,9,5,10,20,11};
    int index;
    int n = sizeof(arr)/sizeof(index);
    // cout<<"n "<<n<<endl;

    for (int i = 0; i<n-1; i++)
    {
        index = i;
        // cout<<"Index "<<index<<endl;
        for (int j = i+1;j<n;j++)
        {
            if(arr[j]<arr[index])
            index = j;
        }
        // cout<<"arr[index]->"<<arr[index]<<endl;
        // cout<<"arr[i]->"<<arr[i]<<endl;
        // cout<<"----------------------"<<endl;
        swap(arr[index],arr[i]);    
        
    }    

    for(int i = 0; i<n;i++)
    cout<<arr[i]<<" ";

}