#include <stdio.h>

void triangle(int n , char a);

int main(void)
{
	char a;
	int n;

	printf("ÇëÊäÈë½×Êı£º");
	scanf("%d",&n);
	fflush(stdin);
	printf("ÇëÊäÈë·ûºÅ£º");
	scanf("%c",&a);

	triangle(n,a);

	return 0;
}

void triangle(int n , char a)
{
	int x,y;
	for (y=1;y<=n;y++)
	{
		for (x=1; x<2*n;x++ )
		{
			if ( y == (-x+n+1) || y == (x-n+1) || y ==n)
				printf("%c",a);
			else
				printf(" ");
		}
		printf("\n");
	}
}

