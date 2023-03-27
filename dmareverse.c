#include<stdio.h>
#include<stdlib.h>
void num(int *p,int l)
{
	int n=l-1,i,temp;
	for(i=0;i<l/2;i++,n--)
	{
		temp=*(p+i);
		*(p+i)=*(p+n);
		*(p+n)=temp;
    }
    for(i=0;i<l;i++)
    {
    printf("%d",*(p+i));
    }
}
void main()
{
int i,*p,n;
printf("enter size of array");
scanf("%d",&n);
p=(int*) malloc(n*sizeof(int));
for(i=0;i<n;i++)
{
	scanf("%d",(p+i));
}
num(p,n);
}
