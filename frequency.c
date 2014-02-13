#include<stdio.h>
#include<stdlib.h>
int main()
{
int *b,i,j,maxi=0,ans,*a,n;
b=(int*)malloc(99*sizeof(int));
scanf("%d",&n);
a=(int*)malloc(n*sizeof(int));
for(i=0;i<n;i++)
{
	scanf("%d",(a+i));
	}
	for(i=0;i<99;i++)
	{
		*(b+i)=0;
		}
		for(i=0;i<n;i++)
		{
			b[(*(a+i))%99]++;
			}
	
		for(j=0;j<99;j++)
		{
			if(maxi<=*(b+j))
			{
			maxi=*(b+j);
			ans=j;
			}
			}
			printf("%d=%d",ans,*(b+ans));
			return 0;
			}
			
			
