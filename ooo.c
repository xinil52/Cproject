#include <stdio.h>

int it(int n,int x, int y);

int main()
{
    int a,y,x;

    scanf("%d",&a);

	{
		for(y=1;y<=a;y++)
	    {
	    	for(x=1;x<=a;x++)
	    	{
	    		printf("%4d",it(a,x,y));
			}
			printf("\n");
		}
	}

    return 0;
}

int it(int n, int x,int y)
{
	int s,m,i=0;
	while(x!=1&&y!=1&&(n-x)!=0&&(n-y)!=0)
	{
		x--;
		y--;
		n=n-2;
		i++;
	}
	m=n;
	for(s=0;i>0;i--)
	{
		s=s+4*(n+1);
		n+=2;
	}
	if(y==1)
	s=s+x;
	else if(x==m)
	s=s+m-1+y;
	else if(y==m)
	s=s+2*m-2+m-(x-1);
	else if(x==1)
	s=s+4*(m-1)-(y-2);
	return s;
}

