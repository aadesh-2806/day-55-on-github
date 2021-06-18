#include<stdio.h>
#include<math.h>

void main()
{	
	int i,a[50],s,t,n,j;
	printf("hello\nenter value=");
	scanf("%d",&n);

	i=0;
	t=0;
	for(s=n;s!=0;i++)
	{	
		a[i]=s%10;
		s=s/10;
	}
	
	if(a[0]==0)
	{
		if(a[1]==0)
		t++;
	}
	for(s=1;s<i-1;s++)
	{	
		if(a[s]==0)
		{
			if(a[s-1]==0 && a[s+1]==0)
			{
				t++;
			} 
		}
	}
	if(a[s]==0)
	{
		if(a[s-1]==0)
		t++;
	}
	printf("%d",t);
	getch();
}	
