#include <string.h> 
#include <stdio.h>



//Exercise 1
//Create - populate - display 3 variables.
void main()
{
	int cartAmount;
	char bookTitle[50];
	int bookTitleLenght;
	float lenght;

	printf_s("Please enter the number of items in your shopping cart - \n");
	scanf_s("%d" , &cartAmount);//capture the amount 

	while (cartAmount <= 0)//while loop to make sure the cart value is above or = 0
	{
		printf_s("Please enter an amount above 0 - \n");//asking the user to enter a value higher than 0
		scanf_s("%d", &cartAmount);

	}

	printf_s("Please enter a title of a great book - \n");//capture book title
	scanf_s(" %c", bookTitle);
	printf_s("Book lenght = %d \n", strlen(bookTitle));//***get advise 

	printf_s("Please enter the lenght you wish to save - \n");

	






	//Display the values to the user
	printf_s("You have %d items in your cart.\n", cartAmount);//cart value
	printf_s("The title you entered was - %s\n", bookTitle);//book title value  , **Get advise


}





