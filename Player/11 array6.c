#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				a[j]=0;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=0)
		printf("%d ",a[i]);
	}
	return 0;
}
	
	
