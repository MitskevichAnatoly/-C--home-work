#include <iostream>
using namespace std;

struct drob
{

    int chiclitel;
    float znamenatel;
};

int main()
{

    int a,b;

    cin>>a>>b;
    int i=1;
   while(i<a)
   {
       i++;
       if(a%i==0&&b%i==0)
       {
           a=a/i;
           b=b/i;
    }
   }
    drob _1;
    _1.chiclitel = a;
    _1.znamenatel = b;


    int c,d;
    cin>>c>>d;
    int j=1;
   while(j<c)
   {
       j++;
       if(c%j==0&&d%j==0)
       {
           c=c/j;
           d=d/j;
    }
   }

        drob _2;
    _2.chiclitel = c;
    _2.znamenatel = d;
    cout <<"drob_1="<<" "<<  _1.chiclitel<<"/"<< _1.znamenatel << endl;
    cout <<"drob_2="<<" "<<_2.chiclitel<<"/"<< _2.znamenatel << endl;

    int n;       //номер операции
    cin>>n;
    if(n==1)
    {
        int y=1;
        y<=d;
        if(b<=d)
        {
           while(b*y%d!=0)
           {
                 y++;
           }
           int x,sum;
           x=b*y/d;
        sum=(a*y+c*x);
        cout<<"summa="<<sum<<"/"<<x*d;
        }
       if(b>d)
        {
           while(d*y%b!=0)
           {
               y++;
           }
            int x,sum;
           x=b*y/d;
           sum=(a*y+c*x);
        cout<<"summa="<<" "<<sum<<"/"<<y*d;
        }

    }
    if(n==2)
    {
               int y=1;
        y<=d;
        if(b<=d)
        {
           while(b*y%d!=0)
           {
                 y++;
           }
           int x,crav;
           x=b*y/d;
        crav=(a*y-c*x);
        if(crav>0)
        cout<<"drob_1"<<">"<<"drob_2";
        else
        cout<<"drob_1"<<"<"<<"drob_2";
        }
       if(b>d)
        {
           while(d*y%b!=0)
           {
               y++;
           }
           int x,crav;
           x=d*y/b;
        crav=(a*x-c*y);
        if(crav>0)
        cout<<"drob_1"<<">"<<"drob_2";
        else
        cout<<"drob_1"<<"<"<<"drob_2";
        }
    }
    if(n==3)
    {
        int y=1;
        y<=d;
        if(b<=d)
        {
           while(b*y%d!=0)
           {
                 y++;
           }
           int x,raz;
           x=b*y/d;
        raz=(a*y-c*x);
              if(raz<0)
            cout<<"raznica="<<" "<<-raz<<"/"<<x*d;
        else
            cout<<"raznica="<<" "<<raz<<"/"<<x*d;
        }
       if(b>d)
        {
           while(d*y%b!=0)
           {
               y++;
           }
            int x,raz;
           x=b*y/d;
           raz=(a*x-c*y);
        if(raz<0)
            cout<<"raznica="<<" "<<-raz<<"/"<<y*d;
        else
            cout<<"raznica="<<" "<<raz<<"/"<<y*d;
        }

    }
    if (n==4)
    {
        int umn1,umn2;
        umn1=(a*c);
        umn2=d*b;
            int l=1;
   while(l<umn1)
   {
       l++;
       if(umn1%l==0&&umn2%l==0)
       {
           umn1=umn1/l;
           umn2=umn2/l;
    }
   }
        cout<<"umnojenie="<<umn1<<"/"<<umn2;
    }
    if (n==5)
    {
      int del1,del2;
        del1=(a*d);
        del2=b*c;
            int l=1;
   while(l<del1)
   {
       l++;
       if(del1%l==0&&del2%l==0)
       {
           del1=del1/l;
           del2=del2/l;
    }
   }
        cout<<"delenie="<<del1<<"/"<<del2;
    }
        return 0;
}

