//Shubhreet_Dhaliwal_2CO3_(Roll no.-102203117)
//Develop Menu driven program to demonstrate the following operations of Arrays
//deletion
#include<iostream>
using namespace std;
void remove(int input[],int n,int val,int pos)
{
	for(int i=pos-1;i<n;i++)
	{
		input[i]=input[i+1];
		
	}
	for(int i=0;i<n-1;i++)
	{
		cout<<input[i]<<" ";
	}
}
int main()
{
	int n=5;
	int i;
	int val=50;
	int pos=3;
	int input[n];
	for(i=0;i<n;i++)
	{
		cin>>input[i];
	}
	remove(input,n,val,pos);
}
