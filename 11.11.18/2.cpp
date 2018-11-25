
#include <iostream>

using namespace std;

int main (){
    int a, b = 1 ;
    cin >> a;
    if(a%2== 1)
    {
      for (int i=1; a > 0 ; i++)
      {
            if (a % 2 == 1)
        {
         b *= a%10;
         a = (a - (a%10))/10;
        }
        else
        a = (a - (a%10))/10;
      }
    }

        if(a%2== 0)
    {
      for (int i=1; a > 0 ; i++)
      {
            if (a % 2 == 0)
        {
         b *= a%10;
         a = (a - (a%10))/10;
        }
        else
        a = (a - (a%10))/10;
      }
    }
        cout << b << endl;
return 0;
}
