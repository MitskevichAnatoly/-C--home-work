#include <iostream>

using namespace std;

int main()

{
int x,y,z=1;
cin>>x>>y;
while(x*z%y!=1)
{
   z++;
}
if(x*z%y==1)
    cout<<z;
else
    cout<<"F";
return 0;
}

