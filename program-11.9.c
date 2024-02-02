#include<stdio.h>

main()
{
	int i,j,a=1,b=2;
	char c='A';	
	for(i = 1;i <= 5;i++){
		for(j = 1;j <= i;j++){
			if(i%2==0){
				if(j%2==0){
					printf("%c ",c++);
				}else{
					printf("%d ",b++);
				}
			}else if(j%2==0){
				printf("%d ",b++);
			}else{
				printf("%c ",c++);
			}
		}
		printf("\n");
	}
}
