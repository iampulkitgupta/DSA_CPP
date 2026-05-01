#include<iostream>
using namespace std;

void fun(int a[], int n)
{
    // cout<<sizeof(a)<<endl;
    for (int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
};    

int main(){
    int arr[6]={2,7,4,11,5,8};
    int temp;
    int n=6;
    temp=arr[n-1];
    for (int i = n; i>0; i--){        
        arr[i]=arr[i-1];
    }
    arr[0]=temp;

    fun(arr,n);

    // for (int i = 0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }
}