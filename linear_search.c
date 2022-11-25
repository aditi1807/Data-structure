#include<stdio.h>
int main()
{
	int n,key,i,c=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			c=1;
		}
	}
	if(c==0)
	printf("0");
	else
	printf("1");
}
