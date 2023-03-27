#include<stdio.h>
#include<stdlib.h>
void num(int *p,int l)
{
	int even=0,odd=0;
	int i;
    for(i=0;i<l;i++)
    {
    if (*(p+i)%2==0)
    even++;
    else
    odd++;
    }
   printf("even:%d odd: %d",even,odd);
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
