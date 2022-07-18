#include<stdio.h>

int main(){
	int small, big;
	small = 'a';
	big = 'A';

	while(big<='Z'){
		while(small<='z'){
			putchar(small);
			small++;
		}
		putchar(big);
		big++;
	}
		putchar(\n);
	return(0);
}
		
