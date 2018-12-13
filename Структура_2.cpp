#include <iostream>
#include <string>
#include <bitset>
#include <math.h>
#include <sstream>
using namespace std;
template <typename T>
string tstr(T pNumber)
{
 ostringstream oOStrStream;
 oOStrStream << pNumber;
 return oOStrStream.str();
}
struct IpAddress{
bitset<32> ip;
bitset<32> mask;
};
void enter(IpAddress &h){
    int l=0;
for(int i=0;i<4;i++){
 int a;
 cin>>a;
 bitset<8> fg(a);
 for(int j=0;j<8;j++){
    h.ip[l]=fg[j];
l++;
 }
}
h.mask=0;
int b=(h.ip).count();
for(int i=0;i<b;i++){
    h.mask[i]=1;
}
}
void printf(string ar){
for(int i=32;i>=1;i--){
    cout<<ar[i-1];
    if(i%8==1 && i!=32 && i!=1)cout<<".";
}    cout<<endl;
}
void print_ip(IpAddress h){
for(int i=1;i<=32;i++){
    int s;
cin>>s;
if(s==2){
for(int i=1;i<=32;i++){
    cout<<h.ip[i-1];
    if(i%8==0 && i!=32)cout<<".";
}}
if(s==10){
        int g=0;
    for(int i=1,j=0;i<=32;i++,j++){
        g+=(h.ip[i]*pow(2,j));
        if(j==7){
            j=0;
            if(i!=32)cout<<g<<".";
            else cout<<g;
            g=0;
        }
    }
if(s==16){
        string z;
        char a='A';
        char b='B';
        char c='C';
        char d='D';
        char e='E';
        char f='F';

 int g;
    for(int i=1,j=0;i<=32;i++,j++){
        g+=(h.ip[i]*pow(2,j));
        if(j==3){
            j=0;
            switch(g){
            case 10:z=z+a;
            break;
            case 11:z=z+b;
            break;
            case 12:z=z+c;
            break;
            case 13:z=z+d;
            break;
            case 14:z=z+e;
            break;
            case 15:z=z+f;
            break;
            default:z=z+tstr(g);
            break;
            }
            g=0;
            }
    }
    cout<<z;
}
}
cout<<endl;
}
void print_mask(IpAddress h){
int s;
cin>>s;
if(s==2){
for(int i=1;i<=32;i++){
    cout<<h.mask[i-1];
    if(i%8==0 && i!=32)cout<<".";
}}
if(s==10){
        int g=0;
    for(int i=1,j=0;i<=32;i++,j++){
        g+=(h.mask[i]*pow(2,j));
        if(j==7){
            j=0;
            if(i!=32)cout<<g<<".";
            else cout<<g;
            g=0;
        }
    }
if(s==16){
        string z;
        char a='A';
        char b='B';
        char c='C';
        char d='D';
        char e='E';
        char f='F';

 int g;
    for(int i=1,j=0;i<=32;i++,j++){
        g+=(h.mask[i]*pow(2,j));
        if(j==3){
            j=0;
            switch(g){
            case 10:z=z+a;
            break;
            case 11:z=z+b;
            break;
            case 12:z=z+c;
            break;
            case 13:z=z+d;
            break;
            case 14:z=z+e;
            break;
            case 15:z=z+f;
            break;
            default:z=z+tstr(g);
            break;
            }
            g=0;
            }
    }
    cout<<z;
}
}
cout<<endl;
}
string address(IpAddress h){
 bitset<32> ad(0);
 ad=(h.ip & h.mask);
 string j=ad.to_string();
 return j;
}
int compAdd(IpAddress h){
int b=(h.mask).count();
int cad=0;
for(int i=31,j=0;i>b;i--){
j++;
cad+=(h.ip[i]*pow(2,j));
}
return cad;
}
int main()
{
IpAddress g;
enter(g);
print_ip(g);
print_mask(g);
printf(address(g));
cout<<compAdd(g);
return 0;
}
