#include<stdio.h>
main(){
	int n;
	
	printf("Enter the value:");
	scanf("%d",&n);
	
	
		int a[n];
		int *b[n];
		
		int i;
	
	for(i=0; i<n; i++) {
		
	printf("Enter the value[%i]:",i);
	scanf("%d",&a[i]);
	
		
	}
	for(i=0; i<n; i++){
		b[i]=&a[i];
		
		printf("%d\n",*b[i]);
	}
}
	
	

