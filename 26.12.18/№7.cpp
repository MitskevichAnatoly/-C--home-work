/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <math.h>

using namespace std;
char digit(int n)
{
    switch(n)
    {
        case 0: return '0';
        case 1: return '1';
        case 2: return '2';
        case 3: return '3';
        case 4: return '4';
        case 5: return '5';
        case 6: return '6';
        case 7: return '7';
        case 8: return '8';
        case 9: return '9';
        case 10: return 'A';
        case 11: return 'B';
        case 12: return 'C';
        case 13: return 'D';
        case 14: return 'E';
        case 15: return 'F';
        case 16: return 'G';
        case 17: return 'H';
        case 18: return 'I';
        case 19: return 'J';
        case 20: return 'K';
        case 21: return 'L';
        case 22: return 'M';
        case 23: return 'N';
        case 24: return 'O';
        case 25: return 'P';
        case 26: return 'Q';
        case 27: return 'R';
        case 28: return 'S';
        case 29: return 'T';
    }
}

int F(int a, int p, char *s) //poluchenie celoy chacti. p - osnovanie
{
    int n = (int)a;
    int rest = n % p;
    n /= p;
    if(n == 0)
    {
        s[0] = digit(rest); return 1;
    }
    int k = F(n, p, s);
    s[k++] = digit(rest);
    return k;
}

void Double(double a, int p, char *s) //poluchenie drobnoy chasti
{
    int iter = 0;
    int k = 0;
    double k1 = k;
    do{
        a1 = a1 * p;
        int n = (int)(a1);
        s[k++] = digit(n);
        a1 -= (int)a1;
        iter++;
    }while(a1 > 0.00000001 && iter < 10)
    s[k] = '\0'
}

int main() 
{
    double a;
    char s[80] = { 0 };
    int p;
    system("chcp 1251");
    system("cls");
    cout << "Введите число: ";
    cin >> a;
    cout << "Введите основание системы счисления: ";
    cin >> p;
    int k = F((int)a, p, s);
    s[k++] = ',';
    D(a - (int)a, p, &s[k]);
    cout << s;
    cin.get();
    cin.get();
    return 0;
}
