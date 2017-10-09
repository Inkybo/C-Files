#include <stdio.h>

int main()
{
	float item_price;
	float item_quantity;
	float subtotal;
	float total;

	//input the item price
	printf("Enter the price of an item: ");
	scanf("%f", &item_price);

	//input item quantity
	printf("How many: ");
	scanf("%f", &item_quantity);

	//copmute subtotal
	subtotal = item_price * item_quantity;
	printf("Subtotal: %f \n", subtotal);

	//compute total
	total = subtotal + (subtotal * 0.06);
	printf("Your total is %f \n", total);

	return 0;
}
