#include<stdio.h>
int main()
{
	int i,n,min,max,a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	min=a[0];
	max=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]<min)
		min=a[i];
		if(a[i]>min)
		max=a[i];
	}
	 printf("<%d,%d>",min,max);
	return 0;
}
