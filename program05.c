#include<stdio.h>

void main() {

	int row;

	printf("Enter the Number of Rows:");
	scanf("%d",&row);

	for(int i = 1;i <= row;i++){

		int num = 1;

		for(int sp = 1;sp <= row-i;sp++){

			printf("\t");

		}

		for(int j = 1;j <= 2*i-1;j++){

			if(i > j){

				printf("%d\t",num++);

			}else{

				printf("%d\t",num--);

			}
		}

		printf("\n\n");

	}
}


