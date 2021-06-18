#include<stdio.h>


void main()
{	
	int i,s,t,n,j;
	char a[50],b[50];
	printf("hello\nenter number of values=");
	scanf("%d",&n);
	
	j=0;
	while(j<n)
	{
		printf("enter %d=",j+1);
		fflush(stdin);
		scanf("%c",&a[j]);
		b[j]=a[j];
		j++;
	}					//arrange_char.c
	
	i=1;
	while(i<=n)
	{
		j=0;			
		while(j<n-1)
		{
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
			s=0;
			while(s<n)
			{
				printf("%c ",a[s]);
				s++;
			}
			printf("\n");
			j++;
		}
		i++;
	}
	
	getch();
	
}
