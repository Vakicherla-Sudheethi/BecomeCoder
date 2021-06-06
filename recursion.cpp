//recursion
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void fun1(int n)//accepts n elements
{
	if(n<=0)
	{
		return;
	}
	cout<<"hello"<<"\n";
	fun1(n-1);//recursion call
}
int main()
{
	int n=5;//this repeats n no.of times
	fun1(n);
	return 0;
}

