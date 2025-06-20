// Write a program to implement binary  search.

//code:-

#include <stdio.h>
int main(int argc, char** argv)
{
	int a[]={10,20,30,40,50,60};
	int key =40;
	int low,mid,high;
	int flag=0;
	low=0;
	high=5;
	while (low<=high)
	{
		mid=(low+high)/2;
		if(key==a[mid])
		{
			flag=1;
			break;
		}
		else if(key<a[mid])
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
	if(flag==1)
	{
		printf("Found at %d",mid);
	}
	else
	{
		printf("Not found");
	}
	return 0;
}

//Output:-

//Found at 3