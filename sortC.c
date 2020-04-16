#include <stdio.h>
#include <string.h>

int main(){
	char s1[20], c, temp;
	int len, i, j;
	
	scanf("%s",&s1);
	
	len = strlen(s1);
	
	for (i=1; i<len; i++){
		c = s1[i];
		for(j=i-1; j>=0&&c<s1[j]; j--){
				s1[j+1] = s1[j];
		}
			s1[j+1]=c;
	} 
	
	printf("%s",s1);
	
	return 0;
}
