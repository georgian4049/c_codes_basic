#include"stdio.h"
#include<math.h>

void main()
{
	int a,temp,c=0,arm=0,k=0;
	printf("enter the no\n");
	scanf("%d",&a);
	temp=a;

	while(temp!=0)
	{
		temp/=10;
		c++;
	}
	temp=a;

	for(int i=0;i<c;i++)
	{   k=temp%10;
		arm=arm+pow(k,c);
		temp=temp/10;
	}
	printf("%d\n",arm );
	



}