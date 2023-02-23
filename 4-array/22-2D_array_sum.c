//Write a program in C for addition of two Matrices of same size.
#include<stdio.h>
# define row 3
# define column 3
int main()
{
	int array1[row][column],array2[row][column],resultant[row][column],i,j;
	printf("Array 1\n");
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("Element [%d][%d]:- ",i,j);
			scanf("%d",&array1[i][j]);
		}
	}
	printf("\nArray 2\n");
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("Element [%d][%d]:- ",i,j);
			scanf("%d",&array2[i][j]);
		}
	}
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			resultant[i][j]=array1[i][j]+array2[i][j];
		}
	}
	printf("\nResultant Array is:\n");
	for(i=0;i<row;i++){
		printf("\n");
		for(j=0;j<column;j++){
			printf("%d  ",resultant[i][j]);
		}
	}
	return 0;
}
	

