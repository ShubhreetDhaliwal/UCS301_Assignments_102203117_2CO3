/*Shubhreet_Dhaliwal_2CO3_(Roll no.-102203117)
Q4(2): Implement the logic to find the matrix multiplication*/
#include<iostream>
using namespace std;
int main()
{
	int i,j;
	int n=2;
	int a1[n][n];
	int a2[n][n],a3[n][n];
	cout<<"enter values in first matrix"<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a1[i][j];
		}
	}
	cout<<"enter values in second matrix"<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a2[i][j];
		}
	}
	for(i = 0; i < n; ++i)
		{
        	for(j = 0; j < n; ++j)
        	{
            	a3[i][j]=0;
        	}
        }
	for(int k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				a3[k][i]+=a1[k][j]*a2[j][i];
			}
		}
	}
	cout<<"	Output Matrix"<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a3[i][j]<<" ";
		}
		cout<<endl;
	}
}
