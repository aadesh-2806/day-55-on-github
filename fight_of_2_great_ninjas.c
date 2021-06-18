#include<stdio.h>

int swap(int *p,int *q)
{
	int t;
	t=*q;
	*q=*p;
	*p=t;
	return 0;
}
int main()
{
	
	int i,a[50],t,n,j;
	
	printf("hello\nenter number of shops=");
	scanf("%d",&n);
	if(n%2!=0)
	{
		printf("error: shops should be even ");
		return 0;
	}
	
	for(i=0;i<n;i++)
	{
		printf("enter value%d=",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=1;j<n;j++)
		{
			if(a[i]>a[j])
			swap(&a[i],&a[j]);
		}
	}
	j=0;//win
	t=0;//draw
	for(i=n-1;i>=0;i-=2)
	{
		if(a[i]==a[i-1])
			t++;
		else
			j++;
	}
	if(j>t)
		printf("%d\nnaruha wins",j);
	else
		printf("ohujha wins");

	return 0;
}
