#include <iostream>
using namespace std;

int main() {

//count target elements in a sorted array
    int arr[7] = {2,3,4,4,4,5,6};
    int n = 7;
    int start = 0, end = n-1, mid, first = -1, last = -1, target=4;
   
    while(start<=end)
    {
        mid = start + (end-start)/2;
        if (arr[mid]==target)
        {
            first = mid;
            end = mid - 1;
        }
        else if (arr[mid]<target)
        start = mid+1;
        else
        end = mid - 1;
    }
    start = 0, end = n-1;
    while(start<=end)
    {
        mid = start + (end-start)/2;
        if (arr[mid]==target)
        {
            last = mid;
            start = mid + 1;
        }
        else if (arr[mid]<target)
        start = mid+1;
        else
        end = mid - 1;
    }
    cout<<first<<" "<<last<<endl;
    cout<<last-first+1<<endl;
}