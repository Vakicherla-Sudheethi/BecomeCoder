#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int num,a=1,i;
cout<<"Enter a number \n";
cin>>num;
for(i=2;i<=sqrt(num+1);i++)
{
	if(num%i==0)
	{
		cout<<"Not a prime number";
		a=0;
		break;
	}
}
if(a==1)
{
  	cout<<"prime number";
}
}
