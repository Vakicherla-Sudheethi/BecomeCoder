//code to reverse an array using recursion
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void arrayrev(int l,int r,int a[])
{
	//write a base case to stop
	if(l>=r)
	{
		return;
	}
	swap(a[l],a[r]);
	return arrayrev(l+1,r-1,a);
	
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	arrayrev(0,n-1,a);
	return 0;
}
