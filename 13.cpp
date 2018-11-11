#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = "dfgsffffgbbbbbfgdggfggggggxgfbdfgfggvvvvgg";
    char t = s[0];
    int c = 1;
    for(int i=0; i<s.size(); i++)
    {
        if(i==0)
        {
            s[i]!=s{i+1}
        }

        if(s[i]!=s[i+1])
        {
            t=s[i+1];
            cout<<c<<s[i];
            c=1;
        }
        else c++;

    }
}
