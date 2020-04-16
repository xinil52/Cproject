#include <stdio.h>
int main(void)
{
    int n, d, i, j, count=0,c=-1, r=0;
    scanf("%d%d%d", &n, &i, &j);
    int a[n][n];
    for(d=0; d<n/2+1; ++d){
        while(++c<n-d){
            a[r][c]=++count;
    	}
    	--c;
        while(++r<n-d){
            a[r][c]=++count;
        }
        --r;
        while(--c>=0+d){
            a[r][c]=++count;
        }
        ++c;
        while(--r>0+d){
            a[r][c]=++count;
        }
        ++r;
    }
    printf("%d",a[i-1][j-1]);
}
