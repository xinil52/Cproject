#include <stdio.h>
#include <string.h>
int main()
{
    int len1, len2, x = 0, sss;
    char num1[100], num2[100];
    int num[201]={0};
    printf("    �����������������£�x, y���ҽ���������˵Ľ������.\n");
    printf("������xֵ��");
    gets(num1);
    printf("������yֵ��");
    gets(num2);
    len1 = strlen(num1);
    len2 = strlen(num2);

    for (int i=0; i < len1; ++i){
        for(int j=0; j < len2; ++j){
            num[len1-i+len2-j-2] += (num1[i]-48)*(num2[j]-48);
        }
    }

    for (int k=0; k<len1+len2+1; ++k){
        num[k] += x;
        x = num[k]/10;
        num[k] = num[k]%10;
    }
    int m = len1 + len2 - 1;
    if(!num[m]){
        m -= 1;
    }
    printf("��˽����");
    for(int l = m; l>-1; --l){
        printf("%d",num[l]);
    }
    fflush(stdin);
    printf("\n---------------------------------------------------\n�밴������˳�.....");
    getchar();
    return 0;
}
