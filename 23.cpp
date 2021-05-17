#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,r;
	cout<<"enter two numbers"<<endl;
	cin>>a>>b;
	if(a<b)
	{
		r=a;
		a=b;
		b=r;
	}
	while(1)
	{
		r=a%b;
		if(r==0)
		{
			a=b;
			b=r;		
		}
		cout<<"the gcd is "<<" "<<a<<"  "<<b;
	return 0;
	}	
}
