#include <stdio.h>
#include "sortK.h"

int main(void)
{
    int n,temp;
    printf("�������������ָ�����");
    scanf("%d", &n);
    int a[n];
    printf("�����������֣�");
    for(int i=0; i<n; ++i){
        scanf("%d", &a[i]);
    }
    fun(a,0,n-1);
    printf("\n���������֣�");
    for(int i=0; i<n; ++i){
        printf("%d ",a[i]);
    }
    return 0;
}
