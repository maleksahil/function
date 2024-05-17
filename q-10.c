#include<stdio.h>
#include<string.h>

void word(){
	
    char a[50] ="Hello";
	char b[50];
	
	int c=0;
	
   for(int i=strlen(a)-1; i >=0; i--){
   		b[c]=a[i];
   		c++;
   }
   
   printf("%s",b);
}

int main(){
	word();
}