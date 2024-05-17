#include<stdio.h>

void factorial(){
	int factorial = 5;
	int sum =1;
	
	for(int i=1; i<=factorial; i++){
		printf("%d\n",i);
		sum *= i;
	}
	printf("multiplication of all factorial number is : %d",sum);
}

int main(){
	factorial();
}