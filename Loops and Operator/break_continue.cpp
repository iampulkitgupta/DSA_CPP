# include <iostream>
using namespace std;

int main()
{

    //break
    for (int i = 1;i<=10;i++)
    {
        if (i==4)
        {
            continue;
        }
        else if(i==9)
        {
            break;
        }
        cout<<i<<" ";        
    }
}