#include <iostream>
using namespace std;

int main()
{
    int num ;
    cout<<"Enter the Number: ";
    cin>>num;
    
    int rem, ans = 0, mul=1;
    while(num!=1)
        {            
            if (num%2==1)
            return 0;
            else
            {   
                rem=num%2;
                num/=2;
                if (ans>INT_MAX/10 || mul>INT_MAX/10)            
                return 0;
                else{
                ans+=rem*mul;
                mul=mul*10;
                }
            }                            
        }
    cout<<ans<<endl;
}