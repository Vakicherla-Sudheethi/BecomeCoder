#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int gcd;
	int num1,num2;
	cout<<"enter the values of num1 & num2"<<endl;
	cin>>num1>>num2;
	{
		if(num2==0)
		{
		cout<<num1;
		return gcd(num1,num2-num1);
     	}
    cout<<"gcd of the given numbers is"<<gcd(num1,num2);
	return 0; 	
    }
	
	
}
