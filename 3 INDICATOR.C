#include<stdio.h>
#include<string.h>
main(){
	char a[100];
	
	char *b[100];
	
	b[100]=&a[100];
	printf("Enter the string:");
	scanf("%s",&a);
	
	printf("%s",strrev(a));
	
		printf("%s",*b);
	}
	
	
	
	

	

