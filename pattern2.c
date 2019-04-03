#include"stdio.h"

void main()
{
   int n=5;
   for(int i=5;i>=1;i--)
   {
   		for (int l = i;l<5 ;l++)
   		{
   			printf(" ");
   		}
   		for(int j=1;j<=i;j++)
   		{
   			if(i%2!=0)
   			{
   				printf("%c",j+96 );
   			}
   			else
   			{
   				printf("%d",j );
   			}
   		}
   		for(int k=i-1;k>=1;k--)
   		{
   			if(i%2!=0)
   			{
   				printf("%c",k+96 );
   			}
   			else
   			{
   				printf("%d",k );
   			}
   		}
   		printf("\n");
   	}	
}