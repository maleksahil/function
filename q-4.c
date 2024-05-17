#include<stdio.h>

void sum(){
	int add =0;
	for(int i=0; i<=10; i++){
		add+= i;
	}
	printf("%d",add);
}

int main(){
	sum();
}