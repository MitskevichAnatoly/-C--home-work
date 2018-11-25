#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <cmath>
using namespace std;
int main()
{
    int n,h=1;
    cin>>n;
    if(n%2==0){
    for(int i=0;i<n/2;i++){
        h*=10;
    }
    string hl=to_string(h);
    cout<<h;
    for(int i=hl.lenght()-1;i>=0;i--){
        cout<<hl[i];
    }
    cout<<endl;
    while(h!=pow(10,n/2+1)){
        h++;
        hl=to_string(h);
        cout<<h;
         for(int i=hl.lenght()-1;i>=0;i--){
        cout<<hl[i];
    }
    cout<<endl;
    }
    }
    return 0;
}
