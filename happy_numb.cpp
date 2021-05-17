#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num;
	cin>>num;
	int res=0,r;
	while(1)//true
	{
		r=num%10;//this brings last digit from num
		num=num/10;//changes the number
		res=res+r*r;
		if(num==0)
		{
			num=res;//stores res in num
			res=0;
			if(num>=1 && num<=9)//to get single digit
			{
				break;
			}
		}
	}
    if(num==1)
    {
    	cout<<"happy number";
	}
	else
	{
		cout<<"not a happy number";
	}
	return 0;	
}
