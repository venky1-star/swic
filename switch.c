#include<stdio.h>
main()
{
	int choice;
	printf("Enter your choice between 1 to 5 : ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Food item-Pizza\nPrice-Rs 239");
			break;
			case 2:
				printf("\nFood item-Burger\nPrice-Rs 129");
				break;
				case 3:
					printf("\nFood item-Pasta\nPrice-Rs 179");
					break;
					case 4:
						printf("\nFood item-French Fries\nPrice Rs 99");
						break;
						case 5:
							printf("\nFood item-Sandwich\nPrice Rs 149");
							default:
								printf("Enter the valid option");
	}
}
