#include <iostream>

using namespace std;

int main () {
	int n;
	cin >> n;
	int *A = new int [n];
	for (int i = 0; i < n; i++){
		cin >> A[i];
	}
	int j = 0;
	for (int i = 0; i < n; i++){
		if (A[i]%2 == 0)
		j++;
	}

	int *N = new int [n - j];
	j = 0;
	for (int i = 0; i < n; i++){
		if (A[i]%2 == 1){
			N[j] = A[i];
			j++;
		}
	}
	delete [ ] A;

	for (int i = 0; i < j; i++)
	cout << N[i] <<" ";
	return 0;
}
