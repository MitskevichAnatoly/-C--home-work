#include <iostream>

using namespace std;

int main()
{
   int n,d;
   float ch;
   cin>>n;
   cout<<"kopen 2 ct. ili 3 (1-2ct 2-3ct)";
   cin>>d;
   if (d==1)
   {
      for(float i=0;i<=n;i=i+0.001)
   {
      if(i*i<=n)
       ch=i;
   }

   cout<<ch;
   }

   if (d==2)
   {
      for(float i=0;i<=n;i=i+0.01)
   {
      if(i*i*i<=n)
       ch=i;
   }

   cout<<ch;
   }
    return 0;
}

