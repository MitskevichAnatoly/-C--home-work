#include <iostream>
#include <vector>
using namespace std;

int main()
{
int n;
cin>>n;
vector <int> ar(n);
ar.assign(n,1);
ar[0]=0;
ar[1]=0;
for(int i=2;i<n;i++)
    if(ar[i]==1){
        for(int j=i*2;j<n;j+=i){
            ar[j]=0;
        }
    }
int Pr=1;
for(int i=2;i<n;i++){
if(ar[i]==1)Pr*=i;
}
cout<<Pr;
    return 0;
}
