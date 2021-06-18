#include<stdio.h>

void main()
{
	
	int i,b[50],s,j,x;
	char a[50];
	
	printf("hello\nenter string=");
	gets(a);

	b[0]=-1;
	x=1;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='.')
		{
			b[x++]=i;
		}
	}
	b[x++]=i;
	j=x-1;
	while(j>=0)
	{
		for(s=b[j-1]+1;s<b[j];s++)
		{
			printf("%c",a[s]);
		}
		if(j!=0 && j!=1)
		{
			printf(".");
		}
		j--;
	}
	
	getch();
	
}	 		
