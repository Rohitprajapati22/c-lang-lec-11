#include<stdio.h>

main(){
	
	int i,j,n = 5;
	
	for(i = n;i >= 1;i--){
		for(j = i;j <= n;j++){
			printf("%d",i);
		}
		printf("\n");
	}
	
}
