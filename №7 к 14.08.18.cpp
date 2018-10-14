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

    int ms = A[0] + A[4];
    for (int i = 0; i < n - 4; i++)
        {
        for (int l = i + 4; l < n; l++)
        {
            if (A[i] + A[l] < ms)
                ms = A[i] + A[l];
        }
    }

    cout << ms;

    return 0;
}
