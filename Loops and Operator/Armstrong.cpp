#include <iostream>
using namespace std;

int count_digit(int n){
    int count = 0;
    while(n)
    {
        count++;
        n/=10;
    }
    return count;
}

int armstrong_num(int num, int dig){
    int n=num,rem, ans=0;
    while(n){
        rem = n%10;
        n/=10;
        ans = pow(rem, dig)+ans;
    }
    return ans;
}

int main(){
    int num;
    cin>>num;
    int dig;    
    dig = count_digit(num);
    cout<<armstrong_num(num, dig);
}