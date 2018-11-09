#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>>a;
    for(int i;i=2;i++)
    {
        i<(a/2);
        if(a%i==0)
        {
            cout<<a;
        }
        else
        {
            cout<<"False";
        }
        break;

    }
    return 0;
}
