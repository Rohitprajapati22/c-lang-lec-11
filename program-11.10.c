#include<stdio.h>


 main(){
 	
	int i,j,k=1;
	char c='A';	
	
	for(i=1;i<=5;i++){
		for(j='A';j<='E';j++){
		    if(j%2==0){
		     	printf("%c ",c++);
		}else{			
			printf("%d ",k++);		
		}	
    }
		printf("\n");
	}
}
