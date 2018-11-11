#include <iostream>

using namespace std;

int main()
{
    int n,k,a=1,b=1,c=1,C;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        a*=i;
    }
    for(int j=1;j<=k;j++)
    {
        b*=j;
    }
    for(int l=1;l<=n-k;l++)
    {
        c*=l;
    }
    C=a/(b*c);
    cout<<a<<" "<<b<<" "<<c<<endl;

    cout<<C;
    return 0;
}
