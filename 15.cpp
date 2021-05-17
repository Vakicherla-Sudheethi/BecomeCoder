#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(a>b && a>c)//&&checks both the conditions to be s to be true
	{
		cout<<"a is great";
	}
    else if(b>a && b>c)
	{
		cout<<"b is great";
	}
	else
	{
		cout<<"c is great";
	}
}
