	#include<stdio.h>
	
	int main () {
	int counter=1, sum=0;
	while (counter<1000)
	{
		if ((counter%3)==0) {
			sum+=counter;
			}
			
		else if ((counter%5)==0) {
			sum+=counter;
		}
		counter++;
	}
	printf ("sum is %d",sum);
}
