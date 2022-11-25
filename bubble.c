#include<stdio.h>
void swap(int arr[],int i, int j)
{
int temp;
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;	
}
int main()
{
	int n,i,j;
	printf("enter the size of the array ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		if(arr[j]>arr[j+1])
		swap(arr,j,j+1);
		
	}
	for(i=0;i<n;i++)
	printf("%d",arr[i]);
}
