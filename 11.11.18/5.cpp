
#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int A[n];
   for(int i=1;i<=n;i++)
   {
       cin>>A[i];
   }

   for(int i=1;i<=n;i++)
   {


    int max1=0;
    for(int j=2;j<A[i];j++)
    {
    if(A[i]%j==0)
    {
      max1=j;
    }
    }

    if(max1!=0)
    {
       cout<<max1<<" ";
    }
    else
        cout<<A[i]<<" ";
   }
    return 0;
}
