#include<stdio.h>
#include<stdlib.h>


enum menu {Akara, egusi, Okro, BitterLeaf, semo, Garri, Rice, Beans};
float menuPrizes[8] = {1.50, 3.0, 5, 1.0, 10.50, 20, 0.99, 15};
float totalCost = 0;
//FILE * fp;
//fp = fopen("foodmenureceipt.txt", "w");

struct foodOrder{
	enum menu food;
	float prize;
	int quantity;
	float sum;

};
void chooseMenu(int choice); //make a choice from the menu
struct foodOrder *menuCart(int choice); //add food choice and quantity to Cart
struct foodOrder *func(struct foodOrder *fufu);

int main(){

	FILE *fp;
	fp = fopen("foodmenureceipt.txt", "w");
	struct foodOrder *foodp; //pointer to foodOder structure

	printf("\n****************************************************\n");
	//make 4 choices of food
	for(int i = 0; i < 4; i++){
	int choice;
	printf("Make a choice (choose a numer 1-8): ");
	scanf("%d", &choice);//choose food by the numbers

//type zero to quite current transaction if choices are less than 4
	if(choice == 0){
		i = 4;
	}

	chooseMenu(choice);

//show food, price and quantity
	foodp = menuCart(choice);
fprintf(fp, "Item no: %i,  %i   %f      %f\n",choice, foodp->quantity, foodp->prize, (foodp->quantity)*(foodp->prize));
	printf("\n****************************************************\n");
	}
	fprintf(fp,"*************************************\n");
	fprintf(fp,"Total               %f\n", totalCost);
	fprintf(fp,"*************************************\n");
	printf("\nTotal: %f\n", totalCost);
	return 0;
}

/*******************Functions definitions*************************/
void chooseMenu(int choice){
	printf("choice number: %d\n", choice);
}

/**************************************************************
 *                          SOPPING CART                      
 *
 **************************************************************/

struct foodOrder *menuCart(int choice){
//create a structure of food order. to set food and prize
	struct foodOrder order;
	struct foodOrder *orderp;  //pointer to order. 
	orderp = &order;

	switch(choice){
//akara as choice
		case 1:
			order.food = Akara;
			order.prize = menuPrizes[0];
			printf("food: Akara, prize: $%f\n",order.prize);
			order.sum = 0.0;
			printf("quantity: ");
			scanf("%d", &(order.quantity));
		order.sum = order.sum + (order.prize *(float)order.quantity);
		totalCost = totalCost + order.sum;
		printf("Akara, Qty: %d, sum: %f\n", order.quantity, order.sum);
	//	fprintf(fp, "Akara   %d    %f", order.quantity, order.sum);
		//	return orderp;
			break;

		case 2:
			order.food = egusi;
			order.prize = menuPrizes[1];
			printf("food: Egusi, prize: $%f\n",order.prize);
			order.sum = 0.0;
			printf("quantity: ");
			scanf("%d", &(order.quantity));
		order.sum = order.sum + (order.prize *(float)order.quantity);
		totalCost = totalCost + order.sum;
		printf("egusi, Qty: %d, sum: %f\n", order.quantity, order.sum);
			//return orderp;
			break;
		case 3:
			//Okro is selected
			order.food = Okro;
			order.prize = menuPrizes[2]; //prize of okro from array
			printf("food: Okro, prize: $%f\n",order.prize);
			order.sum = 0.0;
			//int quantity;
			printf("quantity: ");
			scanf("%d", &(order.quantity));
		order.sum = order.sum + (order.prize *(float)order.quantity);
		totalCost = totalCost + order.sum;
		printf("Okro, Qty: %d, sum: %f\n", order.quantity, order.sum);
			break;
		case 4:
			order.food = BitterLeaf;
			order.prize = menuPrizes[3];
			printf("food: Bitter leaf, prize: $%f\n",order.prize);
			order.sum = 0.0;
			//int quantity;
			printf("quantity: ");
			scanf("%d", &(order.quantity));
		order.sum = order.sum + (order.prize *(float)order.quantity);
		totalCost = totalCost + order.sum;
	printf("Bitter leaf, Qty: %d, sum: %f\n", order.quantity, order.sum);
			break;

		case 5:
			order.food = semo;
			order.prize = menuPrizes[4];
			printf("food: semo, prize: $%f\n",order.prize);
			order.sum = 0.0;
			//int quantity;
			printf("quantity: ");
			scanf("%d", &(order.quantity));
		order.sum = order.sum + (order.prize *(float)order.quantity);
		totalCost = totalCost + order.sum;
		printf("semo, Qty: %d, sum: %f\n", order.quantity, order.sum);
			break;

		case 6:
			order.food = Garri;
			order.prize = menuPrizes[5];
			printf("food: Garri, prize: $%f\n",order.prize);
			order.sum = 0.0;
			//int quantity;
			printf("quantity: ");
			scanf("%d", &(order.quantity));
		order.sum = order.sum + (order.prize *(float)order.quantity);
		totalCost = totalCost + order.sum;
		printf("Garri, Qty: %d, sum: %f\n", order.quantity, order.sum);
			break;

		case 7:
			order.food = Rice;
			order.prize = menuPrizes[6];
			printf("food: Rice, prize: $%f\n",order.prize);
			order.sum = 0.0;
			//int quantity;
			printf("quantity: ");
			scanf("%d", &(order.quantity));
		order.sum = order.sum + (order.prize *(float)order.quantity);
		totalCost = totalCost + order.sum;
		printf("Rice, Qty: %d, sum: %f\n", order.quantity, order.sum);
			break;

		case 8:
			order.food = Beans;
			order.prize = menuPrizes[7];
			printf("food: Beans, prize: $%f\n",order.prize);
			order.sum = 0.0;
			//int quantity;
			printf("quantity: ");
			scanf("%d", &(order.quantity));
		order.sum = order.sum + (order.prize *(float)order.quantity);
		totalCost = totalCost + order.sum;
		printf("Beans, Qty: %d, sum: %f\n", order.quantity, order.sum);
			break;

		case 0:
			break;										
	}
	return orderp;

}

struct foodOrder *func(struct foodOrder *fufu){
	fufu->prize = 10000;
	fufu->quantity = 20000;
	fufu->sum = 30000;
	return fufu;
}
