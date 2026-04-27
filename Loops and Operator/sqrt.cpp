# include <iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter the Number for sqrt: ";
    cin>>num;
    int n = 1, sqrt=0;
    while(n){
        sqrt=n*n;
        if (sqrt>=num)
        {
            cout<<n-1;
            break;
        }
        if (sqrt>=num){
            cout<<n;
            break;
        }
        else
        {
            n+=1;
        }        
    }    
}