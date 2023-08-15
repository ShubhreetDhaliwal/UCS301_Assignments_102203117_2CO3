//Shubhreet_Dhaliwal_2CO3_(Roll no.-102203117)
//Develop Menu driven program to demonstrate the following operations of Arrays
//Linear_Search

#include<iostream>
using namespace std;
void linear(int arr[],int n,int num)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==num)
		{
			cout<<"Index:"<<i<<endl;
			cout<<"Position:"<<i+1;
			count++;
		}
	}
	if(count==0){
	cout<<"Element doesn't match";
	}
}
int main()
{
	int n,i;
	n=5;
	int val=50;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	linear(arr,n,val);
}
