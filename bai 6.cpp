#include<bits/stdc++.h>
using namespace std;
int zero =0, one = 0;
void check(string t,int i)
{
    if(i > t.length()-1)
    {
        if(zero > one)
        {
            cout << "So 0 nhieu hon so 1";
        }
        else
        {
            cout << "So 0 it hon hoac bang so 1";
        }
    }
    else
    {
        if(t[i] == '0')
            zero++;
        else
        {
            one++;
        }
        check(t,i+1);
    }
}
int main()
{
    string s;
    getline(cin,s);
    check(s,0);
}
