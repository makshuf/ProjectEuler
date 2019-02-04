#include<stdio.h>

int pal (long int num);

int main (void){
	int i, j;
  long int num,max=0;
  for(i=100; i<1000; i++){
    for(j=100; j<1000; j++){
      num=i*j;
      if(pal(num) && (max<num)){
	       max=num;
      }
    }
  }
  printf("gpal= %li \n",max);
}

int pal (long int num){
  long int rem, rev=0, cpy=num;
  while (num>0){
    rem=num%10;
    rev=rev*10+rem;
    num/=10;
  }
  return( rev == cpy ? 1 : 0);
}
