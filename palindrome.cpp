//palindrome
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isPallin(int l,int r,string s)
{
	if(l>r)
	{
		return true;
	}
	if(s[l]!=s[r])
	{
		return false;
	}
	return isPallin(l+1,r-1,s);
}
int main()
{
	string s;
	cin>>s;
	int n=s.size();
	cout<<isPallin(0,n-1,s);
	return 0;
}
