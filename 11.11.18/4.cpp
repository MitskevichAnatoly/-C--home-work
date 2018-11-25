#include <iostream>

using namespace std;

int main()
{
   int n;
   int sum=0;
   cin>>n;
   int A[n];
   for(int i=1;i<=n;i++)
   {
       cin>>A[i];
   }

   for(int i=1;i<=n;i++)
   {
    int k=0;

    for(int j=2;j<A[i];j++)
    {

    if(A[i]%j==0)
    {
      k++;
    }
    }

    if(k==0)
    {
       sum=sum+A[i];
    }
   }
   cout<<sum;
    return 0;
}
