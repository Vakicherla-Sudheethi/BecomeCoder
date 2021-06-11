#include<iostream>
#include<vector>
using namespace std;

void PrintCombinationSum(int n,vector<int>&ds)
{
	//base case
	if(n==0)//when ds is filled
	{
	for(auto it:ds)
	{
		cout<<it<<" ";
		}	
		cout<<"\n";
	}
	//loop to call from 1 to n to get sum n
	for(int i=1;i<=n;i++)
	{
		ds.push_back(i);
		PrintCombinationSum(n-i,ds);
		ds.pop_back();//while coming back remove the recent pushed element
	}
}
int main()
{
	int n;
	cin>>n;
	vector<int>ans;//empty data structure to store  all possible combinations
	PrintCombinationSum(n,ans);
	return 0;
	
	
}
