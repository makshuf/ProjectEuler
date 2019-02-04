#include <stdio.h>
int main(){

int i;
long int num=1;

while(1){
	int flag=1;
	for(i=1; i<=10; i++){
		if(num/i!=0){
			//printf("\n %li isnt divisible by all 20" ,num);
			flag=0;
			break;
		}
	}
	if(flag!=0){
		printf("\n hasta lavista");
		break;
	}
	num++;
}
printf("number= %li" ,num);
return(0);
}
