#include<bits/stdc++.h>
using namespace std;
int GCD(int a,int b)
{
    if(a>b)
    {
        return GCD(b,a);
    }
    else if(a == 0)
    {
        return b;
    }
    else if(a%2 ==0 && b%2==0)
        return 2*GCD(a/2,b/2);
    else if(a%2 ==0 && b%2==1)
    {
        return GCD(a/2,b);
    }
    else
    {
        return GCD(a,b-a);
    }
}
int main()
{
    int x,y;
    cin >> x>> y;
    cout << GCD(x,y);
}
