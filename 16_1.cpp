#include <iostream>
using namespace std;

int main()
{
    float a,b, ans;
    cout<<"enter the numbers 1 and 2: ";
    cin>>a>>b;
    try
    {
        if(b==0)
        {
            throw b;
        }
        else
        {
            ans = a/b;
            cout<<"answer = "<<ans<<endl;
        }
    }

    catch( float num)
    {
        cout<<"ERROR: division by "<<num<<endl;
    }
}
