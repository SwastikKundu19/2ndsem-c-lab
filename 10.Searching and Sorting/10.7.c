// Write a program to implement bubble sort.

//code:-
#include <stdio.h>
int main()
{
	int arr[]={70,40,50,10};
	int n=sizeof(arr)/sizeof(arr[0]);
	int i,j,k;
	for(i=0;i<=n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
		printf("\nAfter %d interation",i+1);
		for(k=0;k<n;k++)
		{
			printf("\t%d\t",arr[k]);
		}
		printf("\n");
		printf("\nwant to see the next?");
		getchar();
	}
	printf("sorted array:");
	for(i=0;i<n;i++)
		printf("\t%d\t",arr[i]);
	return 0;
}

//output:-
/*
After 1 interation      40              50              10              70
want to see the next?
After 2 interation      40              10              50              70
want to see the next?
After 3 interation      10              40              50              70
want to see the next?
After 4 interation      10              40              50              70
want to see the next?
After 5 interation      10              40              50              70
want to see the next?
sorted array:   10              40              50              70
*/
