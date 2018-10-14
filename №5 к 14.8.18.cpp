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
    int min=A[0];
    for (int i = 0; i < n; i++)
    {
        if(A[i]<min)
            A[i]=min;
    }
    cout<<min<<" ";
    int m;
    if(min==A[0])
    {
       m=A[1];
    }
    else
        m=A[0];
        for (int i = 0; i < n; i++)
    {
        if(A[i]<m&&A[i]!=min)
            A[i]=m;
    }
    cout<<m<<" ";

    return 0;
}
