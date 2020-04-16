#include <stdio.h>
#include <string.h>
int main()
{
    int len1, len2, x = 0, sss;
    char num1[100], num2[100];
    int num[201]={0};
    printf("    请输入两个正整数下，x, y，我将把他们相乘的结果返回.\n");
    printf("请输入x值：");
    gets(num1);
    printf("请输入y值：");
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
    printf("相乘结果：");
    for(int l = m; l>-1; --l){
        printf("%d",num[l]);
    }
    fflush(stdin);
    printf("\n---------------------------------------------------\n请按任意键退出.....");
    getchar();
    return 0;
}
