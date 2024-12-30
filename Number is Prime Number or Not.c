#include<stdio.h>
#include<math.h>
int main(){
	int i,num,isPrime=1;
	printf("Enter a Number : ");
	scanf("%d",&num);
	if(num<2){
		isPrime = 0;
	}else{
		for(i=2;i<=sqrt(num);i++){
			if(num%i==0){
				isPrime = 0;
				break;
			}
			
		}
	}
	if(isPrime){
		printf("%d is a Prime Number.",num);
	}else{
		printf("%d is not a Prime Number.",num);
	}
}
