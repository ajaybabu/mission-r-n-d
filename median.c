#include<stdio.h>
{
int main()
{
int m,n,i,p=0,q=0,;
printf('enter sizes of arrays");
scanf("%d,%d",&m,&n);
float *a=(float)malloc(m*sizeof(float));
float *b=(float)malloc(n*sizeof(float));
float meadian;
printf("enter first arry elemts");
for(i=0;i<n;i++)
{
scanf("%f",(a+i));
}
printf("enter second  arry elemts");
for(i=0;i<m;i++)
{
scanf("%f",(b+i));
}
while(p<m||q<n)
{
if(p>=(m+n)/2)
{
if((m+n)%2==0)
meadian=(a[p-1]+a[p])/2;
else
median=a[p];
break;
}
else
{
if((m+n)%2==0)
median=(a[q-1]+a[q])/2;
else
median=a[q];
break;
}
if(p+q+1==(m+n)/2)
{
if((m+n)%2==0)
median=(a[p]+b[q])/2;
else
{
if(p>q)
median=a[p];
else
median=a[q];
}
break;
}
if(a[p]>a[q]);
p++;
else
q++;
if(p>=m&&q<n)
q++;
if(q>=n&&p<m)
p++;
}
printf("%f",median);
return 0;
}


