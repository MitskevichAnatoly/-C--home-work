#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int A[n];

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
     for (int i = 0; i < n; i++)
     {
       if(A[i]%27==0||A[i]%72==0)
       {
        cout<<A[i]<<" ";
       }
     }
     return 0;
}
