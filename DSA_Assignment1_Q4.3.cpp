/*Shubhreet_Dhaliwal_2CO3_(Roll no.-102203117)
Q4(3): Implement the logic to find the Transpose of a Matrix*/
#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	n=2;
	int a1[n][n],a2[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a1[i][j];
		}
	}
	cout<<"OUTPUT 1:"<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a1[i][j];
		}
		cout<<endl;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			a2[j][i]=a1[i][j];
		}
	}
	cout<<"Transpose of Matrix"<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a2[i][j];
		}
		cout<<endl;
	}
}
