//function calling
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void fun1()
{
	cout<<"i am fun1"<<"\n";//this exectues after the fun1 is called
}
void fun2()
{
	cout<<"i am fun 2 and calling fun 1"<<"\n";//this exectues after the fun2 is called
	fun1();//this function calls -fun1
	cout<<"after fun 1"<<"\n";//this exectues after fun1 total exection
}
int main()
{
	cout<<"calling fun2"<<"\n";//this executes 1st
	fun2();//function calling -fun2
	cout<<"i came from fun2";//finally returns to the last statement
	return 0;
}
