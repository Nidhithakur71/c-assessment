#include<stdio.h>


int main()
{
	int total,add;
	int c;
	
	

	
	printf("\n                             welcome to foods corner       \n\n");
	printf("                                  select your menu              \n");
	
	
	
	
	

	printf("please place your order\n");
	printf(" =====================================================================\n\n");
	printf("1. pizza       price=160.00 rs/pcs\n");
	printf("2. burger      price=100.00 rs/pcs\n");
	printf("3. dosa        price=190.00 rs/pcs\n");
	printf("4. idli        price=80.00 rs/pcs\n");
	
	do
	{
		int a, c1=160,c2=100,c3=190,c4=80;
	
	printf("for more orders to press yes or no\n");
	
	printf("=========================================================================\n");
	printf("enter your choice.:-");
	scanf("%d",&a);
	
	switch (a)
	{
		case 1:
		printf("you select pizza\n");	
		printf("how much pizza you want?");
		scanf("%d",&a);
		add=a+c1;
		total=add+total;
		printf("total amount = %d",add);
		break;
			
		case 2:
		printf("you select burger\n");	
		printf("how much burger you want?");
		scanf("%d",&a);
		add=a+c2;
		total=add+total;
		printf("total amount = %d",add);
		break;	
		
		case 3:
		printf("you select dosa\n");	
		printf("how much dosa you want?");
		scanf("%d",&a);
		add=a+c3;
		total=add+total;
		printf("total amount = %d",add);
		break;	
		
		case 4:
		printf("you select idli\n");	
		printf("how much idli you want?");
		scanf("%d",&a);
		add=a+c4;
		total=add+total;
		printf("total amount = %d",add);
		break;
		
		default:
		printf("the dish you want is not available\n");
		break;
    }
    printf("\nDo you want to place another order? (y/n) :");
		scanf("\n%c",&c);
	}
	while(c=='y');
	printf("\n\nTotal amount: %d",total);
	
	return 0;

 }  
    
    
	

        
			
	 



