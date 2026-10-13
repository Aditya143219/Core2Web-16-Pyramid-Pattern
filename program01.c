#include<stdio.h>

void main() {

	int row;

	printf("Enter the Number of Rows:");
	scanf("%d",&row);

	int num = 1;

	for(int i = 1;i <= row;i++){

		for(int sp = 1;sp <= row-i;sp++){

			printf("\t");

		}

		for(int j = 1;j <= 2*i-1;j++){

			printf("%d\t",num);

		}

		printf("\n\n");

	}
}


