#include<bits/stdc++.h>
using namespace std;
int Min;
int m(string a,int i, int j)
{
    if(i == j)
    {
        return a[j]-'0';
    }
    else
    {
        return min(a[j]-'0',m(a,i,j-1));
    }
}
int main()
{
    string s;
    getline(cin,s);
    cout << m(s,0,s.length()-1);
}
