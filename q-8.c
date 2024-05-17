#include<stdio.h>

void table(){
	int a=5;
	
	for (int i=1; i<=10; i++){
		printf("%d * %d = %d\n",a,i,a*i);
	}
}

int main(){
	table();
}