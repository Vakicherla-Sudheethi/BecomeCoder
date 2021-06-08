#include<bits/stdc++.h>
using namespace std;

int getsum(int n)
{
if(n <= 1)
return n;
return n + getsum(n-1);
}

int main()
{
cout<<getsum(8)<<endl;
return 0;
}
