#include<stdio.h>
#define great(x, y) if(x>y) \
						printf("%d is greater than %d",x,y); \
					else \
						printf("%d is grester then %d" ,y,x);	
int main()
{
	if(01){
		printf("Hello");
	}
	
	if(07){
		printf("world");
	}
	
	printf("%.16f",22/7);
	printf("Time : %s \n ",__TIME__);
	printf("Date : %s \n ",__DATE__);
	great(5,7);
	return 0; 
	/*int k;
	if(printf("%o",k=(~2|3)>~0?7:8<<2));
	return 0;*/
}

