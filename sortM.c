#include <stdio.h>
#include <string.h>

int main(){
	char s1[20], c, temp;
	int len, i, j, m;
	
	scanf("%s",&s1);
	
	len = strlen(s1);
	
	for (i=0; i<len; i++){
		c = s1[i];
		for(j=i+1,m=i; j<len; j++){
			if (c > s1[j]){
				c = s1[j];
				m = j;
			}
		}
		temp = s1[i];
		s1[i] = s1[m];
		s1[m] = temp;
	}
	
	printf("%s",s1);
	
	return 0;
}

