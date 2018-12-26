/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <math.h>

using namespace std;

int main() 
{
    int n;
    cin >> n;
    int *Arr = new int[n];
    int *Brr = new int[n];
    int *Crr = new int[n];
    for(int  i = 0; i < n; i++)
    cin >> Arr[i];
    bool OK; //osnovnaiy proverka
    Brr[0] = Arr[0];
    
    for(int i = 0; i < n; i++)
    Crr[i] = 0;
    
    Crr[0]++;
    bool OK2; //proverka dla cikla
    int k = 0;
    
    for(int i = 1; i < n; i++)
    {
        OK2 = false;
        for(int j = 0; j < i; j++)
        {
            if(Arr[i] == Brr[j])
            {
                Crr[j]++;
                OK2 = true;
            }
            if(i == j && OK2 = false)
            {
                k++;
                Brr[k] = Arr[i];
            }
        }
    }
    int j = 0;
    int max = Crr[0];
    for(int i = 0; i < n; i++)
    {
        if(max < Crr[i])
        {
            max = Crr[i];
            j = i;
        }
        
    }
    
    if(max < (n - (n % 2))/2)
    {
        OK = true;
        cout << Arr[j];
    }
    else
    cout << "NO";
    return 0;
}
