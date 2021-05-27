//insertion  of elements using vectors
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>ve={20,30,40};
	ve.insert(ve.begin(),100);
	//ve.insert(ve.begin()+2,100);//this adds the index value to 2
	for(auto it:ve)
	{
		cout<<it<<" ";
	}
	return 0;
}
