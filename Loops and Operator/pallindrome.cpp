# include <iostream>
using namespace std;

int main(){
    int inp;
    cout<<"Enter the Number: ";
    cin>>inp;
    int rem=0, ans=0, num= inp;
    while(num>0){        
        rem = num%10;                
        num/=10;                
        ans = ans*10+rem;    
    }
    if (ans == inp){        
        cout<<"Number is pallindrome";    
    }   
    else
    cout<<"Number is not pallindrome";    
}