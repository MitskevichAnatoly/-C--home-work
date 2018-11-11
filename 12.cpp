#include <iostream>

using namespace std;

int main () {
	int n;
	cin >> n;
	int *A = new int [n];
	int *N = new int [n];
	for (int i = 0; i < n; i++)
    {
		cin >> A[i];
       N[i]=A[i]*A[i];
	}
	for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<" "<<N[i]<<" ";
	}
return 0;
}

