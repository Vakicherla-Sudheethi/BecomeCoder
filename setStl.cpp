/*---SET AND MAP
set we have a normal set,unordered and multi set
map we have map and unordered map
set doesnt store the repeated elements thus it only stores 
unique elements
we declare a set as SYNTAX 1:
set<int>st-->for int data type
*/
#include<iostream>
#include<bits/stdc++.h>
using namespacse std;
int main()
{
	//any function takes log(n) timeComplexity
	//as set is of unique elements and ascending order
	//how to declare a set
	set<int>st;
	st.insert(10);//{10}
	st.insert(20);//{10,20}
	st.insert(10);//doesnt takes the duplicate item agian,as it already exists
	st.insert(5);//{5,10,20}
	//stores the elements in ascending order that are unique
	st.emplace(6);//{5,6,10,20}
	//emplace works as insert but this is more efficient than insert
	st.size(); //it gives the size of the set
	/*for getting the data 
	for(int i =0;i<st.size();i++)
	{
		cout<<st[i]<<" ";
	}
	but its an error as we cant access the elements based
	on their indexes as the previous indexes have been changed
	because of arranging them in ascending oreder and
	has unique elements */
	//method 1 for getting the data
	for(auto it=st.begin();it!=st.end();it++)
	{
		cout<<*it<<" ";//to bring the pointer 
	}
	cout<<"\n;"
	//method 2 for getting data
	/*for(auto it:st)//here auto takes the datatype that "it" was 
	{
		cout<<it<<" ";
	}*/
	//delete the elements in a set
	st.erase(st.begin());//erase with an iterator
	//finding the ele and deleting 
	auto it=st.find(5);
	auto it1=st.find(10);
	st.erase(it,it1);//erass multiple set
	st.erase(st.begin(),st.end());//erases from begin to end
	st.erase(10);//erase with key
	st.clear();//becomes empty similar as st.erase(st.begin(),st.end())
	for(auto it:st)//here auto takes the datatype that "it" was 
	{
		cout<<it<<" ";
	}
	//-----UNORDERED SET-------
	//declaration
	unordered_set<int>ust;//takes unique ele but not in order
	ust.insert(2);
	ust.emplace(10);
	ust.insert(2);
	ust.insert(3);
	//best time complexity is O(1)--constant
	//worst TC is o(size of set)---linear complexity
	
	//multi set--takes every elements and its dont unique but arranges in ascending order
	multiset<int>ms;
	ms.insert(1);//{1}
	ms.insert(1);//{1,1}
    ms.insert(2);//{1,1,2}
    ms.insert(3);//{1,1,2,3}
    ms.count(2);//can tell the count of 2 is repeated
    auto it=ms.find(1);//gives the firt occurance of 1
    
    //------MAP-------
    /*helps us to store a key value based
    declaration of map*/
    map<string,int>mpp;
    mpp["Sudhi"]=13;
    mpp["chimmy"]=15;
    mpp["AA"]=7;
    //to put a data into map
    mpp.emplace("euphoira",97);
    //to erase data
    mpp.erase(mpp.begin());
    for(auto it:mpp)
    {
    	cout<<it.first<<" "<<it.second;//it.first bring s the value and it.second bring the key
    	
	}
    
  	
	return 0;
}
