#include <iostream>
using namespace std;
struct rational
{
int n;
unsigned int m;
};
rational to_rational(int x){
rational l;
l.n=x;
l.m=1;
return l;
}
rational operator~(rational x){
for(int i=2;i<(x.m);i++){
if((x.n%i==0)&&(x.m%i==0)){
x.n=(x.n)/i;
x.m=(x.m)/i;
}
}
return x;
}
void print(rational j){
    j=~j;
cout<<j.n<<"/"<<j.m<<" ";}
rational operator*(rational x, rational y){
rational z;
z.n=x.n*y.n;
z.m=x.m*y.m;
return ~z;
}
rational operator/(rational x, rational y){
rational z;
z.n=x.n*y.m;
z.m=x.m*y.n;
return ~z;
}
rational operator+(rational x, rational y){
rational z;
if(x.m==y.m){z.n=x.n+y.n;
z.m=x.m;}
else {z.n=(x.n*y.m)+(y.n*x.m);
z.m=x.m*y.m;
}
return ~z;}
rational operator-(rational x, rational y){
rational z;
if(x.m==y.m){z.n=x.n-y.n;
z.m=x.m;}
else {z.n=(x.n*y.m)-(y.n*x.m);
z.m=x.m*y.m;
}
return ~z;}
bool operator==(rational x, rational y){
if(x.m==y.m)return(x.n==y.n);
else{
x.n=x.n*y.m;
x.m=x.m*y.m;
y.n=y.n*x.m;
y.m=y.m*x.m;
return (x.n==y.n);
}
}
bool operator>(rational x, rational y){
if(x.m==y.m)return(x.n>y.n);
else{
x.n=x.n*y.m;
x.m=x.m*y.m;
y.n=y.n*x.m;
y.m=y.m*x.m;
return (x.n>y.n);
}
}
bool operator>=(rational x, rational y){
if(x.m==y.m)return(x.n>=y.n);
else{
x.n=x.n*int(y.m);
x.m=x.m*y.m;
y.n=y.n*int(x.m);
y.m=y.m*x.m;
return (x.n>=y.n);
}
}
bool operator<=(rational x, rational y){
if(x.m==y.m)return(x.n<=y.n);
else{
x.n=x.n*int(y.m);
x.m=x.m*y.m;
y.n=y.n*int(x.m);
y.m=y.m*x.m;
return (x.n<=y.n);
}
}
bool operator<(rational x, rational y){
if(x.m==y.m)return(x.n<y.n);
else{
x.n=x.n*int(y.m);
x.m=x.m*y.m;
y.n=y.n*int(x.m);
y.m=y.m*x.m;
return (x.n<y.n);
}
}
int main(){
rational g;
enter g;
print(g);
return 0;
}
