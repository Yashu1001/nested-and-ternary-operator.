#include<stdio.h>
main(){
	int a,b,c,d,e;
	int max;
	printf("Enter A=");
	scanf("%i",&a);
	printf("Enter B=");
	scanf("%i",&b);
	printf("Enter C=");
	scanf("%i",&c);
	printf("Enter D=");
	scanf("%i",&d);
	printf("Enter E=");
	scanf("%i",&e);
	
max=(a>b&&a>c&&a>d&&a>e)?
        printf("A IS MAX"):
		(b>c&&b>d&&b>e)?
		printf("B IS MAX"):
		(c>d&&c>e)?
		printf("C IS MAX"):
		(d>e)?
		printf("D IS MAX"):
		printf("E IS MAX");		
}
