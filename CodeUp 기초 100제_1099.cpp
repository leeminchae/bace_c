#include <stdio.h>

int main(void)
{
	int a[10][10] = {};
	int k=1;
	for(int i=0;i<10;i++)
		for (int j=0;j<10;j++)
			scanf("%d", &a[i][j]);
			
	int x=1, y=1;
	if (a[x][y]==0)
	{
		a[x][y]=9;
	}
		
	else if(a[x][y]==2)
	{
		a[x][y]=9;
		k = 0;
	}
	
	else 
		k = 0;

	while(k)
	{
		if (a[x][y+1]!=1)
		{
			if (a[x][y+1]==2)
			{
				a[x][y+1]=9;
				break;
			}
			y += 1;
			a[x][y]=9;
		}
		
		else if(a[x+1][y]!=1)
		{
			if (a[x+1][y]==2)
			{
				a[x+1][y]=9;
				break;
			}
			x += 1;
			a[x][y]=9;	
		}
		else
			break;
	}

	for (int i=0;i<10;i++)
		{
			for (int j=0;j<10;j++)
			{
				printf("%d ", a[i][j]);
			}
			printf("\n");				
		}
}

