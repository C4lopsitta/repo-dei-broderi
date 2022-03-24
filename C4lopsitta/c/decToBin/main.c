#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define clear() printf("\033[H\033[J")

int main(void){
	clear();

	int num, logOfNum;
	int binStor[31];
	printf("Inserire il numero da convertire in binario, limite di 2^31-1: ");
	scanf("%d", &num);

	logOfNum = log(num) / log(2);

	for(int i=0; i<=logOfNum; i++){
		binStor[i] = num % 2;
		num = (num-binStor[i])/2;
	}
	putchar('\n');

	for(int i = logOfNum; i>=0; i--){
		printf("%d", binStor[i]);
	}
	putchar('\n');
}