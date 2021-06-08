#include<bits\stdc++.h>
using namespace std;
int n;
int fun(int i)
{
    if(i==n)
    {
        return n;      
    }
    cout<<i<<" ";
    return fun(i+1);
}
int main()
{
    cin>>n;
    cout<<fun(1);
}
