#include<iostream>
using namespace std;

int main(){
    int arr[6] = {1,5,2,10,15,25};
    int max = INT_MIN;
    int second_max = INT_MIN;

    for (int i =0; i<6; i++){
        if(arr[i]>max){
            max=arr[i];
        }        
    }
    cout<<"Max : "<<max<<endl;
    for (int i =0; i<6; i++){        
        // cout<<"For i: "<<i<<", arr["<<i<<"] : "<<arr[i]<<", Second Max : "<<second_max<<", Max : "<<max<<endl;        
        if(arr[i]>second_max&&arr[i]<max){            
            second_max=arr[i];
        }        
        // cout<<"Second Max Outer: "<<second_max<<endl;;
    }    
    cout<<"Second Max : "<<second_max<<endl;
}