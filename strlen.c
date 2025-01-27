// it's use to counting of letters
#include <stdio.h>
#include <string.h>
	void main(){
		int i, len=0;
		char str[20];
		printf("enter name:");
		scanf("%s",str);
		for(i=0; str[i]!='\0'; i++){
			len=len+1;
		}
		printf("%d",len);
		
	}