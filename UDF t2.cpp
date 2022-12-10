#include<stdio.h>
main(){
	int a,num;
	 printf("ENTER DIVISIBLE LAST NUMBER= ");
	 scanf("%i",&num);
	 
	 printf("NUMBER OF DIVISIBLE 3 and 5 = 0 are=  %i\n",num);
	 for(a=1; a<=num; a++){
	 	if(a%3==0 && a%5==0){
	 		printf("%i  ",a);
			 		
		 }
	 }		
}
