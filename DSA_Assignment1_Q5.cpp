/*Shubhreet_Dhaliwal_2CO3_(Roll no.-102203117)
Write a program to find sum of every row and every column in a two-dimensional 
array.*/
#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	n=2;
	int a1[n][n];
	int sum=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a1[i][j];
		}
	}
	cout<<"Matrix"<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a1[i][j]<<" ";
		}
		cout<<endl;
	}
	for(i=0;i<n;i++)
	{
		sum=0;
		for(j=0;j<n;j++)
		{
			sum+=a1[i][j];
			
		}
		cout<<"Sum of row "<<i+1<<" :"<<sum<<endl;
	}
	for(i=0;i<n;i++)
	{
		sum=0;
		for(j=0;j<n;j++)
		{
			sum+=a1[j][i];
			
		}
		cout<<"Sum of column "<<i+1<<" :"<<sum<<endl;
	}
}
