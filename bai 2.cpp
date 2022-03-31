#include<bits/stdc++.h>
using namespace std;
int ones(string t,int i, int j)
{
    if(i > j) return 0;
    else
    {
        int dem =0;
        if(t[i] == '1')
            dem++;
        if(t[j] == '1'&& i!=j)
            dem++;
        return ones(t,i+1,j-1) + dem;
    }
}
int main()
{
    string s;
    getline(cin, s);
    cout << ones(s,0,s.length()-1);
}
