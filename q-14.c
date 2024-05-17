#include<stdio.h>

void add(){
	int sum=0;
	
	for(int i=0; i<=5; i++){
		sum += i;
	}
	printf("%d",sum);
}

int main(){
	add();
}