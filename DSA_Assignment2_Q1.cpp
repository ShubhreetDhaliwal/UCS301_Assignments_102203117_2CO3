/*Shubhreet_Dhaliwal_2CO3_(Roll no.-102203117)
Q1:Implement the Binary search algorithm regarded as a fast search algorithm with run-time 
complexity of ?(log n) in comparison to the Linear Search.*/
#include<iostream>
using namespace std;
int binary_search(int arr[],int n,int start,int num)
{
	while(start<=n)
	{
		int mid=start+(n-start)/2;
		if(arr[mid]==num)
		{
			return mid;
		}
		if(num>arr[mid])
		{
			start=mid+1;
		}
		if(num<arr[mid])
		{
			n=mid-1;
		}
	}

}
int main()
{
	int i,n;
	int start=0;
	int arr[n];
	n=5;
	int num=10;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int s=binary_search(arr,n-1,start,num);
	cout<<s;
}
