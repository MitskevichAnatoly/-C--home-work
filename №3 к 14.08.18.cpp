#include <iostream>
using namespace std;

int main() {
    int x;
    int h = 2; // т.к. ноль мы не берем в расчет, и ноль не несет в себе ничего мы h берем на 1 больше
    cin >> x;
    if (x == 0)
    {
        cout << 0;
        return 0;
    }
    int sum = x;
    while (cin >> x && x)
    {
        sum += x;
        ++h;
    }

    cout <<  sum / h;

    return 0;
}

