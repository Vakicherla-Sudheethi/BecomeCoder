//sorting in vector
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>ve={7,6,8,9,3,0};//can define any size of elements
	sort(ve.begin(),ve.end());
	for(auto it:ve)
	{
		cout<<it<<endl;
	}
}
