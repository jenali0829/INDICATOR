#include<stdio.h>
void swap(int*a, int*b){
	int c;
	
	c=*a;
	*a=*b;
	*b=c;
	
	printf("\n\n");
	
	printf("After swap your first value:%d\n",*a);
	printf("After swap your second value:%d",*b);
	
}
main(){
	int i,j;
	
	printf("before swap enter your first value:");
	scanf("%d",&i);
	
	printf("before swap enter your second value:");
	scanf("%d",&j);
	
	swap(&i,&j);
	
}
