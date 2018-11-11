// Нахождение суммы нечетных цифр целого числа
#include <iostream>

using namespace std;

int main (){
    int a, b = 0 ;
    cin >> a;
    for (int i=1; a > 0 ; i++) {
        if (a % 2 == 1) {
         b += a%10;
         a = (a - (a%10))/10;
    }
    else a = (a - (a%10))/10;
    }
    cout << b << endl;
return 0;
}
