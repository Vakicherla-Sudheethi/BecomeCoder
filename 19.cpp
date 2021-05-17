#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num1,num2;
	cin>>num1>>num2;//12 24
	if(num1>num2)
	{
		swap(num1,num2);
	}
   for(int i=num2;i<num1*num2;i++)
   {
   	if(i%num1==0 && i%num2==0)
   	{
   	   cout<<i<<"  ";
		  break;	
	}
   }
}
