#include<stdio.h>
main(){
	int a,b,c,d;
	printf("Enter A=");
	scanf("%i",&a);
	printf("Enter B=");
	scanf("%i",&b);
	printf("Enter C=");
	scanf("%i",&c);
	printf("Enter D=");
	scanf("%i",&d);	

if (a>b){
	if(a>c){
		if(a>d){
			printf("A IS MAX");
		}
		else{
			printf("D IS MAX");
		}
	}
}
else if(b>c){
    	if(b>d){
		printf("B IS MAX");
	}
    	else{
		printf("D IS MAX");
	}
}
else if(c>a){
	if(c>d){
		printf("C IS MAX");
	}
	else{
		printf("D IS MAX");
	}
}
else{

if(d>a){
	if(d>c){
		if(d>b){
			printf("D IS MAX");
		}
		else{
			printf("B IS MAX");
		}
	}
}
}
}
	
