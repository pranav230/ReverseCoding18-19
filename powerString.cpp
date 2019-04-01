//Calculating X^Y uisng strings so that all the numbers can be displayed

#include<bits/stdc++.h>
#include<ctime>

using namespace std;

int main()
{
	long long int x,y;
	cout<<"Enter two intergers:";
	cin>>x>>y;
	
	long long int result[500000]={0};

	//terminating condition for the Program
	if(y==0)
	{
		cout<<1;
		return 0;
	}

	//declaring important variables for evaluation here
	long long int index=499999,j,l=1,k,temp,carry=0,value;
	result[index]=x;

	clock_t begin=clock();
	//Calculating power using string result
	for(int i=0;i<y-1;i++)
	{
		carry=0;
		j=499999;
		while(l--)
		{
			temp=result[j]*x;
			value=(temp+ carry)%10;
			carry=(temp+carry)/10;
			result[j--]=value;
			k++;
		}
		while(carry!=0)
		{
			result[j--]=carry%10;
			carry/=10;
			k++;
		}
		l=k;
		k=0;
	}

	// displaying the result
	for(int i=0;i<500000;i++)
	{
		if(result[i]!=0)
		{
			j=500000-i;
			while(i!=499999+1)
				cout<<result[i++];
			break;	
		}
	}
	cout<<endl;
	cout<<j;
	clock_t end=clock();
	cout<<"time="<<(end-begin)/CLOCKS_PER_SEC;
	return 0;
}