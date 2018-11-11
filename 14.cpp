#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = "3d5f6a";
    char t = s[0];
    int c = 1;
    for(int i=1; i<s.size(); i++)
    {
        if(s[i]==1)
         cout<<s[i+1];
        if(s[i]==2)
        {
            for(int j=0;j<2;j++)
                cout<<s[i+1];
        }
        if(s[i]==3)
        {
            for(int j=0;j<3;j++)
                cout<<s[i+1];
        }
        if(s[i]==4)
        {
            for(int j=0;j<4;j++)
                cout<<s[i+1];
        }
        if(s[i]==5)
        {
            for(int j=0;j<5;j++)
                cout<<s[i+1];
        }
        if(s[i]==6)
        {
            for(int j=0;j<6;j++)
                cout<<s[i+1];
        }
        if(s[i]==7)
        {
            for(int j=0;j<7;j++)
                cout<<s[i+1];
        }
        if(s[i]==8)
        {
            for(int j=0;j<8;j++)
                cout<<s[i+1];
        }
        if(s[i]==9)
        {
            for(int j=0;j<9;j++)
                cout<<s[i+1];
        }
    }
}

