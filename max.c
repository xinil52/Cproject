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
    if(x<y)  //��xΪ���yΪ�����
    {
        x=a[0];
        y=a[1];
    }

    for(i=2;i<len;i++)
    {
        if(x<a[i])//�µ�����ֵ �������ֵ��ʱ
        {

            y=x;
            x=a[i];
        }
        else if(y<a[i]) //�µ�����ֵ  ���ִ�����ʱ
        {
            y=a[i];
        }

    }
    printf("%6d%6d",x,y);
    return 0;
}
