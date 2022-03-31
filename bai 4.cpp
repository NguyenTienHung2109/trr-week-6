#include<bits/stdc++.h>
using namespace std;
void Reverse(string t,int i)
{
    if(i > t.length()/2 -1)
    {
        cout << t;
    }
    else
    {
        swap(t[i],t[t.length()-1-i]);
        Reverse(t,i+1);
    }
}
int main()
{
    string s;
    getline(cin,s);
     Reverse(s,0);
}
