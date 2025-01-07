#include<stdio.h>
int main()
{
	long long int fibo_num=0, first=0, second=1, sum=0;
	while(1)
{
		fibo_num= first+second;
		first=second;
		second=fibo_num;
		if (fibo_num%2==0)
		
			sum+=fibo_num;
		if(fibo_num>4000000)
	
			break;
}
	printf("\n sum is %llu", sum);
		
}
