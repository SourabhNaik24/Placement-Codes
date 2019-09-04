#include<stdio.h>

void main()
{
	int i,n, odd=0,even=0;
	printf("Enter The Value of Number: \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
			even=even+i;
		else
			odd=odd+i;
	}
	printf("Even: %d\n",even);
	printf("Odd: %d\n",odd);
	if(even>odd)
		printf("%d\n",even-odd);
	else
		printf("Invalid");
}

