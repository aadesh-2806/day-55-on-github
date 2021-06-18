#include<stdio.h>

void main()
{
	int i,s,x,y,u,v,t,n,c[50],d[50],j,r;
	char a[50],b[50][50];
	printf("hello\nenter number of values=");
	scanf("%d",&n);
	
	for(j=0;j<n;j++)
	{
		printf("enter %d=",j+1);
		fflush(stdin);
		scanf("%c",&a[j]);
	}					
	
	x=0;
	for(i=1;i<=n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
			
			for(r=0;r<n;r++)
			{
				for(s=0;s<r+1;s++)
				{
					//b[x][s]=a[s];
					printf("%c",a[s]);
				}
				printf("\n");
				d[x]=s;
				x++;
			}
		}
	}	
	/*u=x;
	
	t=0;
	for(x=0;x<u;x++)
	{
		for(y=x+1;y<u;y++)
		{
			s=0;
			if(b[x][s]==b[y][s] && d[x]==d[y])
			{
				while(s<d[y])
				{
					if(b[x][s]==b[y][s])
					{
						s++;
					}
					else
					{
						break;
					}
					if(s==d[y])
					{
						c[t++]=y;
					}
				}
			}
		}
	}
	v=t;
	
	t=0;
	for(x=0;x<u;x++)
	{
		if(t==v)
		{
			for(s=0;s<d[x];s++)
			{
				printf("%c",b[x][s]);
			}
			printf("\n");
		}
		if(x!=c[t] && t<v)
		{
			for(s=0;s<d[x];s++)
			{
				printf("%c",b[x][s]);
			}
			printf("\n");
		}
		else
		{
			if(x==c[t])
			{
				t++;
			}
		}
	}*/
	getch();
	
}	
