#include <string.h> 
#include <stdio.h>



//Exercise 1
//Create - populate - display 3 variables.
void main()
{
	//Declare variables and set memory.
	int cartAmount;
	char bookTitle[50];
	int bookTitlelength;
	float length;

	printf_s("Please enter the number of items in your shopping cart - \n");
	scanf_s("%d" , &cartAmount);//capture the amount 

	while (cartAmount <= 0)//while loop to make sure the cart value is above or = 0
	{
		printf_s("Please enter an amount above 0 - \n");//asking the user to enter a value higher than 0
		scanf_s("%d", &cartAmount);

	}

	printf_s("Please enter a title of a great book ( please use _ as a space ) - \n");//capture book title
	scanf_s("%s" , bookTitle , strlen(bookTitle));
	bookTitlelength = strlen(bookTitle);//not able to caputre spaces
	//printf_s("Book length = %d \n", strlen(bookTitle));//Testing to see if book length is caputered


	printf_s("Please enter the length you wish to save ( must be between 0cm and 100cm ) - \n");//caputre length user wishes to save
	scanf_s("%f", &length);
	
	
	while (length <= 0 | length > 100)//loop to make sure value is with the range
	{
		printf_s("Please enter a value between 0cm and 100cm - \n");
		scanf_s(" %f", &length);

	}


	//Display the values to the user
	printf_s("You have %d items in your cart.\n", cartAmount);//cart value
	printf_s("The title you entered was - %s\n", bookTitle);//book title value 
	printf_s("The value you wished to save was - %.2fcm\n", length);


}


