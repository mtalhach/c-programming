//Write a program in C to get the largest element of an array using the function.
#include<stdio.h>
int findMaxElem(int arr[]);
int n;
int main()
{
    int arr[100],mxelem,i;
	printf(" Input the number of elements to be stored in the array:  ");
    scanf("%d",&n);
   
    printf(" Input %d elements in the array :\n",n);
    for(i=0;i<n;i++)
    {
	      printf(" element - %d : ",i+1);
	      scanf("%d",&arr[i]);
	}
    mxelem=findMaxElem(arr);

    printf(" The largest element in the array is : %d\n\n",mxelem);
    return 0;
}
int findMaxElem(int arr[])
{
    int i,mxelem;
    mxelem=arr[0];
    for(i=0;i < n;i++)
	{
      if(mxelem<arr[i])
      mxelem=arr[i];
    }
    return mxelem;
}
