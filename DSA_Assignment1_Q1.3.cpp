//Shubhreet_Dhaliwal_2CO3_(Roll no.-102203117)
//Develop Menu driven program to demonstrate the following operations of Arrays
//Insertion
#include<iostream>
using namespace std;
void insert(int input[],int n,int pos,int val)
{
	for(int i=n;i>=pos-1;i--)
	{
		input[i]=input[i-1];
		
	}
	
	for(int i=0;i<=n;i++)
	{
		if(i==(pos-1))
		{
			input[i]=val;
		}
		cout<<input[i]<<" ";
	}
}
int main()
{
	int n=5;
	int i;
	int input[n];
	int val=91;
	int pos=3;
	for(i=0;i<n;i++)
	{
		cin>>input[i];
	}
	insert(input,n,pos,val);
}
