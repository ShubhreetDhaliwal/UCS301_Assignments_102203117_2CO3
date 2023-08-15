/*Shubhreet_Dhaliwal_2CO3_(Roll no.-102203117)
Q4(1):Implement the logic to reverse the elements of an array*/
#include<iostream>
using namespace std;
void reverse(int arr[],int n)
{
	int i=0;
	while(i<n)
	{
		int num=arr[i];
		arr[i]=arr[n];
		arr[n]=num;
		i++;
		n--;
	}
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int n,i;
	n=5;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	reverse(arr,n-1);
}
