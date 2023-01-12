#include<stdio.h>
#include<string.h>
main(){
	char a[100];
	char c=0;
	
	char *b[100];
	
	b[100]=&a[100];
	printf("Enter the string:");
	scanf("%s",&a);
	
	printf("%d",strlen(a));
	
		printf("%s",*b);
	}
	
	
	
