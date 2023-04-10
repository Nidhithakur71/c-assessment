#include<stdio.h>

int main()
{
	int a[2][3],b[2][3],c[2][3],i,y;
	
	printf("\n\n\t\t\t\t\t\tMatrix Multiplication");
	
	printf("\n\n--------------------------------  Matrix: 1 -------------------------------\n\n");
	
	for(i=0;i<2;i++)
	{
		for(y=0;y<3;y++)
		{
			printf("Enter element :");
			scanf("%d",&a[i][y]);
		}
	}

	for(i=0;i<2;i++)
	{
		for(y=0;y<3;y++)
		{
			printf("%d\t",a[i][y]);
		}
		printf("\n");
	}
	
	printf("\n\n--------------------------------  Matrix: 2 ---------------------------------\n\n");
		
	for(i=0;i<2;i++)
	{
		for(y=0;y<3;y++)
		{
			printf("Enter element :");
			scanf("%d",&b[i][y]);
		}
	}

	for(i=0;i<2;i++)
	{
		for(y=0;y<3;y++)
		{
			printf("%d\t",b[i][y]);
		}
		printf("\n");
	}
	
	printf("\n\n------------------------- Result : Multiplication	Matrix  -------------------------------\n\n");

	for(i=0;i<2;i++)
	{
		for(y=0;y<3;y++)
		{
			c[i][y]=a[i][y]*b[i][y];
		}
	}

	for(i=0;i<2;i++)
	{
		for(y=0;y<3;y++)
		{
			printf("%d\t",c[i][y]);
		}
		printf("\n");
	}	
	
	return 0;
}

