#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num=1221,r,res=0;
    int a=num;
    while(num)
    {
        r=num%10;
        res=res*10+r;
        num=num/10;
    }
    if(a==res)
    {
        cout<<"palindrome"<<" "<<a<<endl;
    }
    else
	{
        cout<<"not palindrome"<<" "<<a<<endl;
    }
}
