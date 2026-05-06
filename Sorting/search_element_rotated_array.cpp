#include <iostream>
using namespace std;

int main() {

 //Search Element in rotated Array
    // int arr[7]={4,5,6,7,0,1,2};
    int arr[7]={2,4,5,6,7,0,1};
    int n = 7;
    int start = 0, end = n-1, target = 7,index = -1,mid;
   
    while(start<=end)
    {
        mid = start + (end-start)/2;
        if (arr[mid]==target){
            index = mid;
            break;
        }
        else if (arr[mid]>arr[0]){
            if (arr[start]<=target && target<arr[mid])
            end = mid - 1;
            else
            start = mid + 1;
        }
        else
        {
            if (arr[mid]<target&&target<=arr[end])
            start = mid + 1;
            else
            end = mid - 1;
        }            
    }
    cout<<"Index is : "<<index;
}