#include <iostream>
using namespace std;

int main() {
    double y,x;
    int h = 2;
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
    y=sum%h;
    if(y!=0)
    {
        cout<<sum/h<<"and"<<"("<<y<<"/"<<h<<")";
    }
    else
    cout << sum / h;

    return 0;
}
