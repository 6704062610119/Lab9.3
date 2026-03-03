#include<stdio.h>

int main(){
	char input[50];
	printf("Enter input: ");
	fgets(input,sizeof(input),stdin);
	int i=0, sum=0;
	while( i<50 && input[i]!='\0' ){
		if(isdigit(input[i])){
			sum += input[i] - '0';
		}
		i++;
	}
	
	printf("Sum of digit char: %d",sum);
	
	
	return 0;
}
