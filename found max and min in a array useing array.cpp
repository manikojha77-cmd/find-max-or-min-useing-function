#include<stdio.h>
int max(int n,int a[]);
int min(int n,int a[]);
int main()
{
	int n,i,large,small;
	printf("Enter the array size:");
	scanf("%d",&n);
	int a[n];
	printf("Enter array elements\n");
	for (i=0;i<n;i++)
{
	scanf("%d",&a[i]);
	}
	
large=max(n,a);
printf("%d is the largest element in the array\n",large);	
small=min(n,a);
printf("%d is the smalest element in the array\n",small);	
	return 0;	
}
int max(int n,int a[])
{
int	l=a[0],i;
	for (i=1;i<n;i++)
	{	
		if(l<a[i])
		{
			l=a[i];
		}
	}
	return l;
}
int min(int n,int a[])
{
int	s=a[0],i;
	for (i=1;i<n;i++)
	{	
		if(s>a[i])
		{
			s=a[i];
		}
	}
	return s;
}


