#include<stdio.h>
main(){
	int h,y,hy;
	printf("Enter H=");
	scanf("%i",&h);
	printf("Enter Y=");
	scanf("%i",&y);
	printf("Enter HY=");
	scanf("%i",&hy);	
	if(h<y){
		if(h<hy){
			printf("H Is Min");
		}
		else{
			printf("HY Is Min");
		}
	}
	else{
		if(y<hy){
			printf("Y Is Min");
		}
		else
		    printf("HY Is Min");		    
	}
}
