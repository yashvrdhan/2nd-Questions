/*wap to pass an array to function and sort it*/
#include <stdio.h>
void sort(int *,int);
void main()
{
	int arr[50],i,n,*p;
	printf("enter the size of the array : ");
	scanf("%d",&n);
	p=arr;
	for(i=0;i<n;i++)
	{
		printf("enter %i element: ",i+1);
		scanf("%i",p+i);
	}
	sort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%i",*(p+i));
	}
}

void sort(int*p,int n)
{
	int i,j,t;
	for(i=0;i<n;i++)
	{
		 for(j=i+1;j<n;j++)
		 {
		 	if(*(p+i)>*(p+j))
		 	{
		 		t=*(p+i);
		 		*(p+i)=*(p+j);
		 		*(p+j)=t;
		 	}
		 }
	}
}




























