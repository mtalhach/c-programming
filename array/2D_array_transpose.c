//Write a program in C to find transpose of a given matrix.
#include<stdio.h>
# define row 3
# define column 3
int main()
{
	int array[row][column],i,j;
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("Element [%d][%d]:- ",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	printf("\nResultant Array is:\n");
	for(i=0;i<row;i++){
		printf("\n");
		for(j=0;j<column;j++){
			printf("%d  ",array[i][j]);
		}
	}
	printf("\nTranspose of array is:\n");
	for(i=0;i<row;i++){
		printf("\n");
		for(j=0;j<column;j++){
			printf("%d  ",array[j][i]);
		}
	}
	return 0;
}
	

