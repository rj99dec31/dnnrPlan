#include<stdio.h>
main()
{
	int n;
	printf("select any num b/w 1 to 5: ");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("food item- PASTA \n Price- Rs.179");
			break;
		case 2:
			printf("food item- BURGER \n Price- Rs.129");
			break;
		case 3:
			printf("food item- PIZZA \n Price- Rs.239");
			break;
		case 4:
			printf("food item- FRENCH FRIES \n Price- Rs.99");
			break;
		case 5:
			printf("food item- SANDWICH \n Price- Rs.149");
			break;
		default:
			printf("don\'t wanna eat?, then go just sleep");
	}
	return 0;
}
