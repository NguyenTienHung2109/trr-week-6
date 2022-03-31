#include<bits/stdc++.h>
using namespace std;
bool check(string t,int i)
{
    if(i > t.length()/2 -1)
    {
        return true;
    }
    else
    {
        if(t[i]==t[t.length()-1-i])
        {
            return (t,i+1);
        }
        else
        {
            return false;
        }
    }
}
int main()
{
    string s;
    getline(cin,s);
    if(check(s,0))
    {
        cout << "Xau doi xung";
    }
    else cout << "Khong phai xau doi xung";
}
