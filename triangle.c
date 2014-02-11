mission-r-n-d
============#include<stdio.h>
#include<math.h>
float dist(int,int,int,int);
int main()
{
int i,arr[6],flag=3;
float a,b,c,brr[3];
for(i=0;i<6;i++)
{
scanf("%d",&arr[i]);
}
/*for(i=0;i<3;i++)
{
b[i]=dist(a[2*i],a[2*j-1]);
}*/
brr[0]=dist(arr[0],arr[2],arr[1],arr[3]);
brr[1]=dist(arr[2],arr[4],arr[3],arr[5]);
brr[2]=dist(arr[0],arr[4],arr[1],arr[5]);
a=brr[0];
b=brr[1];
c=brr[2];
//printf ("%f, %f,%f",a,b,c);
if((a<b+c)&&(a>b-c||a>c-b))
 flag++;
 else
 flag--;
 if((b<c+a)&&(b>c-a||b>a-c))
 flag++;
 else
 flag--;
 if((c<b+a)&&(c>b-a||c>a-b))
 flag++;
 else
 flag--;
 if(flag!=6)
 printf("\ntriangle impassible");
 else
 {
 	if(a==b)
 	{
 		if(b==c)
 		printf("\neqilateral");
 		else
 		printf("issoceless");
 		}
 		else
 		{
 			if(a==c||b==c)
 			printf("\nisocelss");
 			else
 			{
 				if(c==(sqrt(a*a+b*b)))
 				printf("right angle");
 				 				if(a==(sqrt(c*c+b*b)))
 				printf("right angle");
 				if(b==(sqrt(c*c+a*a)))
 				printf("right angle");
 				}
 
 				 			}
 			}
 			return 0;
 			}
 
 float dist(int x1,int x2,int y1,int y2)
 {
 	float dista;
 	int ans,x3,y3;
 	x3=x1-x2;
 	y3=y1-y2;
 	ans=pow(x3,2)+pow(y3,2);
 	dista=sqrt(ans);
 	return dista;
 	}
