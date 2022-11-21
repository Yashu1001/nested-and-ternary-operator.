#include<stdio.h>
main(){
  int a,b,c,d;
  int max;
	printf("Enter A=");
	scanf("%i",&a);
	printf("Enter B=");
	scanf("%i",&b);
	printf("Enter C=");
	scanf("%i",&c);
	printf("Enter D=");
	scanf("%i",&d);
	
max=(a>b&&a>c&&a>d)?
	    printf("A IS MAX"):
	    (b>c&&b>d)?
		     printf("B IS MAX"):
	   	(c>d)?
		printf("C IS MAX"):
		printf("D IS MAX");		
}
