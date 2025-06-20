// Write a program to implement linear  search.

#include <stdio.h>
int linearsearch(int*,int,int,int);
int main()
{
	int arr[]={99,11,55,33,44,77};
	int n=sizeof(arr)/sizeof(arr[0]);
	int item;
	printf("Enter the element wants to search =");
	scanf("%d",&item);
	int i = linearsearch(arr,0,n-1,item);
	if(i<0)
		printf("Unsuccessful");
	else
		printf("Successful");
	
	return 0;
}
int linearsearch(int*p,int l,int h,int item)
{
	int i;
	for(i=l;i<=h;i++)
	{
		if(item==p[i])
		{
			return i;
		}
	}
	return(l-1);
}


//Output:-

/*

Enter the element wants to search =77
Successful

Enter the element wants to search =35
Unsuccessful

*/