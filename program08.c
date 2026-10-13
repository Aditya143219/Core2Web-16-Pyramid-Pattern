#include<stdio.h>

void main() {

	int row;

	printf("Enter the Number of Rows:");
	scanf("%d",&row);
	
	int num = row;

	for(int i = 1;i <= row;i++){

		for(int sp = 1;sp <= i-1;sp++){

			printf("\t");

		}

		for(int j = 1;j <= 2*(row-i+1)-1;j++){

			printf("%d\t",num);

		}
		
		num--;

		printf("\n\n");

	}
}


