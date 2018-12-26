/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr = new int[n];
    for(int i = 0; i < n; i++)
    cin >> n;
    int m,l; 
    int j = 0; 
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == m)
        j++;
        if(arr[i] == l)
        j++;
    }
    if(j => 2)
    cout << "Yes";
    else
    cout << "No";
return 0;
}
