#include <iostream>
#include <cstdlib>
using namespace std;

int Date( int D, int M, int Y )
{
    int a, y, m, kod;
    a = ( 14 - M ) / 12;
    y = Y - a;
    m = M + 12 * a - 2;
    kod = 7000 + ( D + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12 );
    return kod % 7;
}

int main()
{
    int D, M, Y;
    char C;
    string den[7] = { "SUN", "MON", "TUS", "WED", "THU", "FRI", "SAT" };
    cin >>D>>M>> Y;
    cout << den[ Date( D, M, Y ) ] << endl;

    system("pause");
    return 0;
}
