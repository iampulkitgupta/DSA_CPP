#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    int arr1[5];

    int j = 4;
    for (int i = 0; i<5;i++)
    {
        arr1[j]=arr[i];
        j--;
    }
    for (int i = 0; i<5; i++){
        arr[i]=arr1[j];
    }


    int b[6]={1,2,3,4,5,6};
    int start=0, end = 5;

    while(start<end){
        swap(b[start],b[end]);
        start++;
        end--;
    };

    for (int i= 0; i<6;i++)
    cout<<b[i]<<" ";
}