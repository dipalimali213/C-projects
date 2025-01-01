#include<stdio.h>
int main(){
	int num,temp,rem,rev=0;
	printf("Enter a Number : ");
	scanf("%d",&num);
	temp = num;
	while(temp != 0){
		rem = temp%10;
		rev = rev*10+rem;
		temp = temp /10;
	}
	if(num == rev){
		printf("%d is Palindrome Number.",num);
	}else{
		printf("%d is not Palindrome Number.",num);
	}
}
// Time Complexity : O(N)
// Space Complexity : O(1)
// Where N is number of digits in num
