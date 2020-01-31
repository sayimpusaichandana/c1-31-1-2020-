#include<stdio.h>
int main()
{
	int i=0,n,a[100],j;
	scanf("%d",&n);
	while(n!=0)
	{
		a[i]=n%2;
		i++;
		n=n/2;
	}
	for(j=i-1;j>=0;j--)
	printf("%d",a[j]);
	return 0;	
}
