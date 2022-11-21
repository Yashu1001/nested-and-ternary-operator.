#include<stdio.h>
main(){
	int a,b,c,d,e;
	printf("Enter A Value=");
	scanf("%i",&a);
	printf("Enter B Value=");
	scanf("%i",&b);
	printf("Enter C Value=");
	scanf("%i",&c);
	printf("Enter D Value=");
	scanf("%i",&d);
	printf("Enter E Value=");
	scanf("%i",&e);
	
if(a<b){
	if(a<c){
		if(a<d){
			if(a<e){
				printf("A IS MIN");
			}
			else{
				printf("E IS MIN");
			}
	}
		else if(d<e){
			   printf("D IS MIN");
		}
		     else{
			   printf("E IS MIN");
		}
}
	else if(c<d){
		 if(c<e){
		 	printf("C IS MIN");
		 }
		 else{
		 	printf("E IS MIN");
		 }
}
	else if(d<e){
		printf("D IS MIN");	
	}
	else{
	    printf("E is min");
	}
}
else if(b<c){
	if(b<d){
		if(b<e){
			printf("B IS MIN");
		}
		else{
			printf("E IS MIN");
		}
	}
	else if(c<e){
		printf("C IS MIN");
		}
		else{
			printf("E IS MIN");
	}
}
else if(b<d){
	if(d<e){
		printf("D IS MIN");
	}
	else{
		printf("E IS MIN");
	}
}	
}		


























