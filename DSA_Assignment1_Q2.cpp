//Shubhreet_Dhaliwal_2CO3_(Roll no.-102203117)
/*Q2-Design the logic to remove the duplicate elements from an Array and after the 
deletion the array should containtheunique elements*/

#include<iostream>
using namespace std;
void binary(int arr[],int n)
{
	int i,j;
	int count=0;
	//int output[n];
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{

		    if (arr[i] == arr[j])
            {
	
				for(int z=j;z<n;z++)
				{
					arr[z]=arr[j+1];
				}
				n--;
				j--;
			}
		}
	}
	for(int z=0;z<n;z++)
	{
		cout<<arr[z]<<" ";
	}
}
int main()
{
	int i,n;
	n=5;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	binary(arr,n);
}
