#include<stdio.h>
int main(){
	char small;
	for (small = 'a'; small <= 'z'; small++){
		if (small == 'q' || small == 'e'){
			continue;
		}
		else{
			print(small);
		}
	}
	return(0);
}
