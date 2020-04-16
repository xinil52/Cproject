#include <stdio.h>
#include <string.h>

int main(void)
{
    int a[20],i,len,x,y;

    scanf("%d",&len);
    for(i=0;i<len;i++)
    {
        scanf("%d",&a[i]);
    }

    x=a[0];
    y=a[1];
    if(x<y)  //让x为最大，y为次最大
    {
        x=a[0];
        y=a[1];
    }

    for(i=2;i<len;i++)
    {
        if(x<a[i])//新的数组值 比现最大值大时
        {

            y=x;
            x=a[i];
        }
        else if(y<a[i]) //新的数组值  比现次最大大时
        {
            y=a[i];
        }

    }
    printf("%6d%6d",x,y);
    return 0;
}
