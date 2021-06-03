//sorting-method 2
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=1;i<n;i++)
	{
		if(a[i]<a[i-1])
		{
			break;
		}
	}
}
