#include<stdio.h>
main()
{
	printf("enter a number ");
	int choice=0;
	scanf("%d",&choice);
	switch(choice)
	{
		case 0:
			printf("your choice is zero ");
			break;
		case 1:
			printf("your choice is one");
			break;
		default: printf("number is'nt in the list");
		return 0;
	}

}
