#include<iostream>
using namespace std;

int main()
{
    int arr[6] = {2,3,4,7,11,12};
    int n = 6;    
    int start = 0, end = n-1, k=3, ans,mid;         

    while(start<=end){
        mid = start + (end-start)/2;
        if (arr[mid]-mid-1>=k){
            end = mid-1;
            ans = mid;
        }                
        else 
        start=mid+1;        
    }

    cout<<ans+k;

}