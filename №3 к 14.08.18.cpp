#include <iostream>
using namespace std;

int main() {
    int x;
    int h = 2; // �.�. ���� �� �� ����� � ������, � ���� �� ����� � ���� ������ �� h ����� �� 1 ������
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

