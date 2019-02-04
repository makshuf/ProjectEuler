#include <stdio.h>
int main(){
	long int sum=0,sq, sum_sq=0;
	int i;
	for (i = 1; i < 101; ++i)
	{
		sum+=i;
		sq= i*i;
		sum_sq+=sq; 
	}
	printf("%li sum \n\n%li sum of sq \n\n", sum, sum_sq);
	printf("%li - %li = %li \n\n", sum*sum, sum_sq, ((sum*sum)-sum_sq) );
	printf("%li is the difference of  squares of sum till 100 and sum squares till 100",((sum*sum)-sum_sq) );
	return 0;
}
