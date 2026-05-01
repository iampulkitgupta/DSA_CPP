#include<iostream>
using namespace std;

int main()
{
    //Sum of all elements of array
    int sum = 0;
    int n=6;
    int array[5];
    for (int i = 0;i<n-1;i++){
        sum += array[i];
    }
    //Sum of N number
    int ans = n*(n-1)/2;

    cout<<ans-sum;
}