//Program to mimic mnemonic series

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cout<<"Enter any integer:";
	cin>>n;

	//making array of n*n dimensions and initializing all of them with 0 initially
	int arr[n][1000]={0};

	arr[0][0]=1;
	
	//making new variables
	int count=0,number,j,k;

	//making list for n rows
	for(int i=0;i<n-1;i++)
		for(j=0,k=0;arr[i][j]!=0;j++)
		{
			count=0;
			number=arr[i][j];
			while(arr[i][j]==number)
			{
				j++;
				count++;
			}
			arr[i+1][k++]=number;
			arr[i+1][k++]=count;
			j--;
		}

	//displaying the results
	for(int i=0;i<n;i++)
	{
		j=0;
		while(arr[i][j]!=0)
		{
			cout<<arr[i][j++];
		}
		cout<<endl;
	}

	return 0;
}