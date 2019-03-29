#include"stdio.h"

void main()
{
	/* code */
	int n=5;
	for(int i=1;i<=5;i++)
	{

		for(int j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for (int k = 1; k <=i;k++)
		{   
			if(i%2!=0)
			{
			printf("%d",k );
			}
			else
			{
				printf("%c",(k+96) );
			}
			/* code */
		}
		for (int l = i-1; l>=1;l--)
		{   
			if(i%2!=0)
			{
				printf("%d",l);
			}
			else
			{
				printf("%c",(l+96));
			}
			
			/* code */
		}
		printf("\n");

	}

}