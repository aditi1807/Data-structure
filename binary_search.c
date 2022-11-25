#include<stdio.h>
int binary_search(int arr[],int n,int key)
{
	int i,mid,start,end;
	start=0;
	end=n-1;
	while(start<=end)
	{
		mid=(start+end)/2;
		if(key<arr[mid])
		end=mid-1;
		else if(key>arr[mid])
		start=mid+1;
		else
		return 1;
	}
	return 0;
}
int main()
{
	int n,key,i,f;
	printf("enter the size");
	scanf("%d",&n);
	int arr[n];
	printf("enter the array");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("enter the key");
	scanf("%d",&key);
	f=binary_search(arr,n,key);
	if(f==0)
	printf("not found");
	else
	printf("found");
}
