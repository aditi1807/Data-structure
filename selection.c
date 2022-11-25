#include<stdio.h>
int min(int arr[],int n,int j)
{
	int min=j,i;
	for(i=j+1;i<n;i++)
	{
		if(arr[i]<arr[min])
		min=i;
	}
	printf("%d\n",min);
	return min;
}
void swap(int arr[],int i,int j)
{
	int temp;
	temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}
int main()
{
	int n,i,minimum=0,c=0;
	printf("enter the size of the array");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		minimum=min(arr,n,i);
		if (arr[minimum]<arr[i])
		{
		c++;
		swap(arr,i,minimum);
	}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	printf("%d",c);
}
