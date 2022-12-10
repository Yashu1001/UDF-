#include<stdio.h>
int cube(int a){
int ans=a*a*a;
return ans;	
	
}

main(){	
   
int a;
int ans;
printf("ENTER VALUE= ");
scanf("%i",&a);
ans=cube(a);

printf("CUBE =%i",ans);
}
