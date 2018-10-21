#include <iostream>
using namespace std;

struct massiv
{

    int chislo;
};

int main()
{

    int a,b;

    cin>>a>>b;
    massiv _1;
    _1.chislo = a;
    massiv _2;
    _2.chislo = c;
    cout <<"massiv_1="<<" "<<  _1.chislo<<endl;
    cout <<"massiv_2="<<" "<<_2.chislo<< endl;

    int n;       //номер операции
    cin>>n;
    if(n==1)
    {
        sum=(a+c);
        cout<<"summa="<<sum;
        }

    if(n==2)
    {

           int crav;

        crav=(a-c);
        if(crav>0)
        cout<<"massiv_1"<<">"<<"massive_2";
        else
        cout<<"massive_1"<<"<"<<"massive_2";

    }
    if(n==3)
    {

        int raz;
        raz=(a-c);
              if(raz<0)
            cout<<"raznica="<<" "<<-raz<<"/"<<x*d;
        else
            cout<<"raznica="<<" "<<raz<<"/"<<x*d;
    }
    if (n==4)
    {
        int umn;
        umn=(a*c);
        cout<<"umnojenie="<<umn;
    }
    if (n==5)
    {
      int del;
        del=(a/c);

        cout<<"delenie="<<del;
    }
        return 0;
}


