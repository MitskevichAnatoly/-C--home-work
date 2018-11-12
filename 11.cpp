#include <iostream>
using namespace std;

struct ray
{
  int n;
  int * A;
   ray(int a) : n(a), A(new int[a])
{}

   ray(const ray & c)
{
   n = c.n;
   A = new int[n];
   for (int i = 0; i < n; i++)
   {
    A[i] = c.A[i];
   }
}

 ray& operator=(ray c)
{
  A = new int[n];
  for (int i = 0; i < n; i++)
  {
   A[i] = c.A[i];
  }
}

void max_min()
{
 int v = A[0];
 int c, d, e;
 d = 0;
 e = v;
 c = 0;
 for(int i = 1; i < n; i++)
 {
  if(A[i] > v)
  {
   v = A[i];
  }
  if(A[i] < e)
  {
   e = A[i];
  }
}
if(v == e)
{
 delete[]A;
 A = new int[0];
 n = 0;
}
for(int i = 0; i < n; i++)
{
if(A[i] == v)
{
 c = i;
}
if(A[i] == e)
{
 d = i;
}
}
for(int i = 0; i < n; i++)
{
if((A[i] == v) && (i != c))
{
delete A;
n = n - 1;

}
if((A[i] == e) && (i != d)){
delete A;
n = n - 1;
}
}
delete A;
delete A;
n = n - 2;
}
};

int main()
{
int a;
cin>> a;
ray b(a);
for (int i = 0; i < b.n; i++)
{
cin >> b.A[i];
}
b.max_min();
for (int i = 0; i < b.n; i++)
{
cout << b.A[i] << " ";
}
return 0;
}
