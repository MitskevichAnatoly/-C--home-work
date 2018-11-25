#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,nh=0;
    cin>>n;
    vector <int> ar(2*n);
    ar.assign(n*2,1);
    int k=2;
    ar[0]=0;
    ar[1]=3;
    while(nh<=n){
    if(k<10 || k%10==1 || k%10==3 || k%10==7 || k%10==9){
        if(ar[k]==1){
            for(int i=k+k;i<=n*2;i+=k){
                ar[i]=0;
            }
        }
        else nh++;
    }
    k++;
    }
    nh=1;
    k=0;
    while(nh<=n){
        if(ar[k+1]==0)
        {cout<<k+1<<" ";
        nh++;}
        k++;
    }
    return 0;
}
