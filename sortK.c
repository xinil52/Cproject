#include <stdio.h>
#include "sortK.h"

int main(void)
{
    int n,temp;
    printf("请输入排序数字个数：");
    scanf("%d", &n);
    int a[n];
    printf("输入排序数字：");
    for(int i=0; i<n; ++i){
        scanf("%d", &a[i]);
    }
    fun(a,0,n-1);
    printf("\n排序后的数字：");
    for(int i=0; i<n; ++i){
        printf("%d ",a[i]);
    }
    return 0;
}
