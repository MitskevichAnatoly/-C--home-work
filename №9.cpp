#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector <int> ar(n*2);
    ar.assign(n*2,1);
    ar[0]=0;
    ar[1]=0;
    for(int i=2;i<n*2;i++){
        if(ar[i]==1){
            for(int j=i*2;j<n*2;j+=i){
                ar[j]=0;
            }
        }
    }
    for(int i=2;i<n*2;i++){
        if(ar[i]==1 && ar[i*2+1]==1){
            cout<<i<<" ";
        }
    }
    return 0;
}
