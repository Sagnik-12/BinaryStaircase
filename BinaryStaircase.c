//Program to print a binary staircase pattern
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the number of stairs: \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			if((i+j)%2==0)//the line indicates that if i+j is even, the code prints 0 and if i+j is odd, the code prints 1
			printf("0");
			else 
			printf("1");
		}
		printf("\n");//when i=j, the printing shifts to the next line
	}
	return 0;
}
