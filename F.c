#include<stdio.h>
#include<string.h>
void main(){
	char str1[10]="BIS";
	char str2[10];
	sttcpy(str2,str1);
	puts(str2);
	printf("%s",str1);
	if(strcmp(str2,str1)==0){
		puts("OK");
	}
	strcat(str1,"AAA");
	printf("%d",strlen(str1));
	
}
