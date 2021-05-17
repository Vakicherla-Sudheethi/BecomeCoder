#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int n=2456;
    int r,res=0;
	while(1)//true
	{
		r=n%10;
		n=n/10;
		res=res*10+r;
		if(n==0)
		{
			break;
		}
	}
	cout<<res;
	return 0;
}
