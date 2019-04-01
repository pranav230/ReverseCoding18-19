//maximum sum such that no two elements are alternate
#include<stdio.h>

int FindMaxSum(int arr[], int n)
{
int incl = arr[0];
int excl = 0;
int excl_new;
int i;

for (i = 1; i < n; i++)
{
	
	excl_new = (incl > excl)? incl: excl;
	incl = excl + arr[i];
	excl = excl_new;
}
	
return ((incl > excl)? incl : excl);
}
int main()
{
int arr[1000];
int n,i;
printf("Enter the size of array   (1<size<100)\n");
scanf("%d",&n);
printf("\nEnter the array elements\n");
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
int sum=FindMaxSum(arr,n);
printf("\nMaximum Sequence sum is : %d \n\n",sum);
return 0;
}
